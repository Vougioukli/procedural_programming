/*
 * File name: a13f2.c
 * --------------------
 * To programma xrisimopoieitai se mia mixani kafe.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define kafes 0.7
#define xartonomisma 5

int main(){

    int poso_kafe,ypoloipo;
    float resta;

    printf("Dose kafedes:");
    poso_kafe = GetInteger();

    resta = xartonomisma-(poso_kafe*kafes);
    if (resta<0.0)
        printf("Den ftanoun ta xrhmata gia tosous kafedes\n");
    else{
        printf("Resta \n");

        ypoloipo = resta/2;
        printf("Kermata 2E :%d\n",ypoloipo);
        resta -= (ypoloipo)*2;

        ypoloipo = resta/1;
        printf("Kermata 1E :%d\n",ypoloipo);
        resta -= ypoloipo;

        ypoloipo = resta/0.5;
        printf("Kermata 50L :%d\n",ypoloipo);
        resta -= (ypoloipo)*0.5;

        ypoloipo = resta/0.2;
        printf("Kermata 20L :%d\n",ypoloipo);
        resta -= (ypoloipo)*0.2;

        ypoloipo = resta/0.1;
        printf("Kermata 10L :%d\n",resta/0.1);
    }

    return 0;
}
