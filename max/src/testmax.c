#include<stdio.h>
#include"max.h"

int main() {
	int n=5,maxi;	
	int t[5] = {2,5,7,2,9};
	max(t,n,&maxi);
	printf("La valeur maximale du tableau est :%d\n",maxi);
	return 0;
}