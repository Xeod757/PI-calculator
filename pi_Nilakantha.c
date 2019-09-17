#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


double pi = 3.0 ;
int tour = 0;
long tourmax = 99999999999999;
long V1 = 2.0;
long V2 = 3.0;
long V3 = 4.0;
long V4 = 4.0;
long V5 = 5.0;
long V6 = 6.0;
//double pitab[1000];

int main(void){
    FILE* f = NULL;
    f = fopen("pi.txt","w");

    for (tour = 0; tour < tourmax; tour++)
    {
        pi = (4.0/(V1*V2*V3)-4.0/(V3*V5*V6))+pi;
        V1 = V1+4.0;
        V2 = V2+4.0;
        V3 = V3+4.0;
        V5 = V5+4.0;
        V6 = V6+4.0;

        printf("pi = %1.50f\n",pi);
        /*pitab[tour] = pi;
        fprintf(f, "%d %1.50f \n",tour, pi); */
    }
    printf("pi = %1.50f\n",pi);
    
}