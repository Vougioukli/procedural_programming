/*
 * File name: a28f4.c
 * --------------------
 * To programma ypologizei tous pontous kathe proiontos.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

long get_code();
double discount_percentage(long kwdikos,double timh);
int product_points(long kwdikos,double timh);

int main(){

    int pontoi;
    long kwdikos;
    double synolo,ekptwsi,timh;

    //arxikopoihsh
    pontoi = 0;
    synolo = 0;
    ekptwsi=0;

    kwdikos = get_code();

    while(kwdikos != 0){

        printf("Dwse thn timh: ");
        timh = GetReal();

        synolo += timh;

        pontoi+= product_points(kwdikos,timh);

        ekptwsi += discount_percentage(kwdikos,timh);


        kwdikos = get_code();

    }

    printf("----------------------------------- \n");
    printf("Teliko synolo: %f Euro \n",synolo-ekptwsi);
    printf("Ekptwsh: %f Euro \n",ekptwsi);
    printf("Pontoi: %d",pontoi);
}

double discount_percentage(long kwdikos,double timh){
    if(kwdikos>0 && kwdikos<=300)
            return(timh*0.05);
        else if (kwdikos<=500)
            return(timh*0.1);
        else if (kwdikos<=1000)
            return(timh*0.15);
        else
            return(timh*0.2);
}

long get_code(){
    long kwdikos;
    printf("Dwse ton kwdiko: ");
    kwdikos = GetLong();
    while(kwdikos<0 || kwdikos >2000){
            printf("Lathos Kwdikos (0-2000) \n");
            printf("Dwse ton kwdiko: ");
            kwdikos = GetLong();
    }
    return(kwdikos);
}

int product_points(long kwdikos,double timh){
    if(kwdikos>=1000 && kwdikos<=1500)
        return (ceil((timh-discount_percentage(kwdikos,timh))/5)+1);
    else
        return (1);
}
