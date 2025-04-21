#ifndef GL_CLAMP_TO_EDGE
#define GL_CLAMP_TO_EDGE 0x812F
#endif

#ifndef GLOBALS_H
#define GLOBALS_H
#include <GL/glut.h>



// Cube face declarations
extern int top[3][3];
extern int right[3][3];
extern int front[3][3];
extern int back[3][3];
extern int bottom[3][3];
extern int left[3][3];

// Rotation and animation variables
extern int rotation;
extern float theta;
extern GLint inverse;
extern int rotationcomplete;
extern int solve[300];
extern int count;
extern float speed;

extern GLfloat p, q, r;
extern GLint inverse;
extern GLfloat angle;
extern int beginx, beginy;
extern int moving;
extern int speedmetercolor[15];
extern int speedmetercount;
extern int movingLight;
extern GLfloat lightX, lightY, lightZ;

// Lighting and texture variables
extern GLuint bulbTextureID;
extern GLuint backgroundTextureID;

// Window dimensions
extern int windowWidth;
extern int windowHeight;

extern GLfloat vertices[][3];
extern GLfloat color[][3];
extern GLfloat normals[][3];

#endif