#include<stdio.h>
int main ()
{
    int ri,i,v[50],j;
    float n,rf;
    printf("Escreva um numero fracionario\n");
    scanf("%f",&n);
    for(i=0;i<50;i++){
        v[i]=0;
    }
    i=0;
    do
    {
        ri = n*2;
        v[i]=ri;
        rf = (n*2)-v[i];
        n=rf;
        i++;
    }while(rf>0);
    printf("0,");
    for(j=0;j<i;j++){
        printf("%d",v[j]);
    }
    return 0;
}
