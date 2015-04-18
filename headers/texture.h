int num_texture = -1;






int loadTexture(char *filename)
{
    int i, j=0;
    FILE *l_file;
    unsigned char *l_texture;

    BITMAPFILEHEADER fileheader;
    BITMAPINFOHEADER infoheader;
    RGBTRIPLE rgb;

    num_texture++;

    if( (l_file = fopen(filename, "rb"))==NULL) return (-1);

    fread(&fileheader, sizeof(fileheader), 1, l_file);

    fseek(l_file, sizeof(fileheader), SEEK_SET);
    fread(&infoheader, sizeof(infoheader), 1, l_file);

    printf("%d x %d\n", infoheader.biWidth, infoheader.biHeight);

    l_texture = (byte *) malloc(infoheader.biWidth * infoheader.biHeight * 4);
    memset(l_texture, 0, infoheader.biWidth * infoheader.biHeight * 4);

    for (i=0; i < infoheader.biWidth*infoheader.biHeight; i++)
    {
            fread(&rgb, sizeof(rgb), 1, l_file);

            l_texture[j+0] = rgb.rgbtRed;
            l_texture[j+1] = rgb.rgbtGreen;
            l_texture[j+2] = rgb.rgbtBlue;
            l_texture[j+3] = 255;
            j += 4;
    }
    fclose(l_file);

    glBindTexture(GL_TEXTURE_2D, num_texture);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST);

// glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glTexImage2D(GL_TEXTURE_2D, 0, 4, infoheader.biWidth, infoheader.biHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, l_texture);
     gluBuild2DMipmaps(GL_TEXTURE_2D, 4, infoheader.biWidth, infoheader.biHeight, GL_RGBA, GL_UNSIGNED_BYTE, l_texture);

    free(l_texture);

    return (num_texture);

}



void applyTexture(  int texid, int xRepeat, int yRepeat,
                    float x1, float y1, float z1,
                    float x2, float y2, float z2,
                    float x3, float y3, float z3,
                    float x4, float y4, float z4    ){

    glEnable(GL_TEXTURE_2D);

	glBindTexture(GL_TEXTURE_2D,texid); // here texid corresponds a bitmap image.

//	glNormal3f(0.0,1.0,1.0);

	glBegin(GL_POLYGON);
		glTexCoord2f(0.0,0.0); glVertex3f(x1, y1, z1);
        glTexCoord2f(xRepeat,0.0); glVertex3f(x2, y2, z2);
        glTexCoord2f(xRepeat,yRepeat); glVertex3f(x3, y3, z3);
        glTexCoord2f(0.0,yRepeat); glVertex3f(x4, y4, z4);
    glEnd();

    glDisable(GL_TEXTURE_2D);


}

int tex_base_shops,
    tex_rod,
    tex_marble_tile,
    tex_base_upper_balcony,
    tex_base_roof,
    tex_base1_0,
    tex_base1_1,
    tex_base1_2,
    tex_base_2_0,
    tex_base_3_0;


void loadAllBitmap(){

    tex_base_shops = loadTexture("base_shops.bmp");
    tex_marble_tile = loadTexture("marble_tiles.bmp");
    tex_rod = loadTexture("rod.bmp");
    tex_base_upper_balcony = loadTexture("base_upper_balcony.bmp");
    tex_base_roof = loadTexture("base_roof.bmp");

    tex_base1_0 = loadTexture("base1_0.bmp");
    tex_base1_1 = loadTexture("base1_1.bmp");
    tex_base1_2 = loadTexture("base1_2.bmp");
    tex_base_2_0 = loadTexture("base_2_0.bmp");
    tex_base_3_0 = loadTexture("base_3_0.bmp");

}



