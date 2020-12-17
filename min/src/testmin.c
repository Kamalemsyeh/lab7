#include<stdio.h>
#include"min.h"

int main() {
	int n=5,mini;	
	int t[5] = {2,5,7,2,9};
	min(t,n,&mini);
	printf("La valeur minimale du tableau est :%d\n",mini);
	return 0;
}