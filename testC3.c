#include <stdio.h>

main(){
	int i, j, n, count;
	scanf("%d", &n);
	
	count=0;
	for(i=0;i<n*2;i++){
		for(j=0;j<n-count;j++)	printf(" ");

		if(i==0||i==(n*2)-1)	printf("*");
		else{
			printf("*");
			for(j=0;j<count;j++)	printf(" ");
			printf("*");
		}

		if(i<n) count++;
		else count--;
	}

}