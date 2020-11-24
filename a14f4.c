/*
 * File name: a14f4.c
 * --------------------
 * To programma ypologizei kai emfanizei thn parakatw sinartisi.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int max(int a, int b);
int gr(int a, int b, int c);

int main(){

    int a,b,c;
    float final;

    printf("Dwse a: ");
    a = GetInteger();
    printf("Dwse b: ");
    b = GetInteger();
    printf("Dwse c: ");
    c = GetInteger();

    final = (2*max(a,b)+3*gr(a,b,c))/4;

    printf("y = %2f",final);
}

int max(int a, int b){
    if (a>b)
        return (a);
    else
        return (b);
}

int gr(int a, int b, int c){
    if(a>b){
        if(a>c)
            return (a);
        else
            return (c);
    }
    else{
        if (b>c)
            return (b);
        else
            return (c);
    }
}
