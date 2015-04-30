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

        case 'e':
			theAmount -= 0.1;
			printf("amount %f\n", theAmount);
			break;

			case 'w':
			cam.slide(0, 0, -2.5);
			break;
		case 's':
			cam.slide(0, 0, 2.5);
			break;
		case 'f':
			cam.roll(.08);
			break;
		case 'g':
			cam.roll(-.08);
			break;
		case 'o':
			cam.pitch(-.08);
			break;
		case 'p':
			cam.pitch(.08);
			break;
		case 'd':
			cam.yaw(.08);
			break;
		case 'a':
			cam.yaw(-.08);
			break;

        case 'l':
            flagDiffuseLightColor = 1- flagDiffuseLightColor;
            break;


        case '7':
           Diffuse_Light_angle +=.05;
            break;

        case '8':
        		Diffuse_Light_angle -= .05;
            break;

		default:
			break;
	}
}

void specialKeyListener(int key, int x, int y) {
	switch(key) {
		case GLUT_KEY_DOWN:		//down arrow key
			cam.slide(0, -2.5, 0);
			break;
		case GLUT_KEY_UP:		// up arrow key
			cam.slide(0, 2.5, 0);
			break;
		case GLUT_KEY_RIGHT:
			cam.slide(2.5, 0, 0);
			break;
		case GLUT_KEY_LEFT:
			cam.slide(-2.5, 0, 0);
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
