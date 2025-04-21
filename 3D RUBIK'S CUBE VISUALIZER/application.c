#include "../headers/Globals.h"
#include "../headers/Cube.h"
#include "../headers/Graphics.h"
#include "../headers/input.h"
#include <GL/glut.h>

#define STB_IMAGE_IMPLEMENTATION
#include "../headers/stb_image.h"

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("RUBIK'S CUBE");

    initTexture();
    initLighting();

    glutDisplayFunc(display);
    glutReshapeFunc(myreshape);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);



    glutMainLoop();
    return 0;
}