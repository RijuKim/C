#include <stdio.h>

int main(void)
{
	int* pi;
	double* pd;
	char* pc;   //포인터의 크기는 데이터형에 관계없이 항상 같다

	printf("sizeof(pi) = %d\n", sizeof(pi));  //포인터의 크기를 구한다
	printf("sizeof(pd) = %d\n", sizeof(pd));
	printf("sizeof(pc) = %d\n", sizeof(pc));

	printf("sizeof(int*) = %d\n", sizeof(int*));  //포인터형의 크기를 구한다
	printf("sizeof(double*) = %d\n", sizeof(double*));
	printf("sizeof(char*) = %d\n", sizeof(char*));

}