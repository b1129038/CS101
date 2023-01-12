#include <stdio.h>
#include <math.h>

int main()
{
    double n = 0.0f;
    double i = 0.0f;

    for(int k=1; k<=318000; k++){
        i = n;
        n = 4*pow(-1,k+1)/(2*k-1);
        n = n+i;
        //最小318000
    }
    printf("%f\n",n);
    
    return 0;
}
