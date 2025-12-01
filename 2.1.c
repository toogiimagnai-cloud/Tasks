#include <stdio.h>
#include <math.h>
double getV(double r)
{ double V;
    V=(4*M_PI*r*r*r)/3;
    
return V ;
    
}

double getS(double r)
{double S;
S=4*M_PI*r*M_PI*r;
return S ;
    
}
int main()
{double r, V , S;
V=getV(r);
S=getS(r);
printf("entrez le rayon :");
scanf("%lf",&r);
    printf("V=%f\n",getV(r));
    printf("S=%f\n",getS(r));
    

    return 0;
}

