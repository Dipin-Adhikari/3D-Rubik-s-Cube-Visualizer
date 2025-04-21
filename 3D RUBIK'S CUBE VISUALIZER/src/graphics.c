#include "Graphics.h"
#include "Globals.h"
#include <GL/glut.h>
#include "stb_image.h"  // Add this include

void polygon(int a, int b, int c, int d, int e, int f)
{
	glColor3f(0, 0, 0);
	glLineWidth(3.0);

	glBegin(GL_LINE_LOOP);

	glVertex3fv(vertices[b]);
	glVertex3fv(vertices[c]);
	glVertex3fv(vertices[d]);
	glVertex3fv(vertices[e]);
	glEnd();

	glColor3fv(color[a]);
	glBegin(GL_POLYGON);
	glNormal3fv(normals[f]);

	glVertex3fv(vertices[b]);
	glVertex3fv(vertices[c]);
	glVertex3fv(vertices[d]);
	glVertex3fv(vertices[e]);
	glEnd();
}


void colorcube1()
{
	polygon(6, 0, 3, 2, 1, 0);
	polygon(6, 2, 3, 7, 6, 0);
	polygon(6, 0, 4, 7, 3, 0);    // center piece 
	polygon(6, 1, 2, 6, 5, 0);
	polygon(6, 4, 5, 6, 7, 0);
	polygon(6, 0, 1, 5, 4, 0);
}

void colorcube2()
{
	polygon(6, 8, 11, 10, 9, 0);
	polygon(6, 10, 11, 15, 14, 0);
	polygon(6, 8, 12, 15, 11, 0);    // bottom center 
	polygon(6, 9, 10, 14, 13, 0);
	polygon(6, 12, 13, 14, 15, 0);
	polygon(bottom[1][1], 8, 9, 13, 12, 6);
}

void colorcube3()
{
	polygon(6, 16, 19, 18, 17, 0);
	polygon(6, 18, 19, 23, 22, 0);
	polygon(left[1][1], 16, 20, 23, 19, 3);    // left center 
	polygon(6, 17, 18, 22, 21, 0);
	polygon(6, 20, 21, 22, 23, 0);
	polygon(6, 16, 17, 21, 20, 0);
}

void colorcube4()
{
	polygon(6, 24, 27, 26, 25, 0);
	polygon(6, 26, 27, 31, 30, 0);
	polygon(6, 24, 28, 31, 27, 0);    // right center 
	polygon(right[1][1], 25, 26, 30, 29, 4);
	polygon(6, 28, 29, 30, 31, 0);
	polygon(6, 24, 25, 29, 28, 0);
}

void colorcube5()
{
	polygon(6, 32, 35, 34, 33, 0);
	polygon(top[1][1], 34, 35, 39, 38, 5);
	polygon(6, 32, 36, 39, 35, 0);    // top center 
	polygon(6, 33, 34, 38, 37, 0);
	polygon(6, 36, 37, 38, 39, 0);
	polygon(6, 32, 33, 37, 36, 0);
}

void colorcube6()
{
	polygon(6, 40, 43, 42, 41, 0);
	polygon(6, 42, 43, 47, 46, 0);
	polygon(6, 40, 44, 47, 43, 0);    // front center 
	polygon(6, 41, 42, 46, 45, 0);
	polygon(front[1][1], 44, 45, 46, 47, 1);
	polygon(6, 40, 41, 45, 44, 0);
}

void colorcube7()
{
	polygon(back[1][1], 48, 51, 50, 49, 2);
	polygon(6, 50, 51, 55, 54, 0);
	polygon(6, 48, 52, 55, 51, 0);    //back center 
	polygon(6, 49, 50, 54, 53, 0);
	polygon(6, 52, 53, 54, 55, 0);
	polygon(6, 48, 49, 53, 52, 0);
}

void colorcube8()
{
	polygon(6, 56, 59, 58, 57, 0);
	polygon(top[1][0], 58, 59, 63, 62, 5);
	polygon(left[0][1], 56, 60, 63, 59, 3);    // top left center 
	polygon(6, 57, 58, 62, 61, 0);
	polygon(6, 60, 61, 62, 63, 0);
	polygon(6, 56, 57, 61, 60, 0);
}

void colorcube9()
{
	polygon(6, 64, 67, 66, 65, 0);
	polygon(top[1][2], 66, 67, 71, 70, 5);
	polygon(6, 64, 68, 71, 67, 0);    // top right center 
	polygon(right[0][1], 65, 66, 70, 69, 4);
	polygon(6, 68, 69, 70, 71, 0);
	polygon(6, 64, 65, 69, 68, 0);
}

void colorcube10()
{
	polygon(6, 72, 75, 74, 73, 0);
	polygon(top[2][1], 74, 75, 79, 78, 5);
	polygon(6, 72, 76, 79, 75, 0);    // top front center 
	polygon(6, 73, 74, 78, 77, 0);
	polygon(front[0][1], 76, 77, 78, 79, 1);
	polygon(6, 72, 73, 77, 76, 0);
}

void colorcube11()
{
	polygon(back[0][1], 80, 83, 82, 81, 2);
	polygon(top[0][1], 82, 83, 87, 86, 5);
	polygon(6, 80, 84, 87, 83, 0);    // top back center 
	polygon(6, 81, 82, 86, 85, 0);
	polygon(6, 84, 85, 86, 87, 0);
	polygon(6, 80, 81, 85, 84, 0);
}

void colorcube12()
{
	polygon(6, 80 + 8, 83 + 8, 82 + 8, 81 + 8, 0);
	polygon(6, 82 + 8, 83 + 8, 87 + 8, 86 + 8, 0);
	polygon(left[2][1], 80 + 8, 84 + 8, 87 + 8, 83 + 8, 3);    // bottom left center 
	polygon(6, 81 + 8, 82 + 8, 86 + 8, 85 + 8, 0);
	polygon(6, 84 + 8, 85 + 8, 86 + 8, 87 + 8, 0);
	polygon(bottom[1][0], 80 + 8, 81 + 8, 85 + 8, 84 + 8, 6);
}

void colorcube13()
{
	polygon(6, 80 + 16, 83 + 16, 82 + 16, 81 + 16, 0);
	polygon(6, 82 + 16, 83 + 16, 87 + 16, 86 + 16, 0);
	polygon(6, 80 + 16, 84 + 16, 87 + 16, 83 + 16, 0);    // bottom right center 
	polygon(right[2][1], 81 + 16, 82 + 16, 86 + 16, 85 + 16, 4);
	polygon(6, 84 + 16, 85 + 16, 86 + 16, 87 + 16, 0);
	polygon(bottom[1][2], 80 + 16, 81 + 16, 85 + 16, 84 + 16, 6);
}

void colorcube14()
{
	polygon(6, 80 + 24, 83 + 24, 82 + 24, 81 + 24, 0);
	polygon(6, 82 + 24, 83 + 24, 87 + 24, 86 + 24, 0);
	polygon(6, 80 + 24, 84 + 24, 87 + 24, 83 + 24, 0);    // bottom front center 
	polygon(6, 81 + 24, 82 + 24, 86 + 24, 85 + 24, 0);
	polygon(front[2][1], 84 + 24, 85 + 24, 86 + 24, 87 + 24, 1);
	polygon(bottom[0][1], 80 + 24, 81 + 24, 85 + 24, 84 + 24, 6);
}

void colorcube15()
{
	polygon(back[2][1], 112, 115, 114, 113, 2);
	polygon(6, 114, 115, 119, 118, 0);
	polygon(6, 112, 116, 119, 115, 0);    // bottom back center 
	polygon(6, 113, 114, 118, 117, 0);
	polygon(6, 116, 117, 118, 119, 0);
	polygon(bottom[2][1], 112, 113, 117, 116, 6);
}

void colorcube16()
{
	polygon(back[0][2], 120, 123, 122, 121, 2);
	polygon(top[0][0], 122, 123, 127, 126, 5);
	polygon(left[0][0], 120, 124, 127, 123, 3);    // top left back 
	polygon(6, 121, 122, 126, 125, 0);
	polygon(6, 124, 125, 126, 127, 0);
	polygon(6, 120, 121, 125, 124, 0);
}

void colorcube17()
{
	polygon(6, 128, 131, 130, 129, 0);
	polygon(top[2][0], 130, 131, 135, 134, 5);
	polygon(left[0][2], 128, 132, 135, 131, 3);    // top left front 
	polygon(6, 129, 130, 134, 133, 0);
	polygon(front[0][0], 132, 133, 134, 135, 1);
	polygon(6, 128, 129, 133, 132, 0);
}

void colorcube18()
{
	polygon(back[0][0], 136, 139, 138, 137, 2);
	polygon(top[0][2], 138, 139, 143, 142, 5);
	polygon(6, 136, 140, 143, 139, 0);    // top right back 
	polygon(right[0][2], 137, 138, 142, 141, 4);
	polygon(6, 140, 141, 142, 143, 0);
	polygon(6, 136, 137, 141, 140, 0);
}

void colorcube19()
{
	polygon(6, 144, 147, 146, 145, 0);
	polygon(top[2][2], 146, 147, 151, 150, 5);
	polygon(6, 144, 148, 151, 147, 0);    // top right front 
	polygon(right[0][0], 145, 146, 150, 149, 4);
	polygon(front[0][2], 148, 149, 150, 151, 1);
	polygon(6, 144, 145, 149, 148, 0);
}

void colorcube20()
{
	polygon(back[1][2], 152, 155, 154, 153, 2);
	polygon(6, 154, 155, 159, 158, 0);
	polygon(left[1][0], 152, 156, 159, 155, 3);    // center left back 
	polygon(6, 153, 154, 158, 157, 0);
	polygon(6, 156, 157, 158, 159, 0);
	polygon(6, 152, 153, 157, 156, 0);
}

void colorcube21()
{
	polygon(6, 160, 163, 162, 161, 0);
	polygon(6, 162, 163, 167, 166, 0);
	polygon(left[1][2], 160, 164, 167, 163, 3);    // center left front 
	polygon(6, 161, 162, 166, 165, 0);
	polygon(front[1][0], 164, 165, 166, 167, 1);
	polygon(6, 160, 161, 165, 164, 0);
}

void colorcube22()
{
	polygon(back[1][0], 168, 171, 170, 169, 2);
	polygon(6, 170, 171, 175, 174, 0);
	polygon(6, 168, 172, 175, 171, 0);    // center right back 
	polygon(right[1][2], 169, 170, 174, 173, 4);
	polygon(6, 172, 173, 174, 175, 0);
	polygon(6, 168, 169, 173, 172, 0);
}

void colorcube23()
{
	polygon(6, 176, 179, 178, 177, 0);
	polygon(6, 178, 179, 183, 182, 0);
	polygon(6, 176, 180, 183, 179, 0);    // center right front 
	polygon(right[1][0], 177, 178, 182, 181, 4);
	polygon(front[1][2], 180, 181, 182, 183, 1);
	polygon(6, 176, 177, 181, 180, 0);
}

void colorcube24()
{
	polygon(back[2][2], 184, 187, 186, 185, 2);
	polygon(6, 186, 187, 191, 190, 0);
	polygon(left[2][0], 184, 188, 191, 187, 3);    // bottom left back 
	polygon(6, 185, 186, 190, 189, 0);
	polygon(6, 188, 189, 190, 191, 0);
	polygon(bottom[2][0], 184, 185, 189, 188, 6);
}

void colorcube25()
{
	polygon(6, 192, 195, 194, 193, 0);
	polygon(6, 194, 195, 199, 198, 0);
	polygon(left[2][2], 192, 196, 199, 195, 3);    // bottom left front 
	polygon(6, 193, 194, 198, 197, 0);
	polygon(front[2][0], 196, 197, 198, 199, 1);
	polygon(bottom[0][0], 192, 193, 197, 196, 6);
}

void colorcube26()
{
	polygon(back[2][0], 200, 203, 202, 201, 2);
	polygon(6, 202, 203, 207, 206, 0);
	polygon(6, 200, 204, 207, 203, 0);    // bottom right back 
	polygon(right[2][2], 201, 202, 206, 205, 4);
	polygon(6, 204, 205, 206, 207, 0);
	polygon(bottom[2][2], 200, 201, 205, 204, 6);
}

void colorcube27()
{
	polygon(6, 208, 211, 210, 209, 0);
	polygon(6, 210, 211, 215, 214, 0);
	polygon(6, 208, 212, 215, 211, 0);    // bottom right front 
	polygon(right[2][0], 209, 210, 214, 213, 4);
	polygon(front[2][2], 212, 213, 214, 215, 1);
	polygon(bottom[0][2], 208, 209, 213, 212, 6);
}


GLuint loadTexture(const char* filename) {
	int width, height, channels;
	unsigned char* data = stbi_load(filename, &width, &height, &channels, STBI_rgb_alpha);
	if (!data) {
		printf("Failed to load texture: %s\n", filename);
		return 0; // Return 0 on failure
	}

	GLuint textureID;
	glGenTextures(1, &textureID);
	glBindTexture(GL_TEXTURE_2D, textureID);

	// Set texture parameters
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);


	GLenum format = GL_RGBA;
	glTexImage2D(GL_TEXTURE_2D, 0, format, width, height, 0, format, GL_UNSIGNED_BYTE, data);


	stbi_image_free(data);
	return textureID;
}


void displayImage() {
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, bulbTextureID);
	glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

	glPushMatrix();
	glTranslatef(lightX, lightY, lightZ);
	glDisable(GL_LIGHTING);
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0); glVertex2f(-1, -1.6);
	glTexCoord2f(1, 0); glVertex2f(1, -1.6);
	glTexCoord2f(1, 1); glVertex2f(1, 1.6);
	glTexCoord2f(0, 1); glVertex2f(-1, 1.6);
	glEnd();
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);
}

void drawBackground() {
	// Disable depth testing so background doesn't interfere with 3D objects
	glDisable(GL_DEPTH_TEST);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, backgroundTextureID);
	glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
	glColor3f(1.0f, 1.0f, 1.0f);

	// Set up an orthographic projection for 2D drawing
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();
	glLoadIdentity();
	gluOrtho2D(0, windowWidth, 0, windowHeight);

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glLoadIdentity();

	// Draw the quad covering the entire window
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0); glVertex2f(0, 0);
	glTexCoord2f(1, 0); glVertex2f(windowWidth, 0);
	glTexCoord2f(1, 1); glVertex2f(windowWidth, windowHeight);
	glTexCoord2f(0, 1); glVertex2f(0, windowHeight);
	glEnd();

	// Restore previous projection and modelview matrices
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);

	// Re-enable depth testing for subsequent 3D rendering
	glEnable(GL_DEPTH_TEST);
}


void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();


	drawBackground();

	GLfloat light_position[] = { lightX, lightY, lightZ, 1.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);

	GLfloat light_ambient[] = { 0.2, 0.2, 0.2, 1.0 };
	GLfloat light_diffuse[] = { 0.8, 0.8, 0.8, 1.0 };
	GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };

	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

	displayImage();


	glPushMatrix();
	glRotatef(25.0 + p, 1.0, 0.0, 0.0);
	glRotatef(-30.0 + q, 0.0, 1.0, 0.0);
	glRotatef(0.0 + r, 0.0, 0.0, 1.0);

	if (rotation == 0)
	{
		colorcube1();
		colorcube2();
		colorcube3();
		colorcube4();
		colorcube5();
		colorcube6();
		colorcube7();
		colorcube8();
		colorcube9();
		colorcube10();
		colorcube11();
		colorcube12();
		colorcube13();
		colorcube14();
		colorcube15();
		colorcube16();
		colorcube17();
		colorcube18();
		colorcube19();
		colorcube20();
		colorcube21();
		colorcube22();
		colorcube23();
		colorcube24();
		colorcube25();
		colorcube26();
		colorcube27();
	}
	if (rotation == 1)
	{
		colorcube1();
		colorcube2();
		colorcube3();
		colorcube4();
		colorcube6();
		colorcube7();
		colorcube12();
		colorcube13();
		colorcube14();
		colorcube15();
		colorcube20();
		colorcube21();
		colorcube22();
		colorcube23();
		colorcube24();
		colorcube25();
		colorcube26();
		colorcube27();
		if (inverse == 0)
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "Top");
			glPopMatrix();
			glRotatef(-theta, 0.0, 1.0, 0.0);
		}
		else
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "TopInverted");
			glPopMatrix();
			glRotatef(theta, 0.0, 1.0, 0.0);
		}
		colorcube5();
		colorcube8();
		colorcube9();
		colorcube10();
		colorcube11();
		colorcube16();
		colorcube17();
		colorcube18();
		colorcube19();
	}
	if (rotation == 2)
	{
		colorcube1();
		colorcube2();
		colorcube3();
		colorcube5();
		colorcube6();
		colorcube7();
		colorcube8();
		colorcube10();
		colorcube11();
		colorcube12();
		colorcube14();
		colorcube15();
		colorcube16();
		colorcube17();
		colorcube20();
		colorcube21();
		colorcube24();
		colorcube25();
		if (inverse == 0)
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "Right");
			glPopMatrix();
			glRotatef(-theta, 1.0, 0.0, 0.0);
		}
		else
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "RightInverted");
			glPopMatrix();
			glRotatef(theta, 1.0, 0.0, 0.0);
		}
		colorcube4();
		colorcube9();
		colorcube13();
		colorcube18();
		colorcube19();
		colorcube22();
		colorcube23();
		colorcube26();
		colorcube27();
	}
	if (rotation == 3)
	{
		colorcube1();
		colorcube2();
		colorcube3();
		colorcube4();
		colorcube5();
		colorcube7();
		colorcube8();
		colorcube9();
		colorcube11();
		colorcube12();
		colorcube13();
		colorcube15();
		colorcube16();
		colorcube18();
		colorcube20();
		colorcube22();
		colorcube24();
		colorcube26();
		if (inverse == 0)
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "Front");
			glPopMatrix();
			glRotatef(-theta, 0.0, 0.0, 1.0);
		}
		else
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "FrontInverted");
			glPopMatrix();
			glRotatef(theta, 0.0, 0.0, 1.0);
		}
		colorcube6();
		colorcube10();
		colorcube14();
		colorcube17();
		colorcube19();
		colorcube21();
		colorcube23();
		colorcube25();
		colorcube27();
	}
	if (rotation == 4)
	{
		colorcube1();
		colorcube2();
		colorcube4();
		colorcube5();
		colorcube6();
		colorcube7();
		colorcube9();
		colorcube10();
		colorcube11();
		colorcube13();
		colorcube14();
		colorcube15();
		colorcube18();
		colorcube19();
		colorcube22();
		colorcube23();
		colorcube26();
		colorcube27();
		if (inverse == 0)
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "Left");
			glPopMatrix();
			glRotatef(theta, 1.0, 0.0, 0.0);
		}
		else
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "LeftInverted");
			glPopMatrix();
			glRotatef(-theta, 1.0, 0.0, 0.0);
		}
		colorcube3();
		colorcube8();
		colorcube12();
		colorcube16();
		colorcube17();
		colorcube20();
		colorcube21();
		colorcube24();
		colorcube25();
	}
	if (rotation == 5)
	{
		colorcube1();
		colorcube2();
		colorcube3();
		colorcube4();
		colorcube5();
		colorcube6();
		colorcube8();
		colorcube9();
		colorcube10();
		colorcube12();
		colorcube13();
		colorcube14();
		colorcube17();
		colorcube19();
		colorcube21();
		colorcube23();
		colorcube25();
		colorcube27();
		if (inverse == 0)
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "Back");
			glPopMatrix();
			glRotatef(theta, 0.0, 0.0, 1.0);
		}
		else
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "BackInverted");
			glPopMatrix();
			glRotatef(-theta, 0.0, 0.0, 1.0);
		}
		colorcube7();
		colorcube11();
		colorcube15();
		colorcube16();
		colorcube18();
		colorcube20();
		colorcube22();
		colorcube24();
		colorcube26();
	}
	if (rotation == 6)
	{
		colorcube1();
		colorcube3();
		colorcube4();
		colorcube5();
		colorcube6();
		colorcube7();
		colorcube8();
		colorcube9();
		colorcube10();
		colorcube11();
		colorcube16();
		colorcube17();
		colorcube18();
		colorcube19();
		colorcube20();
		colorcube21();
		colorcube22();
		colorcube23();
		if (inverse == 0)
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "Bottom");
			glPopMatrix();
			glRotatef(theta, 0.0, 1.0, 0.0);
		}
		else
		{
			glPushMatrix();
			glColor3fv(color[0]);
			//output(-11, 6, "BottomInverted");
			glPopMatrix();
			glRotatef(-theta, 0.0, 1.0, 0.0);
		}
		colorcube2();
		colorcube12();
		colorcube13();
		colorcube14();
		colorcube15();
		colorcube24();
		colorcube25();
		colorcube26();
		colorcube27();
	}

	glPopMatrix();

	glFlush();
	glutSwapBuffers();
}

void myreshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		glOrtho(-10.0, 10.0, -10.0 * (GLfloat)h / (GLfloat)w, 10.0 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
	else
		glOrtho(-10.0 * (GLfloat)w / (GLfloat)h, 10.0 * (GLfloat)w / (GLfloat)h, -10.0, 10.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
}

void initLighting() {
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);
	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);

}

void initTexture() {
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	bulbTextureID = loadTexture("bulb.png"); // Load the bulb texture once
	backgroundTextureID = loadTexture("background.jpeg");
}