#include <stdio.h>

void main(){
	int i, n, count, j;

	scanf("%d", &n);

	count=0;
	for(i=0;i<n;i++){
		for(j=n/2;j>count;j--) printf(" ");

		printf("*");

		for(j=0;j<count*2;j++)	printf(" ");

		printf("*\n");
		
		if(i<n/2) count++;
		else if(i>=n/2) count--;
	}
}