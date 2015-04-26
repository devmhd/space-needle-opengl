

void drawBaseLevel0(){



    //side
    applyTexture(tex_base_shops, 1,1,

                    17.1 , 0, 0,
                     23.1 , 0, 0,
                     23.1  , 0, 3.71,
                     17.1  , 0, 3.71
                     );

    for(int angle = 0; angle < 210; angle+= 15 ){


    applyTexture(tex_base_shops,1,1,

                     17.2 * cos(toRadian(angle)) , 17.2 * sin(toRadian(angle)), 0,
                     17.2 * cos(toRadian(angle+15)) , 17.2 * sin(toRadian(angle+15)), 0,
                     17.2 * cos(toRadian(angle+15)) , 17.2 * sin(toRadian(angle+15)), 3.71,
                     17.2 * cos(toRadian(angle)) , 17.2 * sin(toRadian(angle)), 3.71
                     );


    }


    //side
    applyTexture(tex_base_shops, 1,1,

                     17.1 * cos(toRadian(210)) , 17.1 * sin(toRadian(210)), 0,
                     23.1 * cos(toRadian(210)) , 23.1 * sin(toRadian(210)), 0,
                     23.1 * cos(toRadian(210)) , 23.1 * sin(toRadian(210)), 3.71,
                     17.1 * cos(toRadian(210)) , 17.1 * sin(toRadian(210)), 3.71
                     );



    // big R 2
    applyTexture(tex_base_shops, 1,1,

                     23.1 * cos(toRadian(210)) , 23.1 * sin(toRadian(210)), 0,
                     23.1 * cos(toRadian(225)) , 23.1 * sin(toRadian(225)), 0,
                     23.1 * cos(toRadian(225)) , 23.1 * sin(toRadian(225)), 3.71,
                     23.1 * cos(toRadian(210)) , 23.1 * sin(toRadian(210)), 3.71
                     );

    applyTexture(tex_base_shops, 1,1,

                     23.1 * cos(toRadian(225)) , 23.1 * sin(toRadian(225)), 0,
                     23.1 * cos(toRadian(240)) , 23.1 * sin(toRadian(240)), 0,
                     23.1 * cos(toRadian(240)) , 23.1 * sin(toRadian(240)), 3.71,
                     23.1 * cos(toRadian(225)) , 23.1 * sin(toRadian(225)), 3.71
                     );

    //side
    applyTexture(tex_base_shops, 1,1,

                     17.1 * cos(toRadian(240)) , 17.1 * sin(toRadian(240)), 0,
                     23.1 * cos(toRadian(240)) , 23.1 * sin(toRadian(240)), 0,
                     23.1 * cos(toRadian(240)) , 23.1 * sin(toRadian(240)), 3.71,
                     17.1 * cos(toRadian(240)) , 17.1 * sin(toRadian(240)), 3.71
                     );

     //small R 1
     applyTexture(tex_base_shops, 1,1,

                     17.2 * cos(toRadian(240)) , 17.2 * sin(toRadian(240)), 0,
                     17.2 * cos(toRadian(255)) , 17.2 * sin(toRadian(255)), 0,
                     17.2 * cos(toRadian(255)) , 17.2 * sin(toRadian(255)), 3.71,
                     17.2 * cos(toRadian(240)) , 17.2 * sin(toRadian(240)), 3.71
                     );



    //side
    applyTexture(tex_base_shops, 1,1,

                     17.1 * cos(toRadian(255)) , 17.1 * sin(toRadian(255)), 0,
                     23.1 * cos(toRadian(255)) , 23.1 * sin(toRadian(255)), 0,
                     23.1 * cos(toRadian(255)) , 23.1 * sin(toRadian(255)), 3.71,
                     17.1 * cos(toRadian(255)) , 17.1 * sin(toRadian(255)), 3.71
                     );


    glPushMatrix();

    glRotatef(255,0,0,1);

    for(int i =0; i<7; ++i){

        //floor
         applyTexture(tex_marble_tile, 1,1,

                     17.1 , 0, 0,
                     23.1 ,0, 0,
                     23.1 *cos(toRadian(15)) , 23.1 * sin(toRadian(15)), 0,
                     17.1 *cos(toRadian(15)) , 17.1 * sin(toRadian(15)), 0
                     );

         //balcony
         applyTexture(tex_marble_tile, 1,1,

                     23.1 ,0, 0,
                     23.1 *cos(toRadian(15)) , 23.1 * sin(toRadian(15)), 0,
                     23.1 *cos(toRadian(15)) , 23.1 * sin(toRadian(15)), 2.0,
                     23.1 ,0, 2.0
                     );

        //rods
         applyTexture(tex_rod, 1,5,

                     23.1 *cos(toRadian(14)) , 23.1 * sin(toRadian(14)), 2,
                     23.1 *cos(toRadian(15)) , 23.1 * sin(toRadian(15)), 2,
                     23.1 *cos(toRadian(15)) , 23.1 * sin(toRadian(15)), 3,
                     23.1 *cos(toRadian(14)) , 23.1 * sin(toRadian(14)), 3
                     );

        //upper balcony
         applyTexture(tex_base_upper_balcony, 7,1,

                     23.1 ,0, 3,
                     23.1 *cos(toRadian(15)) , 23.1 * sin(toRadian(15)), 3,
                     23.1 *cos(toRadian(15)) , 23.1 * sin(toRadian(15)), 3.71,
                     23.1 ,0, 3.71
                     );


        //roof
         applyTexture(tex_base_roof, 1,2,

                     17.1 , 0, 3.71,
                     23.1 ,0, 3.71,
                     23.1 *cos(toRadian(15)) , 23.1 * sin(toRadian(15)), 3.71,
                     17.1 *cos(toRadian(15)) , 17.1 * sin(toRadian(15)), 3.71
                     );




        glRotatef(15,0,0,1);
    }
    glPopMatrix();



}


void drawBaseLevel1(){




    for(int angle = 0; angle < 255; angle+= 15 ){

    int tex = tex_base1_0 + (angle/15)%3;

     applyTexture(tex, 1,1,

                     23.1 * cos(toRadian(angle)) , 23.1 * sin(toRadian(angle)), 0,
                     23.1 * cos(toRadian(angle+15)) , 23.1 * sin(toRadian(angle+15)), 0,
                     23.1 * cos(toRadian(angle+15)) , 23.1 * sin(toRadian(angle+15)), 4.71,
                     23.1 * cos(toRadian(angle)) , 23.1 * sin(toRadian(angle)), 4.71
                     );

    applyTexture(tex_base_roof, 1,2,

                     17.1 * cos(toRadian(angle)), 17.1 * sin(toRadian(angle)), 0,
                     23.1 * cos(toRadian(angle)),23.1 * sin(toRadian(angle)), 0,
                     23.1 *cos(toRadian(angle+15)) , 23.1 * sin(toRadian(angle+15)), 0,
                     17.1 *cos(toRadian(angle+15)) , 17.1 * sin(toRadian(angle+15)), 0
                     );


    applyTexture(tex_base_roof, 1,2,


                     17.1 * cos(toRadian(angle)), 17.1 * sin(toRadian(angle)), 4.71,
                     23.1 * cos(toRadian(angle)),23.1 * sin(toRadian(angle)), 4.71,
                     23.1 *cos(toRadian(angle+15)) , 23.1 * sin(toRadian(angle+15)), 4.71,
                     17.1 *cos(toRadian(angle+15)) , 17.1 * sin(toRadian(angle+15)), 4.71
                     );


     }


     //side
    applyTexture(tex_base_shops, 1,1,

                     17.1 * cos(toRadian(0)) , 17.1 * sin(toRadian(0)), 0,
                     23.1 * cos(toRadian(0)) , 23.1 * sin(toRadian(0)), 0,
                     23.1 * cos(toRadian(0)) , 23.1 * sin(toRadian(0)), 4.71,
                     17.1 * cos(toRadian(0)) , 17.1 * sin(toRadian(0)), 4.71
                     );

    //side
    applyTexture(tex_base_shops, 1,1,

                     17.1 * cos(toRadian(255)) , 17.1 * sin(toRadian(255)), 0,
                     23.1 * cos(toRadian(255)) , 23.1 * sin(toRadian(255)), 0,
                     23.1 * cos(toRadian(255)) , 23.1 * sin(toRadian(255)), 4.71,
                     17.1 * cos(toRadian(255)) , 17.1 * sin(toRadian(255)), 4.71
                     );
}

void drawBaseLevel2(){

    for(int angle = 0; angle < 360; angle+= 15 ){


    // wall
    applyTexture(tex_base_2_0,1,1,

                     17.1 * cos(toRadian(angle)) , 17.1 * sin(toRadian(angle)), 0,
                     17.1 * cos(toRadian(angle+15)) , 17.1 * sin(toRadian(angle+15)), 0,
                     17.1 * cos(toRadian(angle+15)) , 17.1 * sin(toRadian(angle+15)), 11.81,
                     17.1 * cos(toRadian(angle)) , 17.1 * sin(toRadian(angle)), 11.81
                     );

    //roof
    applyTexture(tex_base_roof, 1,2,
                     17.1 * cos(toRadian(angle)), 17.1 * sin(toRadian(angle)), 11.81,
                     15.7 * cos(toRadian(angle)),15.7 * sin(toRadian(angle)), 11.81,
                     15.7 *cos(toRadian(angle+15)) , 15.7 * sin(toRadian(angle+15)), 11.81,
                     17.1 *cos(toRadian(angle+15)) , 17.1 * sin(toRadian(angle+15)), 11.81
                     );


    // upper wall
    applyTexture(tex_base_3_0,1,2,

                     15.7 * cos(toRadian(angle)) , 15.7 * sin(toRadian(angle)), 14.81,
                     15.7 * cos(toRadian(angle+15)) , 15.7 * sin(toRadian(angle+15)), 14.81,
                     15.7 * cos(toRadian(angle+15)) , 15.7 * sin(toRadian(angle+15)), 11.81,
                     15.7 * cos(toRadian(angle)) , 15.7 * sin(toRadian(angle)), 11.81
                     );


    }


}



void drawPartBaseRoof(){

 //roofy1
    for(int angle = -60 ; angle < -30; angle+= 15 ){

    glBegin(GL_QUADS);

        glVertex3f(-4.27 / tan(toRadian(angle)), -4.27, 14.81);
        glVertex3f(15.7 * cos(toRadian(angle)) , 15.7 * sin(toRadian(angle)), 14.81);
        glVertex3f(15.7 * cos(toRadian(angle+15)) , 15.7 * sin(toRadian(angle+15)), 14.81);
        glVertex3f(-4.27 / tan(toRadian(angle+15)), -4.27, 14.81);


    glEnd();

    }

    //roofx
    for(int angle = -30 ; angle < 30; angle+= 15 ){

    glBegin(GL_QUADS);

        glVertex3f(7.63, 7.63 * tan(toRadian(angle)), 14.81);
        glVertex3f(15.7 * cos(toRadian(angle)) , 15.7 * sin(toRadian(angle)), 14.81);
        glVertex3f(15.7 * cos(toRadian(angle+15)) , 15.7 * sin(toRadian(angle+15)), 14.81);
        glVertex3f(7.63, 7.63 * tan(toRadian(angle+15)), 14.81);


    glEnd();

    }

    //roofy2
    for(int angle = 30 ; angle < 60; angle+= 15 ){

    glBegin(GL_QUADS);

        glVertex3f(4.27 / tan(toRadian(angle)), 4.27, 14.81);
        glVertex3f(15.7 * cos(toRadian(angle)) , 15.7 * sin(toRadian(angle)), 14.81);
        glVertex3f(15.7 * cos(toRadian(angle+15)) , 15.7 * sin(toRadian(angle+15)), 14.81);
        glVertex3f(4.27 / tan(toRadian(angle+15)), 4.27, 14.81);


    glEnd();

    }


    //inner walls

    applyTexture(tex_center_pillar_wall,1,2,

                 7.63, 7.63 * tan(toRadian(30)), 0,
                 7.63, 7.63 * tan(toRadian(-30)),0,
                 7.63, 7.63 * tan(toRadian(-30)),14.81,
                 7.63, 7.63 * tan(toRadian(30)), 14.81
                 );

    applyTexture(tex_center_pillar_wall,1,2,

                 -4.27 / tan(toRadian(-60)), -4.27, 0,
                 -4.27 / tan(toRadian(-30)), -4.27, 0,
                 -4.27 / tan(toRadian(-30)), -4.27, 14.81,
                 -4.27 / tan(toRadian(-60)), -4.27, 14.81
                 );

    applyTexture(tex_center_pillar_wall,1,2,

                 4.27 / tan(toRadian(60)), 4.27, 0,
                 4.27 / tan(toRadian(30)), 4.27, 0,
                 4.27 / tan(toRadian(30)), 4.27, 14.81,
                 4.27 / tan(toRadian(60)), 4.27, 14.81
                 );


    // center pillar
    applyTexture(tex_center_pillar_wall, 2,25,
                 2.5,4.27,0,
                 2.5,-4.27,0,
                 2.5,-4.27,150,
                 2.5,4.27,150
                 );

}

void drawAnglePillars(){


    // pillar angle is 81.7

    glBegin(GL_QUADS);

        glVertex3f(19.44, 1.98, 0);
        glVertex3f(19.44, 3.21, 0);
        glVertex3f(7.404, 3.21, 82.5);
        glVertex3f(7.404, 1.98, 82.5);


    glEnd();

    glBegin(GL_QUADS);

        glVertex3f(19.44, -1.98, 0);
        glVertex3f(19.44, -3.21, 0);
        glVertex3f(7.404, -3.21, 82.5);
        glVertex3f(7.404, -1.98, 82.5);


    glEnd();


    glBegin(GL_QUADS);

        glVertex3f(21.81, 1.98, 0);
        glVertex3f(21.81, 3.21, 0);
        glVertex3f(9.774, 3.21, 82.5);
        glVertex3f(9.774, 1.98, 82.5);


    glEnd();

    glBegin(GL_QUADS);

        glVertex3f(21.81, -1.98, 0);
        glVertex3f(21.81, -3.21, 0);
        glVertex3f(9.774, -3.21, 82.5);
        glVertex3f(9.774, -1.98, 82.5);


    glEnd();









     glBegin(GL_QUADS);

        glVertex3f(19.44, 3.21, 0);
        glVertex3f(21.81, 3.21, 0);
        glVertex3f(9.774, 3.21, 82.5);
        glVertex3f(7.404, 3.21, 82.5);


    glEnd();

     glBegin(GL_QUADS);

        glVertex3f(19.44, 1.98, 0);
        glVertex3f(21.81, 1.98, 0);
        glVertex3f(9.774, 1.98, 82.5);
        glVertex3f(7.404, 1.98, 82.5);


    glEnd();


    glBegin(GL_QUADS);

        glVertex3f(19.44, -1.98, 0);
        glVertex3f(21.81, -1.98, 0);
        glVertex3f(9.774, -1.98, 82.5);
        glVertex3f(7.404, -1.98, 82.5);


    glEnd();


    glBegin(GL_QUADS);

        glVertex3f(19.44, -3.21, 0);
        glVertex3f(21.81, -3.21, 0);
        glVertex3f(9.774, -3.21, 82.5);
        glVertex3f(7.404, -3.21, 82.5);


    glEnd();


}

void drawPartFloatingChamber(){

    //lowest level
    applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) , 15.8 * sin(toRadian(60)), 0,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),0,
                7.63, 4.27, 0,
                2.5, 4.27,0

                 );

    applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) , -15.8 * sin(toRadian(60)), 0,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),0,
                7.63, -4.27, 0,
                2.5, -4.27,0

                 );

     applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),0,
                7.63, 4.27, 0,
               7.63, -4.27, 0,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),0

                 );


    //mid level
    applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) , 15.8 * sin(toRadian(60)), 1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83,
                7.63, 4.27, 1.83,
                2.5, 4.27,1.83

                 );

    applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) , -15.8 * sin(toRadian(60)), 1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                7.63, -4.27, 1.83,
                2.5, -4.27,1.83

                 );

    applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83,
                7.63, 4.27, 1.83,
               7.63, -4.27, 1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83

                 );

    // sides
    applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) , 15.8 * sin(toRadian(60)), 0,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),0,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) , 15.8 * sin(toRadian(60)), 1.83
                  );

    applyTexture(tex_concrete, 1,6,

                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),0,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),0,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83
                     );

    applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) , -15.8 * sin(toRadian(60)), 0,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),0,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) , -15.8 * sin(toRadian(60)), 1.83
                  );


    //roof
    applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) , 15.8 * sin(toRadian(60)), 6.93,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),6.93,
                7.63, 4.27, 6.93,
                2.5, 4.27,6.93

                 );

    applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) , -15.8 * sin(toRadian(60)), 6.93,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),6.93,
                7.63, -4.27, 6.93,
                2.5, -4.27,6.93

                 );

     applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),6.93,
                7.63, 4.27, 6.93,
                7.63, -4.27, 6.93,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),6.93
                 );


    //extension roof
    applyTexture(tex_concrete, 1,1,

                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),6.93,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),6.93,
                 15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),6.93,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),6.93
                 );

     //extension base
    applyTexture(tex_fchamber_ext_base, 4,1,

                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83,
                 15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                  15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83


                 );


    // extension walls/windows
    applyTexture(tex_fchamber_wall, 1,1,

                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),6.93,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),6.93
                 );

     applyTexture(tex_fchamber_wall, 1,1,

                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),6.93,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),6.93
                 );

    applyTexture(tex_fchamber_wall, 1,1,

                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)) + 4.82, -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),6.93,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),6.93
                 );

    //fill gap between pillars
    applyTexture(tex_fchamber_wall, 1,1,

                15.8 * cos(toRadian(60)) , 15.8 * sin(toRadian(60)), 1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 15.8 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),6.93,
                15.8 * cos(toRadian(60)) , 15.8 * sin(toRadian(60)), 6.93
                  );

    applyTexture(tex_fchamber_wall, 1,1,

                15.8 * cos(toRadian(60)) , -15.8 * sin(toRadian(60)), 1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                15.8 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -15.8 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),6.93,
                15.8 * cos(toRadian(60)) , -15.8 * sin(toRadian(60)), 6.93
                  );


    //inner walls
    applyTexture(tex_concrete, 1,1,

                7.63, 4.27, 0,
                2.5, 4.27,0,
                2.5, 4.27,6.93,
                7.63, 4.27, 6.93

                 );

    applyTexture(tex_concrete, 1,1,

                7.63, -4.27, 0,
                2.5, -4.27,0,
                2.5, -4.27,6.93,
                7.63, -4.27, 6.93

                 );

    applyTexture(tex_concrete, 1,1,


                7.63, 4.27, 0,
                7.63, -4.27, 0,
                7.63, -4.27, 6.93,
                7.63, 4.27, 6.93


                 );



}
