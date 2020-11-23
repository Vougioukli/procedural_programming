/*
 * File name: a14f1.c
 * --------------------
 * To programma ypologizei to BMR mias gynaikas.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){

    int weight,height,age;
    double BMR;

    printf("Dwse varos se kila: ");
    weight = GetInteger();
    printf("Dwse upsos se cm: ");
    height = GetInteger();
    printf("Dwse ilikia se xronia: ");
    age = GetInteger();

    BMR = 655+(9.6*weight)+(1.8*height)-(4.7*age);
    printf("To BMR einai: %g",BMR);

    return 0;
}

