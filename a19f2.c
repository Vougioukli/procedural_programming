/*
 * File name: a19f2.c
 * --------------------
 * To programma ypologizei ta telh kikloforias.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define xrewsi0 0.9
#define xrewsi121 1.1
#define xrewsi140 1.7

int main(){

    int CO2;
    float poso;

    printf("Dwse grammaria CO2/khm: ");
    CO2 = GetInteger();

    if (CO2 <= 120)
        poso = CO2 * xrewsi0;
    else if (CO2 <= 140)
        poso = CO2 * xrewsi121;
    else
        poso = CO2 * xrewsi140;

    printf("To poso pliromis einai: %f",poso);

    return 0;
}
