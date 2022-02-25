#include<stdio.h>
#include<stdlib.h>

void inteira(int inte){
	int v[50],i,r,j;
	for(i=0;i<50;i++){
		v[i]=0;
	}
	i=0;
	do
	 {
		v[i]=inte%2;
		if(inte%2==0)
			r = inte/2;
		if(inte%2==1){
			inte--;
			r = inte/2;
		}
		inte=r;
		i++;
	}while(r!=0);
	for(j=i-1;j>=0;j--){
		printf("%d",v[j]);
	}
}
void fracionaria(float fra){
	int ri,i,v[50],j;
    float rf;
    for(i=0;i<50;i++){
        v[i]=0;
    }
    i=0;
    do
    {
        ri = fra*2;
        v[i]=ri;
        rf = (fra*2)-v[i];
        fra=rf;
        i++;
    }while(rf>0);
    for(j=0;j<i;j++){
        printf("%d",v[j]);
    }
}
int main()
{
	float num,fra;
	int inte,op;
	while(56)
	{
		printf("1-Continuar\n");
		printf("2-Sair\n");
		scanf("%d",&op);
		if(op==2){
			return 0;
		}
		system("cls");
		printf("Escreva um numero decimal\n");
		scanf("%f",&num);
		inte=num;
		fra = num-inte;
		printf("inte = %d\n fra = %f",inte, fra);
		inteira(inte);
		if(fra>0){
			printf(",");
			fracionaria(fra);
		}
		printf("\n\n\n");
	}
		return 0;
}
