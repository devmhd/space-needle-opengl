

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
