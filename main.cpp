#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

#include<GL/glut.h>

#define PI (2*acos(0))

double cameraHeight;
double cameraAngle;
int drawgrid;
int drawaxes;
double angle;
double zRotation;

struct point
{
	double x,y,z;
};


void drawAxes()
{
	if(drawaxes==1)
	{
		glColor3f(1.0, 0.5, 0.5);
		glBegin(GL_LINES);{
			glVertex3f( 100,0,0);
			glVertex3f(-100,0,0);
		}glEnd();


		glColor3f(0.5, 1.0, 0.5);
		glBegin(GL_LINES);{

			glVertex3f(0,-100,0);
			glVertex3f(0, 100,0);

		}glEnd();


		glColor3f(0.5, 0.5, 1.0);
		glBegin(GL_LINES);{

			glVertex3f(0,0, 100);
			glVertex3f(0,0,-100);
		}glEnd();
	}
}


void drawGrid()
{
	int i;
	if(drawgrid==1)
	{
		glColor3f(0.2, 0.2, 0.2);	//grey
		glBegin(GL_LINES);{
			for(i=-8;i<=8;i++){

				if(i==0)
					continue;	//SKIP the MAIN axes

				//lines parallel to Y-axis
				glVertex3f(i*10, -90, 0);
				glVertex3f(i*10,  90, 0);

				//lines parallel to X-axis
				glVertex3f(-90, i*10, 0);
				glVertex3f( 90, i*10, 0);
			}
		}glEnd();
	}
}





void drawPipe(float startZ, float endZ, int slices, int stacks, float radius, float startGray, float endGray){


    float i, z, x, y, fraction, angle;

    float zStep = (endZ - startZ) / (float)stacks;

    for(z = startZ; z<=endZ; z+= zStep){

        fraction = (z-startZ) / (endZ - startZ);


        glColor3f(fraction * (endGray - startGray), fraction * (endGray - startGray), fraction * (endGray - startGray));

        for(i=0; i<slices; ++i){

            angle = i / slices * 2 * PI;


            glBegin(GL_QUADS);{
				glVertex3f(radius * cos(i / slices * 2 * PI), radius * sin(i / slices * 2 * PI), z );
				glVertex3f(radius * cos((i+1) / slices * 2 * PI), radius * sin((i+1) / slices * 2 * PI), z );
				glVertex3f(radius * cos((i+1) / slices * 2 * PI), radius * sin((i+1) / slices * 2 * PI), z + zStep);
				glVertex3f(radius * cos(i / slices * 2 * PI), radius * sin(i / slices * 2 * PI), z + zStep );

			}glEnd();
        }



    }


}


void drawBeenMidHalf(float radius,int slices,int stacks)
{
	struct point points[100][100];
	int i,j;
	double h,r, color;
	for(i=0;i<=stacks;i++)
	{
		h=i;
		r=10.0*exp((-h*h)*0.002);
		for(j=0;j<=slices;j++)
		{
			points[i][j].x=r*cos(((double)j/(double)slices)*2*PI);
			points[i][j].y=r*sin(((double)j/(double)slices)*2*PI);
			points[i][j].z=h;
		}

	}
	for(i=0;i<stacks;i++)
	{
		for(j=0;j<slices;j++)
		{

		    color = 0.4 + (j%2)*0.5;

			glColor3f(color,color,color);
			glBegin(GL_QUADS);{
				glVertex3f(points[i][j].x,points[i][j].y,points[i][j].z);
				glVertex3f(points[i][j+1].x,points[i][j+1].y,points[i][j+1].z);
				glVertex3f(points[i+1][j+1].x,points[i+1][j+1].y,points[i+1][j+1].z);
				glVertex3f(points[i+1][j].x,points[i+1][j].y,points[i+1][j].z);

			}glEnd();
		}

	}
}


void keyboardListener(unsigned char key, int x,int y){
	switch(key){

		case '1':
			drawgrid=1-drawgrid;
			break;

		default:
			break;
	}
}


void specialKeyListener(int key, int x,int y){
	switch(key){
		case GLUT_KEY_DOWN:		//down arrow key
			cameraHeight -= 3.0;
			break;
		case GLUT_KEY_UP:		// up arrow key
			cameraHeight += 3.0;
			break;

		case GLUT_KEY_RIGHT:
			cameraAngle += 0.03;
			break;
		case GLUT_KEY_LEFT:
			cameraAngle -= 0.03;
			break;

		case GLUT_KEY_PAGE_UP:
		    zRotation += 1;
			break;
		case GLUT_KEY_PAGE_DOWN:
		     zRotation -= 1;
			break;

		case GLUT_KEY_INSERT:
			break;

		case GLUT_KEY_HOME:
			break;
		case GLUT_KEY_END:
			break;

		default:
			break;
	}
}


void mouseListener(int button, int state, int x, int y){	//x, y is the x-y of the screen (2D)
	switch(button){
		case GLUT_LEFT_BUTTON:
			if(state == GLUT_DOWN){		// 2 times?? in ONE click? -- solution is checking DOWN or UP
				drawaxes=1-drawaxes;
			}
			break;

		case GLUT_RIGHT_BUTTON:
			//........
			break;

		case GLUT_MIDDLE_BUTTON:
			//........
			break;

		default:
			break;
	}
}



void display(){

	//clear the display
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0,0,0,0);	//color black
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	/********************
	/ set-up camera here
	********************/
	//load the correct matrix -- MODEL-VIEW matrix
	glMatrixMode(GL_MODELVIEW);

	//initialize the matrix
	glLoadIdentity();

	//now give three info
	//1. where is the camera (viewer)?
	//2. where is the camera looking?
	//3. Which direction is the camera's UP direction?

	//gluLookAt(100,100,100,	0,0,0,	0,0,1);
	gluLookAt(100*cos(cameraAngle), 100*sin(cameraAngle), cameraHeight,		0,0,0,		0,0,1);
	//gluLookAt(0,-1,150,	0,0,0,	0,0,1);


	//again select MODEL-VIEW
	glMatrixMode(GL_MODELVIEW);


	/****************************
	/ Add your objects from here
	****************************/




	drawAxes();
	drawGrid();
	glColor3f(1,0,0);


//    drawPipe(20,70,10,40,5,0.5,0.9);
 //   drawPipe(-50,-20,10,40,5,0.5,0.9);


    glRotatef(zRotation,0,0,1);
	drawBeenMidHalf(20,69,70);
	glRotatef(180,1,0,0);
	drawBeenMidHalf(20,69,70);


	//ADD this line in the end --- if you use double buffer (i.e. GL_DOUBLE)
	glutSwapBuffers();
}

void animate(){
	angle+=0.05;
	//codes for any changes in Models, Camera
	glutPostRedisplay();
}

void init(){
	//codes for initialization
	drawgrid=1;
	drawaxes=1;
	cameraHeight=100.0;
	cameraAngle=1.0;
	angle=0;

	zRotation = 0.0;

	//clear the screen
	glClearColor(0,0,0,0);

	/************************
	/ set-up projection here
	************************/
	//load the PROJECTION matrix
	glMatrixMode(GL_PROJECTION);

	//initialize the matrix
	glLoadIdentity();

	//give PERSPECTIVE parameters
	gluPerspective(80,	1,	1,	10000.0);
	//field of view in the Y (vertically)
	//aspect ratio that determines the field of view in the X direction (horizontally)
	//near distance
	//far distance
}

int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(1000, 700);
	glutInitWindowPosition(0, 0);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);	//Depth, Double buffer, RGB color

	glutCreateWindow("My OpenGL Program");

	init();

	glEnable(GL_DEPTH_TEST);	//enable Depth Testing

	glutDisplayFunc(display);	//display callback function
	glutIdleFunc(animate);		//what you want to do in the idle time (when no drawing is occuring)

	glutKeyboardFunc(keyboardListener);
	glutSpecialFunc(specialKeyListener);
	glutMouseFunc(mouseListener);

	glutMainLoop();		//The main loop of OpenGL

	return 0;
}
