#pragma once
#ifndef INPUT_H
#define INPUT_H

void keyboard(unsigned char key, int x, int y);
void mouse(int btn, int state, int x, int y);
void motion(int x, int y);
void mymenu(int id);

#endif