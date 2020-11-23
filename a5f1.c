/*
 * File name: a5f1.c
 * --------------------
 * Ypologismos akatharistwn apodoxwn,poso kratisewn kai kathares apodoxes enos ergati.
 * Na ta emfanizei sto telos.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int wres_ergasies;
    long wriaia_antimisthia;
    double pososto,akatharistes,kratiseis,kathares;

    printf("Dwse ton arithmo twn wrwn: ");
    wres_ergasies = GetInteger();
    printf("Dwse thn wriaia antimisthia: ");
    wriaia_antimisthia = GetLong();
    printf("Dwse to pososto twn krathsewn: ");
    pososto = GetReal();

    kathares = wres_ergasies*wriaia_antimisthia;
    kratiseis = kathares*pososto;
    akatharistes = kathares + kratiseis;

    printf("Oi akatharistes apodoxes einai: %g\n",akatharistes);
    printf("Oi krathseis einai: %g\n",kratiseis);
    printf("Oi kathares apodoxes einai: %g\n",kathares);

    return 0;
}
