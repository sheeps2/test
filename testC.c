#include <stdio.h>

int testFun(int a);

main (){
	int a;

	a=10;
	testFun(a);

	printf("test : %d \n", a);
}
int testFun(int a){
	return a+=10;
}