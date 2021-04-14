#ifndef __MOTOR_H__
#define __MOTOR_H__

#include<stdio.h>
#include<stdlib.h>

void shunt_input(void);
int shunt_output(float t, float speed, float eb, int n);
void induction_input(void);
int induction_output(float t, float speed, float pf,float voltage, int n);

#endif