/*
 * File name: a7f2.c
 * --------------------
 * To programma ypologizei tin evdomadiaia amoivi enos ergazomenou.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){

    int wres_ergasies;
    long kwdikos;
    double etisios_misthos,amoivi_ana_wra;

    printf("Dwse ton kwdiko:");
    kwdikos = GetLong();

    if(kwdikos >= 1000){
        printf("Dwse ton ethsio mistho:");
        etisios_misthos = GetReal();
        printf("H ebdomadiaia amoibh einai %g",etisios_misthos/52);
    }
    else{
        printf("Dwse tis wres ebdomadiaias ergasias:");
        wres_ergasies = GetInteger();
        printf("Dwse thn amoibh ana wra:");
        amoivi_ana_wra = GetReal();

        if(wres_ergasies > 40)
            printf("H ebdomadiaia amoibh einai: %g",40000+(wres_ergasies-40)*amoivi_ana_wra*1.5);
        else
           printf("H ebdomadiaia amoibh einai: %g",wres_ergasies*amoivi_ana_wra);

    }

    return 0;
}
