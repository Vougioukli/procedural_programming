/*
 * File name: a13f3.c
 * --------------------
 * To programma ypologizei to athroisma twn klasmatwn 1/x.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){

    int n;
    float athroisma;

    athroisma = 0;

    printf("Dwse orio:");
    n = GetInteger();

    for(int i=1; i<=n; i++)
        athroisma +=  (1.00/i);


    printf("To athroisma einai: %2f",athroisma);

    return 0;
}
