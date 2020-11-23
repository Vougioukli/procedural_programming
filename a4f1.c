/*
 * File name: a4f1.c
 * --------------------
 * To programma ypologizei to kerdos kai to eispraxthen enos emporou.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){

    int rate;
    double profit,saleAmount;
    long purchaseAmount;

    printf("Dwse thn katharh axia: ");
    purchaseAmount = GetLong();
    printf("Dwse to pososto kerdous: ");
    rate = GetInteger();

    profit = purchaseAmount * rate / 100;
    printf("To kerdos einai %g\n",profit);

    saleAmount = purchaseAmount + profit;
    printf("To synoliko poso einai %g",saleAmount);

    return 0;
}
