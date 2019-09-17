#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX 999999999999999999
long maxcompteur = MAX;
int compteur = 0;
double valeur1 = 1.0;
double valeur2 = 3.0;
double pi = 0;
double dif = 0;
//double pitab[MAX];


int main(void)
{


    float temps;
    clock_t t1, t2;
    t1 = clock();
    FILE* f = NULL;
    f = fopen("pi.txt","w");

    if (f==NULL){
        printf("probleme...");
        exit(0);
    }
        

    for (compteur = 0; compteur < maxcompteur ; compteur++)
    {
        pi=(4/valeur1)-(4/valeur2)+pi;
        //pitab[compteur] = pi;
        valeur1=valeur2+2.0;
        valeur2=valeur1+2.0;
        printf("aproximation %d de pi = %1.100f \n",compteur, pi);
        //fprintf(f, "%i %1.900f \n",compteur, pi);

    }


    t2 = clock();
    temps = (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("temps = %f\n", temps);
    printf("pi = %1.100f\n",pi);
    printf("pi = %1.100f\n",M_PI);
    dif=M_PI-pi;
    printf("différence = %1.100f\n",dif);
    fprintf(f, "PI = %1.100f",pi);
    //printf("valeur ligne 999 = %3.20f\n",pitab[999]);
}
