/*
 * File name: a27f4.c
 * --------------------
 * To programma dhmiourgei 2 kwdikous kai tin egkyrothta twn kwdikwn autwn.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

long encode(long N);
bool check(long EN);

int main(){

    long Lower,Upper;

    printf("Lower Limit:");
    Lower = GetLong();

    printf("Upper Limit:");
    Upper = GetLong();


    for (int i=Lower;i<=Upper;i++){
        if (check)
            printf("Code: %ld Encoding: %ld is Valid:yes \n",i,encode(i),check(encode(i)));
        else
            printf("Code: %ld Encoding: %ld is Valid:no \n",i,encode(i),check(encode(i)));
    }

}

long encode(long N){
    return(N*100+(98-(N*100)%97)%97);
}

bool check(long EN){
    return(EN%97 == 1);

}

