#pragma once
#include "Input.h"
#include "Globals.h"
#include "Cube.h"
#include <GL/glut.h>


void motion(int x, int y)
{
	if (moving)
	{
		q = q + (x - beginx);
		beginx = x;
		p = p + (y - beginy);
		beginy = y;
		glutPostRedisplay();
	}
	else if (movingLight) {
		lightX += (x - beginx) * 0.05;
		lightY -= (y - beginy) * 0.05;
		beginx = x;
		beginy = y;
	}
	glutPostRedisplay();
}


void mouse(int btn, int state, int x, int y)
{
	if (btn == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		movingLight = 1;
		moving = 0;
		beginx = x;
		beginy = y;
	}
	else if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		moving = 1;
		movingLight = 0;
		beginx = x;
		beginy = y;
	}
	else if (state == GLUT_UP) {
		moving = movingLight = 0;
	}

}


void keyboard(unsigned char key, int x, int y)
{
	if (key == 'a' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 1;
		inverse = 0;
		solve[++count] = 1;
		glutIdleFunc(spincube);
	}
	if (key == 'q' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 1;
		inverse = 1;
		solve[++count] = -1;
		glutIdleFunc(spincube);
	}
	if (key == 's' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 2;
		inverse = 0;
		solve[++count] = 2;
		glutIdleFunc(spincube);
	}
	if (key == 'w' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 2;
		inverse = 1;
		solve[++count] = -2;
		glutIdleFunc(spincube);
	}
	if (key == 'd' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 3;
		inverse = 0;
		solve[++count] = 3;
		glutIdleFunc(spincube);
	}
	if (key == 'e' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 3;
		inverse = 1;
		solve[++count] = -3;
		glutIdleFunc(spincube);
	}
	if (key == 'f' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 4;
		inverse = 0;
		solve[++count] = 4;
		glutIdleFunc(spincube);
	}
	if (key == 'r' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 4;
		inverse = 1;
		solve[++count] = -4;
		glutIdleFunc(spincube);
	}
	if (key == 'g' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 5;
		inverse = 0;
		solve[++count] = 5;
		glutIdleFunc(spincube);
	}
	if (key == 't' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 5;
		inverse = 1;
		solve[++count] = -5;
		glutIdleFunc(spincube);
	}
	if (key == 'h' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 6;
		inverse = 0;
		solve[++count] = 6;
		glutIdleFunc(spincube);
	}
	if (key == 'y' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		rotation = 6;
		inverse = 1;
		solve[++count] = -6;
		glutIdleFunc(spincube);
	}
	if (key == '2' && rotationcomplete == 1)
	{
		p = p + 2.0;
		glutIdleFunc(spincube);
	}
	if (key == '8' && rotationcomplete == 1)
	{
		p = p - 2.0;
		glutIdleFunc(spincube);
	}
	if (key == '6' && rotationcomplete == 1)
	{
		q = q + 2.0;
		glutIdleFunc(spincube);
	}
	if (key == '4' && rotationcomplete == 1)
	{
		q = q - 2.0;
		glutIdleFunc(spincube);
	}
	if (key == '9' && rotationcomplete == 1)
	{
		r = r + 2.0;
		glutIdleFunc(spincube);
	}
	if (key == '1' && rotationcomplete == 1)
	{
		r = r - 2.0;
		glutIdleFunc(spincube);
	}
	if (key == '5' && rotationcomplete == 1)
	{
		p = 0.0;
		q = 0.0;
		r = 0.0;
		glutIdleFunc(spincube);
	}
	if (key == 'm' && rotationcomplete == 1)
	{
		if (speed <= 1.3)
		{
			speed = speed + 0.3;
			speedmetercolor[++speedmetercount] = 3;
		}
		glutPostRedisplay();
	}
	if (key == 'm' && rotationcomplete == 1)
	{
		if (speed > 1.3)
		{
			if (speed <= 2.9)
			{
				speed = speed + 0.3;
				speedmetercolor[++speedmetercount] = 4;
			}
		}
		glutPostRedisplay();
	}
	if (key == 'm' && rotationcomplete == 1)
	{
		if (speed > 2.9)
		{
			if (speed <= 4.2)
			{

				speed = speed + 0.3;
				speedmetercolor[++speedmetercount] = 5;
			}
		}
		glutPostRedisplay();
	}
	if (key == 'n' && rotationcomplete == 1)
	{
		if (speed >= 0.3)
		{
			speed = speed - 0.3;
			speedmetercolor[speedmetercount--] = 0;
		}
		glutPostRedisplay();
	}
	if (key == 'o' && rotationcomplete == 1)
	{
		rotationcomplete = 0;
		if (count >= 0)
		{
			if (solve[count] < 0)
			{
				rotation = -1 * solve[count];
				inverse = 0;
				glutIdleFunc(spincube);
			}
			if (solve[count] > 0)
			{
				rotation = solve[count];
				inverse = 1;
				glutIdleFunc(spincube);
			}
			count--;
		}
		glutIdleFunc(spincube);
	}
}

void mymenu(int id)
{
	if (rotationcomplete == 1)
	{
		rotationcomplete = 0;
		switch (id)
		{
		case 0: glutIdleFunc(spincube);
			break;

		case 1:
			rotation = 1;
			inverse = 0;
			solve[++count] = 1;
			glutIdleFunc(spincube);
			break;

		case 2:
			rotation = 1;
			inverse = 1;
			solve[++count] = -1;
			glutIdleFunc(spincube);
			break;

		case 3:
			rotation = 2;
			inverse = 0;
			solve[++count] = 2;
			glutIdleFunc(spincube);
			break;

		case 4:
			rotation = 2;
			inverse = 1;
			solve[++count] = -2;
			glutIdleFunc(spincube);
			break;

		case 5:
			rotation = 3;
			inverse = 0;
			solve[++count] = 3;
			glutIdleFunc(spincube);
			break;

		case 6:
			rotation = 3;
			inverse = 1;
			solve[++count] = -3;
			glutIdleFunc(spincube);
			break;

		case 7:
			rotation = 4;
			inverse = 0;
			solve[++count] = 4;
			glutIdleFunc(spincube);
			break;

		case 8:
			rotation = 4;
			inverse = 1;
			solve[++count] = -4;
			glutIdleFunc(spincube);
			break;

		case 9:
			rotation = 5;
			inverse = 0;
			solve[++count] = 5;
			glutIdleFunc(spincube);
			break;

		case 10:
			rotation = 5;
			inverse = 1;
			solve[++count] = -5;
			glutIdleFunc(spincube);
			break;

		case 11:
			rotation = 6;
			inverse = 0;
			solve[++count] = 6;
			glutIdleFunc(spincube);
			break;

		case 12:
			rotation = 6;
			inverse = 1;
			solve[++count] = -6;
			glutIdleFunc(spincube);
			break;

		case 13:
			exit(0);
			break;
		}
	}
}
