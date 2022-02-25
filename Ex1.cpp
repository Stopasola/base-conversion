#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  va[4],vb[4],vc[5],b,aux,i;
	printf("Digite a base\n");
	scanf("%d",&b);
	printf("Digite o fator a\n");
	for(i=0;i<4;i++){
		scanf("%d",&va[i]);
	}
	printf("Digite o fator b\n");
	for(i=0;i<4;i++){
		scanf("%d",&vb[i]);
	}
	for(i=0;i<5;i++){
		vc[i]=0;
	}
	
	for(i=4;i>0;i--){
		
		aux=va[i]+vb[i];
		if(aux>=b){
			vc[i]=aux-b;
			vc[i-1]+=1;
		}
		else{
			vc[i]+=aux;	
		}
	}	
	printf("Resultado: ");
	for(i=0;i<4;i++){
		printf("%d ",vc[i]);
		
	}
	return(0);
}
