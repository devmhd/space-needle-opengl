double cameraEyeX,
 cameraEyeY,
 cameraEyeZ,
 cameraCenterX,
 cameraCenterY,
 cameraCenterZ,
 cameraUpX,
 cameraUpY,
 cameraUpZ;



void initCamera(){

    cameraEyeX = cameraEyeY = cameraEyeZ = 100;
    cameraCenterX = cameraCenterY = cameraCenterZ = 0;

    cameraUpX = cameraUpY = 0;
    cameraUpZ = 1;

}

void positionCamera(){  // called in display


    gluLookAt(
                cameraEyeX,
                cameraEyeY,
                cameraEyeZ,

                cameraCenterX,
                cameraCenterY,
                cameraCenterZ,

                cameraUpX,
                cameraUpY,
                cameraUpZ


                );

}
