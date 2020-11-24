/*
 * File name: a5f4.c
 * --------------------
 * To programma emfanizei an o arithmos einai Armstrong.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"


int Sum_Cube(int x);
bool IsArmstrong(int x);

int main(){

    for (int i=1;i<1000;i++){
        if(IsArmstrong(i))
            printf("%d \n",i);
    }
}

int Sum_Cube(int x){

    int r,sum=0;

    while(x>0){
        r = x%10;
        sum = sum+(r*r*r);
        x = x/10;
    }
    return (sum);
}

bool IsArmstrong(int x){
    return (x == Sum_Cube(x));
}
