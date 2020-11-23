/*
 * File name: a20f3.c
 * --------------------
 * To programma ypologizei to megisto kai to elaxisto diaforwn hlikiwn.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){

    int age,min,max;

    printf("Dwse ilikia: ");
    age = GetInteger();

    min = age;
    max = age;

    while(age != -1){

        printf("Dwse ilikia: ");
        age = GetInteger();

        if(min > age)
            min = age;
        if(max < age)
            max = age;
    }

    printf("H megalyteri ilikia einai: %d \n", max);
    printf("H mikroteri ilikia einai: %d", min);

    return 0;
}
