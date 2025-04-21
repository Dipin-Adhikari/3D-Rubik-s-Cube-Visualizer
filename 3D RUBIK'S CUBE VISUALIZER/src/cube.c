#include "Cube.h"
#include "Globals.h"

void transpose(char a)
{
	if (a == 'r')
	{
		int temp;
		temp = right[0][0];
		right[0][0] = right[2][0];
		right[2][0] = right[2][2];
		right[2][2] = right[0][2];
		right[0][2] = temp;
		temp = right[1][0];
		right[1][0] = right[2][1];
		right[2][1] = right[1][2];
		right[1][2] = right[0][1];
		right[0][1] = temp;
	}
	if (a == 't')
	{
		int temp;
		temp = top[0][0];
		top[0][0] = top[2][0];
		top[2][0] = top[2][2];
		top[2][2] = top[0][2];
		top[0][2] = temp;
		temp = top[1][0];
		top[1][0] = top[2][1];
		top[2][1] = top[1][2];
		top[1][2] = top[0][1];
		top[0][1] = temp;
	}
	if (a == 'f')
	{
		int temp;
		temp = front[0][0];
		front[0][0] = front[2][0];
		front[2][0] = front[2][2];
		front[2][2] = front[0][2];
		front[0][2] = temp;
		temp = front[1][0];
		front[1][0] = front[2][1];
		front[2][1] = front[1][2];
		front[1][2] = front[0][1];
		front[0][1] = temp;
	}
	if (a == 'l')
	{
		int temp;
		temp = left[0][0];
		left[0][0] = left[2][0];
		left[2][0] = left[2][2];
		left[2][2] = left[0][2];
		left[0][2] = temp;
		temp = left[1][0];
		left[1][0] = left[2][1];
		left[2][1] = left[1][2];
		left[1][2] = left[0][1];
		left[0][1] = temp;
	}
	if (a == 'k')
	{
		int temp;
		temp = back[0][0];
		back[0][0] = back[2][0];
		back[2][0] = back[2][2];
		back[2][2] = back[0][2];
		back[0][2] = temp;
		temp = back[1][0];
		back[1][0] = back[2][1];
		back[2][1] = back[1][2];
		back[1][2] = back[0][1];
		back[0][1] = temp;
	}
	if (a == 'b')
	{
		int temp;
		temp = bottom[0][0];
		bottom[0][0] = bottom[2][0];
		bottom[2][0] = bottom[2][2];
		bottom[2][2] = bottom[0][2];
		bottom[0][2] = temp;
		temp = bottom[1][0];
		bottom[1][0] = bottom[2][1];
		bottom[2][1] = bottom[1][2];
		bottom[1][2] = bottom[0][1];
		bottom[0][1] = temp;
	}
}


void topc()
{
	transpose('t');
	int temp1 = front[0][0];
	int temp2 = front[0][1];
	int temp3 = front[0][2];

	front[0][0] = right[0][0];
	front[0][1] = right[0][1];
	front[0][2] = right[0][2];

	right[0][0] = back[0][0];
	right[0][1] = back[0][1];
	right[0][2] = back[0][2];

	back[0][0] = left[0][0];
	back[0][1] = left[0][1];
	back[0][2] = left[0][2];

	left[0][0] = temp1;
	left[0][1] = temp2;
	left[0][2] = temp3;
}

void frontc()
{
	transpose('f');
	int temp1 = left[0][2];
	int temp2 = left[1][2];
	int temp3 = left[2][2];

	left[0][2] = bottom[0][0];
	left[1][2] = bottom[0][1];
	left[2][2] = bottom[0][2];

	bottom[0][0] = right[2][0];
	bottom[0][1] = right[1][0];
	bottom[0][2] = right[0][0];

	right[2][0] = top[2][2];
	right[1][0] = top[2][1];
	right[0][0] = top[2][0];

	top[2][2] = temp1;
	top[2][1] = temp2;
	top[2][0] = temp3;
}

void rightc()
{
	transpose('r');
	int temp1 = top[0][2];
	int temp2 = top[1][2];
	int temp3 = top[2][2];

	top[0][2] = front[0][2];
	top[1][2] = front[1][2];
	top[2][2] = front[2][2];

	front[0][2] = bottom[0][2];
	front[1][2] = bottom[1][2];
	front[2][2] = bottom[2][2];

	bottom[0][2] = back[2][0];
	bottom[1][2] = back[1][0];
	bottom[2][2] = back[0][0];

	back[2][0] = temp1;
	back[1][0] = temp2;
	back[0][0] = temp3;
}

void leftc()
{
	transpose('l');
	int temp1 = front[0][0];
	int temp2 = front[1][0];
	int temp3 = front[2][0];

	front[0][0] = top[0][0];
	front[1][0] = top[1][0];
	front[2][0] = top[2][0];

	top[0][0] = back[2][2];
	top[1][0] = back[1][2];
	top[2][0] = back[0][2];

	back[2][2] = bottom[0][0];
	back[1][2] = bottom[1][0];
	back[0][2] = bottom[2][0];

	bottom[0][0] = temp1;
	bottom[1][0] = temp2;
	bottom[2][0] = temp3;
}

void backc()
{
	transpose('k');
	int temp1 = top[0][0];
	int temp2 = top[0][1];
	int temp3 = top[0][2];

	top[0][0] = right[0][2];
	top[0][1] = right[1][2];
	top[0][2] = right[2][2];

	right[0][2] = bottom[2][2];
	right[1][2] = bottom[2][1];
	right[2][2] = bottom[2][0];

	bottom[2][2] = left[2][0];
	bottom[2][1] = left[1][0];
	bottom[2][0] = left[0][0];

	left[2][0] = temp1;
	left[1][0] = temp2;
	left[0][0] = temp3;
}

void bottomc()
{
	transpose('b');
	int temp1 = front[2][0];
	int temp2 = front[2][1];
	int temp3 = front[2][2];

	front[2][0] = left[2][0];
	front[2][1] = left[2][1];
	front[2][2] = left[2][2];

	left[2][0] = back[2][0];
	left[2][1] = back[2][1];
	left[2][2] = back[2][2];

	back[2][0] = right[2][0];
	back[2][1] = right[2][1];
	back[2][2] = right[2][2];

	right[2][0] = temp1;
	right[2][1] = temp2;
	right[2][2] = temp3;
}


void spincube()
{
	theta += 0.5 + speed;
	if (theta == 360.0)
		theta -= 360.0;
	if (theta >= 90.0)
	{
		rotationcomplete = 1;
		glutIdleFunc(NULL);
		if (rotation == 1 && inverse == 0)
		{
			topc();
		}
		if (rotation == 1 && inverse == 1)
		{
			topc();
			topc();
			topc();
		}
		if (rotation == 2 && inverse == 0)
		{
			rightc();
		}
		if (rotation == 2 && inverse == 1)
		{
			rightc();
			rightc();
			rightc();
		}
		if (rotation == 3 && inverse == 0)
		{
			frontc();
		}
		if (rotation == 3 && inverse == 1)
		{
			frontc();
			frontc();
			frontc();
		}
		if (rotation == 4 && inverse == 0)
		{
			leftc();
		}
		if (rotation == 4 && inverse == 1)
		{
			leftc();
			leftc();
			leftc();
		}
		if (rotation == 5 && inverse == 0)
		{
			backc();
		}
		if (rotation == 5 && inverse == 1)
		{
			backc();
			backc();
			backc();
		}
		if (rotation == 6 && inverse == 0)
		{
			bottomc();
		}
		if (rotation == 6 && inverse == 1)
		{
			bottomc();
			bottomc();
			bottomc();
		}
		rotation = 0;
		theta = 0;
	}
	glutPostRedisplay();
}
