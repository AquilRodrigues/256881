/**
 * @file fun.h
 * @author Aquil (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-0we4-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __MOTOR_H__
#define __MOTOR_H__

#include<stdio.h>
#include<stdlib.h>
/**
 * @brief Takes input for the shunt dc motor
 * 
 */
void shunt_input(void);
/**
 * @brief calculates current for diffrent load torque
 * 
 * @param t rated torque divided by number of divisions
 * @param speed rated speed of motor 
 * @param eb back emf
 * @param n number of divisions
 * @return int 
 */
int shunt_output(float t, float speed, float eb, int n);
/**
 * @brief takes input for induction motor
 * 
 */
void induction_input(void);
/**
 * @brief calculates current for diffrent load torque
 * 
 * @param t rated torque divided by number of divisions
 * @param speed rated speed of motor 
 * @param pf power factor of motor
 * @param voltage rated voltage
 * @param n number of divisions
 * @return int 
 */
int induction_output(float t, float speed, float pf,float voltage, int n);

#endif