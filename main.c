/******************************************************************************
Pentru a o elibera pe Ileana Cosânzeana, Făt-Frumos trebuie să parcurgă x km.
El merge zilnic a km, dar Zâna-ce-Rea îl duce în fiecare noapte cu b km înapoi, 
b<a. Elaborați un program prin intermediul căruia se va afișa numărul de  zile 
necesare pentru ca Făt-Frumos să o elibereze pe Ileana Cosânzeana.**************/

#include <stdio.h>

int x, d, zile, a, b;

int main()
{
    printf("dati trei valori \n");
    scanf("%d %d %d", &x, &a, &b);
d=0;
zile =0;

   while (d<x)
  
    {
        d= d+a -b; 
        zile++;                                
        //printf("in ziua %d Făt-Frumos va parcurge %d km.\n", zile, d);
    }
    printf("Făt-Frumos are nevoie de: %d zile", zile);

    return 0;
}




