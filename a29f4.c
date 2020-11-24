/*
 * File name: a28f4.c
 * --------------------
 * To programma ypologizei mathimatikes synarthseis.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int gcd(int a,int y);
bool compire(int x,int y);
int phi(int x);

int main(){

    int X;

    printf("Enter X:");
    X = GetInteger();

    for (int i=0;i<X;i++)
        printf("phi(%d) = %d\n",i+1,phi(i+1));
}

int gcd(int a,int b){
    if (b == 0)
        return (a);
    else
        return (gcd(b,a%b));
}

bool compire(int x,int y){
        return (gcd(x,y) == 1);
}

int phi(int x){

    int plithos = 0;

    for(int i=0;i<x;i++){
            if (compire(x,i))
                plithos++;
    }
    return (plithos);
}
