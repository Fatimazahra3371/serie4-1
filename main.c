#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int n,k;
    float sumU;
    sumU=0.0;
    printf("entre la valeur de n\n");
    scanf("%d", &n);
    for(k=1;k<=n;k++)
    {
        sumU=(sumU+1)/(n^n+k);
    }
     printf("sumU= %f",sumU);
    return sumU;
}
