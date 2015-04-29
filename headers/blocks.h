

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


    // pillar 1
    glBegin(GL_QUADS);

        glVertex3f(19.44, 1.98, 0);
        glVertex3f(19.44, 3.21, 0);
        glVertex3f(19.44 - 96.6/tan(toRadian(81.7)), 3.21, 96.6);
        glVertex3f(19.44 - 96.6/tan(toRadian(81.7)), 1.98, 96.6);


    glEnd();


    glBegin(GL_QUADS);

        glVertex3f(2.37 + 19.44, 1.98, 0);
        glVertex3f(2.37 + 19.44, 3.21, 0);
        glVertex3f(2.37 + 19.44 - 96.6/tan(toRadian(81.7)), 3.21, 96.6);
        glVertex3f(2.37 + 19.44 - 96.6/tan(toRadian(81.7)), 1.98, 96.6);


    glEnd();


    glBegin(GL_QUADS);

        glVertex3f(19.44, 3.21, 0);
        glVertex3f(19.44 - 96.6/tan(toRadian(81.7)), 3.21, 96.6);
        glVertex3f(2.37 + 19.44 - 96.6/tan(toRadian(81.7)), 3.21, 96.6);
        glVertex3f(2.37 + 19.44, 3.21, 0);


    glEnd();


    glBegin(GL_QUADS);

        glVertex3f(19.44, 1.98, 0);
        glVertex3f(19.44 - 96.6/tan(toRadian(81.7)), 1.98, 96.6);
        glVertex3f(2.37 + 19.44 - 96.6/tan(toRadian(81.7)), 1.98, 96.6);
        glVertex3f(2.37 + 19.44, 1.98, 0);


    glEnd();







    //pillar 2
    glBegin(GL_QUADS);

        glVertex3f(19.44, -1.98, 0);
        glVertex3f(19.44, -3.21, 0);
        glVertex3f(19.44 - 96.6/tan(toRadian(81.7)), -3.21, 96.6);
        glVertex3f(19.44 - 96.6/tan(toRadian(81.7)), -1.98, 96.6);

    glEnd();




    glBegin(GL_QUADS);

        glVertex3f(2.37 + 19.44, -1.98, 0);
        glVertex3f(2.37 + 19.44, -3.21, 0);
        glVertex3f(2.37 + 19.44 - 96.6/tan(toRadian(81.7)), -3.21, 96.6);
        glVertex3f(2.37 + 19.44 - 96.6/tan(toRadian(81.7)), -1.98, 96.6);

    glEnd();


    glBegin(GL_QUADS);

        glVertex3f(19.44, -3.21, 0);
        glVertex3f(19.44 - 96.6/tan(toRadian(81.7)), -3.21, 96.6);
        glVertex3f(2.37 + 19.44 - 96.6/tan(toRadian(81.7)), -3.21, 96.6);
        glVertex3f(2.37 + 19.44, -3.21, 0);


    glEnd();


    glBegin(GL_QUADS);

        glVertex3f(19.44, -1.98, 0);
        glVertex3f(19.44 - 96.6/tan(toRadian(81.7)), -1.98, 96.6);
        glVertex3f(2.37 + 19.44 - 96.6/tan(toRadian(81.7)), -1.98, 96.6);
        glVertex3f(2.37 + 19.44, -1.98, 0);


    glEnd();


    // fill betwwen pillars
    glBegin(GL_QUADS);

        glVertex3f(19.44 - 96.6/tan(toRadian(81.7)) + 1.9, 1.98, 96.6);
        glVertex3f(19.44 - 85.6/tan(toRadian(81.7)) + 1.9, 1.98, 85.6);
        glVertex3f(19.44 - 85.6/tan(toRadian(81.7)) + 1.9, -1.98, 85.6);
        glVertex3f(19.44 - 96.6/tan(toRadian(81.7)) + 1.9, -1.98, 96.6);

    glEnd();





}

void drawAnglePillarsUpper(){


    // pillar angle 84.4

    glPushMatrix();

        glTranslatef(0,0,96.6);

        // pillar 1
        glBegin(GL_QUADS);

            glVertex3f(4.2, 1.98, 0);
            glVertex3f(4.2, 3.21, 0);
            glVertex3f(4.2 + 48.35/tan(toRadian(84.4)), 3.21, 48.35);
            glVertex3f(4.2 + 48.35/tan(toRadian(84.4)), 1.98, 48.35);

        glEnd();


        glBegin(GL_QUADS);

            glVertex3f(2.37 + 4.2, 1.98, 0);
            glVertex3f(2.37 + 4.2, 3.21, 0);
            glVertex3f(2.37 + 4.2 + 48.35/tan(toRadian(84.4)), 3.21, 48.35);
            glVertex3f(2.37 + 4.2 + 48.35/tan(toRadian(84.4)), 1.98, 48.35);

        glEnd();


        glBegin(GL_QUADS);

            glVertex3f(4.2, 3.21, 0);
            glVertex3f(4.2 + 48.35/tan(toRadian(84.4)), 3.21, 48.35);
            glVertex3f(2.37 + 4.2 + 48.35/tan(toRadian(84.4)), 3.21, 48.35);
            glVertex3f(2.37 + 4.2, 3.21, 0);

        glEnd();


        glBegin(GL_QUADS);

            glVertex3f(4.2, 1.98, 0);
            glVertex3f(4.2 + 48.35/tan(toRadian(84.4)), 1.98, 48.35);
            glVertex3f(2.37 + 4.2 + 48.35/tan(toRadian(84.4)), 1.98, 48.35);
            glVertex3f(2.37 + 4.2, 1.98, 0);

        glEnd();





        // pillar 2
        glBegin(GL_QUADS);

            glVertex3f(4.2, -1.98, 0);
            glVertex3f(4.2, -3.21, 0);
            glVertex3f(4.2 + 48.35/tan(toRadian(84.4)), -3.21, 48.35);
            glVertex3f(4.2 + 48.35/tan(toRadian(84.4)), -1.98, 48.35);

        glEnd();


        glBegin(GL_QUADS);

            glVertex3f(2.37 + 4.2, -1.98, 0);
            glVertex3f(2.37 + 4.2, -3.21, 0);
            glVertex3f(2.37 + 4.2 + 48.35/tan(toRadian(84.4)), -3.21, 48.35);
            glVertex3f(2.37 + 4.2 + 48.35/tan(toRadian(84.4)), -1.98, 48.35);

        glEnd();


        glBegin(GL_QUADS);

            glVertex3f(4.2, -3.21, 0);
            glVertex3f(4.2 + 48.35/tan(toRadian(84.4)), -3.21, 48.35);
            glVertex3f(2.37 + 4.2 + 48.35/tan(toRadian(84.4)), -3.21, 48.35);
            glVertex3f(2.37 + 4.2, -3.21, 0);

        glEnd();


        glBegin(GL_QUADS);

            glVertex3f(4.2, -1.98, 0);
            glVertex3f(4.2 + 48.35/tan(toRadian(84.4)), -1.98, 48.35);
            glVertex3f(2.37 + 4.2 + 48.35/tan(toRadian(84.4)), -1.98, 48.35);
            glVertex3f(2.37 + 4.2, -1.98, 0);

        glEnd();




    glPopMatrix();
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


    glPushMatrix();

        glTranslatef(10.68, -12.078, 1.83);

        for(int i=0; i<9; ++i){


        applyTexture(tex_metal, 1,1,

                     0,0,0,
                     5.01,0,0,
                     5.01,0,-0.15,
                     0,0,-1.84
                     );

        applyTexture(tex_metal, 1,1,

                     0,0.15,0,
                     5.01,0.15,0,
                     5.01,0.15,-0.15,
                     0,0.15,-1.84
                     );


        applyTexture(tex_metal, 1,1,

                     5.01,0,0,
                     5.01,0,-0.15,
                     5.01,0.15,-0.15,
                     5.01,0.15,0
                     );

        applyTexture(tex_metal, 1,1,
                    0,0,0,
                     5.01,0,0,
                     5.01,0.15,0,
                     0,0.15,0
                     );

        applyTexture(tex_metal, 1,1,

                     0,0,-1.84,
                     5.01,0,-0.15,
                     5.01,0.15,-0.15,
                     0,0.15,-1.84
                     );

        glTranslatef(0,3.00075,0);

        }





        //

    glPopMatrix();



}

void drawPartFloatingBeams(){


    //lowest level
    applyTexture(tex_concrete, 1,1,

                11.0 * cos(toRadian(60)) , 11.0 * sin(toRadian(60)), 0,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 11.0 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),0,
                7.63, 4.27, 0,
                2.5, 4.27,0

                 );

    applyTexture(tex_concrete, 1,1,

                11.0 * cos(toRadian(60)) , -11.0 * sin(toRadian(60)), 0,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -11.0 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),0,
                7.63, -4.27, 0,
                2.5, -4.27,0

                 );

     applyTexture(tex_concrete, 1,1,

                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 11.0 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),0,
                7.63, 4.27, 0,
               7.63, -4.27, 0,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -11.0 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),0

                 );


    //mid level
    applyTexture(tex_concrete, 1,1,

                11.0 * cos(toRadian(60)) , 11.0 * sin(toRadian(60)), 1.83,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 11.0 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83,
                7.63, 4.27, 1.83,
                2.5, 4.27,1.83

                 );

    applyTexture(tex_concrete, 1,1,

                11.0 * cos(toRadian(60)) , -11.0 * sin(toRadian(60)), 1.83,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -11.0 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                7.63, -4.27, 1.83,
                2.5, -4.27,1.83

                 );

    applyTexture(tex_concrete, 1,1,

                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 11.0 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83,
                7.63, 4.27, 1.83,
               7.63, -4.27, 1.83,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -11.0 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83

                 );

    // sides
    applyTexture(tex_concrete, 1,1,

                11.0 * cos(toRadian(60)) , 11.0 * sin(toRadian(60)), 0,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 11.0 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),0,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 11.0 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83,
                11.0 * cos(toRadian(60)) , 11.0 * sin(toRadian(60)), 1.83
                  );

    applyTexture(tex_concrete, 1,6,

                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 11.0 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),0,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -11.0 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),0,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -11.0 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), 11.0 * sin(toRadian(60)) - 3.21 * sin(toRadian(30)),1.83
                     );

    applyTexture(tex_concrete, 1,1,

                11.0 * cos(toRadian(60)) , -11.0 * sin(toRadian(60)), 0,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -11.0 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),0,
                11.0 * cos(toRadian(60)) + 3.21 * cos(toRadian(30)), -11.0 * sin(toRadian(60)) + 3.21 * sin(toRadian(30)),1.83,
                11.0 * cos(toRadian(60)) , -11.0 * sin(toRadian(60)), 1.83
                  );



    //inner walls
    applyTexture(tex_concrete, 1,1,

                7.63, 4.27, 0,
                2.5, 4.27,0,
                2.5, 4.27,1.83,
                7.63, 4.27, 1.83

                 );

    applyTexture(tex_concrete, 1,1,

                7.63, -4.27, 0,
                2.5, -4.27,0,
                2.5, -4.27,1.83,
                7.63, -4.27, 1.83

                 );

    applyTexture(tex_concrete, 1,1,


                7.63, 4.27, 0,
                7.63, -4.27, 0,
                7.63, -4.27, 1.83,
                7.63, 4.27, 1.83


                 );

}


void drawPipe(double height){

    applyTexture(tex_concrete, 1,1,

                 0.075, 0.075, 0,
                 -0.075, 0.075, 0,
                 -0.075, 0.075, height,
                 0.075, 0.075, height
                 );

     applyTexture(tex_concrete, 1,1,

                 0.075, 0.075, 0,
                 0.075, -0.075, 0,
                 0.075, -0.075, height,
                 0.075, 0.075, height
                 );

    applyTexture(tex_concrete, 1,1,

                 0.075, -0.075, 0,
                 -0.075, -0.075, 0,
                 -0.075, -0.075, height,
                 0.075, -0.075, height
                 );


    applyTexture(tex_concrete, 1,1,

                 -0.075, 0.075, 0,
                 -0.075, -0.075, 0,
                 -0.075, -0.075, height,
                 -0.075, 0.075, height
                 );


}


void drawPartCrown(){


    //lowest ring

    //base
    applyTexture(tex_concrete, 1,1,


                9.7, 0, 0,
                9.7 + 2.37, 0, 0,
                (9.7 + 2.37) * cos(toRadian(8)), (9.7 + 2.37) * sin(toRadian(8)), 0,
                (9.7) * cos(toRadian(8)), (9.7) * sin(toRadian(8)), 0

                 );

    // inner wall
    applyTexture(tex_concrete, 1,1,


                9.7, 0, 0,
                (9.7) * cos(toRadian(8)), (9.7 + 2.37) * sin(toRadian(8)), 0,
                (9.7) * cos(toRadian(8)), (9.7 + 2.37) * sin(toRadian(8)), 0.71,
                9.7, 0, 0.71

                 );

    // outer wall
    applyTexture(tex_concrete, 1,1,


                9.7 + 2.37, 0, 0,
                (9.7 + 2.37) * cos(toRadian(8)), (9.7 + 2.37) * sin(toRadian(8)), 0,
                (9.7 + 2.37) * cos(toRadian(8)), (9.7 + 2.37) * sin(toRadian(8)), 0.71,
                9.7 + 2.37, 0, 0.71

                 );


    //span ring

    //base
    applyTexture(tex_black, 1,1,


                2, 0, 0.71,
                17.5, 0, 0.71,
                17.5 * cos(toRadian(8)), 17.5 * sin(toRadian(8)), 0.71,
                2 * cos(toRadian(8)), 2 * sin(toRadian(8)), 0.71

                 );

    //outer wall
    applyTexture(tex_black, 1,1,


               17.5, 0, 0.71,
                17.5 * cos(toRadian(8)), 17.5 * sin(toRadian(8)), 0.71,
               17.5 * cos(toRadian(8)), 17.5 * sin(toRadian(8)), 2.35,
                17.5, 0, 2.35

                 );

    //roof
    applyTexture(tex_concrete, 1,1,


                2, 0, 2.35,
                17.5, 0, 2.35,
                17.5 * cos(toRadian(8)), 17.5 * sin(toRadian(8)),2.35,
                2 * cos(toRadian(8)), 2 * sin(toRadian(8)),2.35

                 );


    // small beams
    glPushMatrix();

        glTranslatef(9.7 + 2.37, 0, 1.7);




        applyTexture(tex_metal, 1,1,

                     0,0,0,
                     6,0,0,
                     6,0,-0.95,
                     0,0,-1.84
                     );

        applyTexture(tex_metal, 1,1,

                     0,0.15,0,
                     6,0.15,0,
                     6,0.15,-0.95,
                     0,0.15,-1.84
                     );

         applyTexture(tex_metal, 1,1,

                    6,0,0,
                     6,0,-0.95,
                     6,0.15,-0.95,
                     6,0.15,0
                     );

        applyTexture(tex_metal, 1,1,

                    6,0,-0.95,
                     0,0,-1.84,
                     0,0.15,-1.84,
                     6,0.15,-0.95
                     );

        applyTexture(tex_metal, 1,1,

                    0,0,0,
                     6,0,0,
                     6,0.15,0,
                     0,0.15,0
                     );

    glPopMatrix();


    // tilted wall lower floor

    applyTexture(tex_crown_wall_1, 1,1,

                 13.21, 0, 2.35,
                 13.21 * cos(toRadian(8)), 13.21 * sin(toRadian(8)), 2.35,
                 17.5 * cos(toRadian(8)), 17.5 * sin(toRadian(8)), 2.35 + 5.98,
                 17.5, 0, 2.35 + 5.98


                 );


    // outmost floating ring
    //base



    glPushMatrix();

    glTranslatef(0,0,1.4);

    applyTexture(tex_concrete, 1,1,


                20.5, 0, 5,
                20.5 + 0.9, 0, 5,
                (20.5 + 0.9) * cos(toRadian(8)), (20.5 + 0.9) * sin(toRadian(8)), 5,
                (20.5) * cos(toRadian(8)), (20.5) * sin(toRadian(8)), 5

                 );

    applyTexture(tex_concrete, 1,1,


                20.5, 0, 5.71,
                20.5 + 0.9, 0, 5.71,
                (20.5 + 0.9) * cos(toRadian(8)), (20.5 + 0.9) * sin(toRadian(8)), 5.71,
                (20.5) * cos(toRadian(8)), (20.5) * sin(toRadian(8)), 5.71

                 );

    applyTexture(tex_concrete, 1,1,


                 20.5 + 0.9, 0, 5,
                (20.5 + 0.9) * cos(toRadian(8)), (20.5 + 0.9) * sin(toRadian(8)), 5,
                (20.5 + 0.9) * cos(toRadian(8)), (20.5 + 0.9) * sin(toRadian(8)), 5.71,
                 20.5 + 0.9, 0, 5.71

                 );

    glPopMatrix();



    // tilted wall floor roof
     applyTexture(tex_concrete, 1,1,

                 15.12, 0, 2.35 + 5.98,
                 17.5, 0, 2.35 + 5.98,
                 17.5 * cos(toRadian(8)), 17.5 * sin(toRadian(8)), 2.35 + 5.98,
                 15.12 * cos(toRadian(8)), 15.12 * sin(toRadian(8)), 2.35 + 5.98
                 );

    // upper floor wall
     applyTexture(tex_crown_wall_2, 1,1,

                 15.12, 0, 8.33,
                 15.12 * cos(toRadian(8)), 15.12* sin(toRadian(8)), 8.33,
                 15.12 * cos(toRadian(8)), 15.12* sin(toRadian(8)), 8.33 + 4.15,
                 15.12, 0, 8.33 + 4.15
                 );

     // top floor roof
     applyTexture(tex_concrete, 1,1,

                 15.12, 0, 8.33 + 4.15,
                 17.5, 0, 8.33 + 4.15,
                 17.5 * cos(toRadian(8)), 17.5 * sin(toRadian(8)), 8.33 + 4.15,
                 15.12 * cos(toRadian(8)), 15.12 * sin(toRadian(8)), 8.33 + 4.15
                 );

     // top floor roof wall
     applyTexture(tex_concrete, 1,1,

                 17.5, 0, 8.33 + 4.15,
                 17.5 * cos(toRadian(8)), 17.5 * sin(toRadian(8)), 8.33 + 4.15,
                 17.5 * cos(toRadian(8)), 17.5 * sin(toRadian(8)), 8.33 + 4.15 + 0.4,
                  17.5, 0, 8.33 + 4.15 + 0.4
                 );



    // top gombuj
     applyTexture(tex_gombuj, 1,1,

                 17.5, 0, 12.88,
                 17.5 * cos(toRadian(8)), 17.5 * sin(toRadian(8)), 12.88,
                 5 * cos(toRadian(8)), 5 * sin(toRadian(8)), 16.88,
                 5, 0, 16.88
                 );


    // pipes
    glPushMatrix();

        glTranslatef(20.5,0,6.5);

        glRotatef(-112.4,0,1,0);
        drawPipe(5);


        glRotatef(51.5,0,1,0);
        drawPipe(3.6);

        glTranslatef(0,0,3.6);

        glRotatef(71.5,0,1,0);
        drawPipe(3.3);

        glTranslatef(0,0,3.3);

        glRotatef(-32.8,0,1,0);
        drawPipe(1.4);


    glPopMatrix();


}



