#include<stdio.h>
#include"var.h"

int main() {
	int n=5;
	float Varr;	
	int t[5] = {2,5,7,2,9};
	var(t,n,&Varr);
	printf("La valeur variance du tableau est :%f\n",Varr);
	return 0;
}