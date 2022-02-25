#include<stdio.h>
int main()
{
	int n,v[50],i,r,j;
	printf("Escreva o numero inteiro:");
	scanf("%d",&n);
	for(i=0;i<50;i++){
		v[i]=0;
	}
	i=0;
	do
	 {
		v[i]=n%2;
		if(n%2==0)
			r = n/2;
		if(n%2==1){
			n--;
			r = n/2;
		}
		n=r;
		i++;
	}while(r!=0);
	for(j=i-1;j>=0;j--){
		printf("%d",v[j]);
	}

}
