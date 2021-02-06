/*
 * --------------------
 * To programma einai gia tis exetaseis.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define N 20 /* to megethos tou pinaka */
int main(){
    /* dilwsi metavlitwn*/
    int A[N]={25,38,33,27,52,20,55,53,93,28,10,8,11,13,2,22,9,7,0,100};
    int B[N],C[N],i;

    /*arxikopoihsh pinakwn*/
    for(i=0;i<N;i++){
        B[i] = 0;
        C[i] = 0;
    }
    /* erwtima A*/
    int plithosB = 0; /*poses theseis tou pinaka B[] the xrisimopoiithoun*/
    int plithosC = 0; /*poses theseis tou pinaka C[] the xrisimopoiithoun*/
    for(i=0;i<N;i++){
        if(A[i]%2 == 0){
            B[plithosB] = A[i];
            plithosB++;
        }
        if(A[i]%2 != 0){
            C[plithosC] = A[i];
            plithosC++;
        }
    }

    /* erwtima B*/
    int temp = 0; /* mia metavriti gia thn antikatastasi duo stoixeiwn*/
    for(i=0;i<plithosB;i++){
        if(B[i]<B[i+1]){
            temp = B[i];
            B[i+1] = B[i] ;
            B[i] = temp;
        }
    }

    /* emfanisi tou taxinomimenou pinaka B[]*/
    for(i=0;i<N;i++)
        printf("%d ",B[i]);

    printf("\n"); /*allagi grammis*/

    /* erwtima C */
    int x,thesi; /* x: o arirhmos pou tha zitisi o xristis*/
    bool flag = FALSE; /*gia pio eukoli euresi tou arithmou*/

    thesi = 0; /* thesi: se poia thesi vrisketai to x ston pinaka C[]*/

    printf("Dwse enan akeraio arithmo: ");
    x = GetInteger();

    /* anazitisi aritmhou*/
    while(flag == FALSE && thesi<=plithosC){
        if(C[thesi] == x)
            flag = TRUE; /*o arithmos vrethike*/
        else
            thesi++;
    }
    /*emfanisi apotelesmatwn stin othoni*/
    if(flag == TRUE)
        printf("O arithmos %d vrethike sth thsei %d",x,thesi);
    else
        printf("O arithmos %d den vrethike.", x);


}
