#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

#include<GL/glut.h>

double theAmount = 0;

#include "headers/utils.h"



#include "headers/camera.h"
#include "headers/listeners.h"
#include "headers/texture.h"
#include "headers/blocks.h"



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
	gluLookAt(ex,ey,ez,	cx,cy,cz, upx,upy,upz);
	//gluLookAt(0,-1,150,	0,0,0,	0,0,1);

//	positionCamera();


	//again select MODEL-VIEW
	glMatrixMode(GL_MODELVIEW);


	/****************************
	/ Add your objects from here
	****************************/




	drawAxes();
	drawGrid();
	glColor3f(1,1,1);



    drawBaseLevel0();

    glPushMatrix();

        glTranslatef(0,0,3.71);
        drawBaseLevel1();

    glPopMatrix();

    drawBaseLevel2();





    drawPartBaseRoof();
    glPushMatrix();
        glRotatef(120,0,0,1);
        drawPartBaseRoof();
        glRotatef(120,0,0,1);
        drawPartBaseRoof();

    glPopMatrix();




    glPushMatrix();

        glRotatef(60,0,0,1);
        drawAnglePillars();
        drawAnglePillarsUpper();
        glRotatef(120,0,0,1);
        drawAnglePillars();
        drawAnglePillarsUpper();
        glRotatef(120,0,0,1);
        drawAnglePillars();
        drawAnglePillarsUpper();
     glPopMatrix();



     glPushMatrix();

        glTranslatef(0,0,25.07);

        drawPartFloatingChamber();
        glRotatef(120,0,0,1);

        drawPartFloatingChamber();
        glRotatef(120,0,0,1);

        drawPartFloatingChamber();


     glPopMatrix();


     glPushMatrix();

        glTranslatef(0,0,57.82);

        drawPartFloatingBeams();
        glRotatef(120,0,0,1);

        drawPartFloatingBeams();
        glRotatef(120,0,0,1);

        drawPartFloatingBeams();


     glPopMatrix();


     // The crown

     glPushMatrix();

        glTranslatef(0,0,144.95);

        for(double angle = 0; angle < 360; angle += 7.5){

            drawPartCrown();
            glRotatef(7.5,0,0,1);

        }


     glPopMatrix();



     drawPipe(20);




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
	cameraHeight=144.0;
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


	loadAllBitmap();

//	initCamera();

	glutMainLoop();		//The main loop of OpenGL

	return 0;
}
