double cameraHeight;
double cameraAngle;
int drawgrid;
int drawaxes;
double angle;
double zRotation;

void keyboardListener(unsigned char key, int x,int y){
	switch(key){



        case 'q':
			theAmount += 0.1;
			printf("amount %f\n", theAmount);
			break;

        case 'w':
			theAmount -= 0.1;
			printf("amount %f\n", theAmount);
			break;

			case '1':
        camera_rot -= .1;
		upx = upx*cos(double(camera_rot))+upz*sin(double(camera_rot));
		upz= -upz*cos(double(camera_rot))+upx*sin(double(camera_rot));
		if(camera_rot<=-2*PI){
			camera_rot=0;
		}

			break;
        case '2':
        camera_rot += .1;
		upx = upx*cos(double(camera_rot))+upz*sin(double(camera_rot));
		upz= -upz*cos(double(camera_rot))+upx*sin(double(camera_rot));
		if(camera_rot<=-2*PI){
			camera_rot=0;
		}


			break;
        case '3':
			cx-=10;
			break;
        case '4':
			cx+=10;
			break;

        case '5':
			cz+=10;
			break;
        case '6':
			cz-=10;
			break;
        case '7':
//            point_light_angle += 10;
            break;

        case '8': //decrease rotation
//          point_light_angle -= .02;
            break;
        case '9':
            drawgrid=1-drawgrid;
            break;


		default:
			break;
	}
}


void specialKeyListener(int key, int x,int y){

	switch(key){
		case GLUT_KEY_DOWN:		//down arrow key
			//cameraHeight -= 3.0;
			ez-=5;
			cz-=5;
			break;
		case GLUT_KEY_UP:		// up arrow key
			//cameraHeight += 3.0;
			ez+=5;
			cz+=5;
			break;

		case GLUT_KEY_RIGHT:
			//cameraAngle += 0.03;
			ex-=5;
			cx-=5;
			break;
		case GLUT_KEY_LEFT:
			//cameraAngle -= 0.03;
			ex+=5;
			cx+=5;
			break;

		case GLUT_KEY_PAGE_UP:
		    //zRotation += 1;
		    ey-=5;
			break;
		case GLUT_KEY_PAGE_DOWN:
		     //zRotation -= 1;
            ey+=5;
			break;

		case GLUT_KEY_INSERT:
		    /*yawAngle+=10;
            yawAngle=(yawAngle%360);
            //printf("%d\n",yawAngle);
			dist=sqrt((cx-ex)*(cx-ex)+(cy-ey)*(cy-ey));
			printf("%d\n",dist);
            cx=ex+dist*cos(yawAngle);
            cy=ey+dist*sin(yawAngle);
            //printf("%f %f %f %f\n",ex,ey,cx,cy);
			break;*/

		case GLUT_KEY_HOME:
//		    point_light_color=true;
			break;
		case GLUT_KEY_END:
//		    point_light_color=false;
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
