/*
 * File name: a23f3.c
 * --------------------
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){

    int x;

    printf("Enter number: ");
    x = GetInteger();

    if (x%2 == 0){
        // artios
        for (int i=0; i<=x; i+=2)
            printf("%d ",i);
    }

    if (x%2 == 1){
        // perittos
        for (int i=1; i<=x; i+=2)
            printf("%d ",i);
    }

    return 0;
}
