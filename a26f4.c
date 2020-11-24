/*
 * File name: a26f4.c
 * --------------------
 * To programma ypologizei 2 synarthseis.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int f(int x);
int g(int x,int y);

int main(){

    int x,y;

    printf("Enter x: ");
    x = GetInteger();

    printf("Enter y: ");
    y = GetInteger();

    printf("f(x) = f(%d) = %d \n",x,f(x));
    printf("f(x) = f(%d,%d) = %d \n",x,y,g(x,y));
    printf("f(g(x,y)) = f(g(%d,%d)) = %d \n",x,y,f(g(x,y)));
}

int f(int x){
    if(x>0)
        return (x+2);
    else
        return (-3*x+7);
}

int g(int x,int y){
    if(x>0 && y>0)
        return (x-y);
    else
        return (7*x-5);
}
