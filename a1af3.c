/*
 * File name: a1af3.c
 * --------------------
 * To programma ypologizei ta posa xronia tha kseperasei ta 160000.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define arithmos_autokinitwn 80000
#define rythmos_apyxhshs 0.07
#define orio 160000

int main(){

    int years;
    long autokinita;

    years = 0;
    autokinita = arithmos_autokinitwn;

    while(autokinita <= orio){
        years++;
        autokinita += autokinita*rythmos_apyxhshs;
    }

    printf("%d xronia tha perasoun gia na kseperastoun ta 80000 autokinita \n",years);
    printf("Ta autokinita tha ginoun: %ld",autokinita);

    return 0;

}
