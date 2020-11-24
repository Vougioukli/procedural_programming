/*
 * File name: a23f4.c
 * --------------------
 * To programma emfanizei an yparxei h wra pou eishgagan.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

bool wra(int wra,int lepto,int deuterolepto);

int main(){

    int wres,lepta,deuterolepta;

    printf("Dwse tis wres: ");
    wres = GetInteger();
    printf("Dwse ta lepta: ");
    lepta = GetInteger();
    printf("Dwse ta deuterolepta: ");
    deuterolepta = GetInteger();

    if(wra(wres,lepta,deuterolepta))
        printf("WRA EGKYRH");
    else
        printf("WRA MH EGKYRH");
}

bool wra(int wra,int lepto,int deuterolepto){
    return(wra>=0 && wra <=24 && lepto>=0 && lepto <=59 && deuterolepto>=0 && deuterolepto <=59);
}
