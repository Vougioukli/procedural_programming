/*
 * File name: a1bf3.c
 * --------------------
 * To programma ypologizei ta posa xronia tha kseperasei kapoia autokinita.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int years;
    long autokinita, orio;
    double rythmos;

    years = 0;

    printf("Dwse ton arxiko arithmo autokinitwn: ");
    autokinita = GetLong();
    printf("Dwse ton ethsio rythmo ayxhshs: ");
    rythmos = GetReal();
    printf("Dwse to orio: ");
    orio = GetLong();

    while(autokinita <= orio){
        years++;
        autokinita += autokinita*rythmos;
    }

    printf("%d xronia tha perasoun gia na kseperastoun ta %ld autokinita \n", years, orio);
    printf("Ta autokinita tha ginoun: %ld",autokinita);

    return 0;
}
