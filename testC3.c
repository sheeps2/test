#include <stdio.h>

main(){
	int i, j, n, count;
	scanf_s("%d", &n);

	count = 0;
	for (i = 0; i<=n * 2; i++){
		for (j = 0; j<n - count; j++)	printf(" ");

		if (i == 0 || i == (n * 2))	printf("*");
		else{
			printf("*");
			for (j = 0; j<count*2-1; j++)	printf(" ");
			printf("*");
		}
		printf("\n");
		if (i<n) count++;
		else count--;
	}
	scanf_s("%d", &n);
}