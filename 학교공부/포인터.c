#include <stdio.h>

int main(void)
{
	int* pi;
	double* pd;
	char* pc;   //�������� ũ��� ���������� ������� �׻� ����

	printf("sizeof(pi) = %d\n", sizeof(pi));  //�������� ũ�⸦ ���Ѵ�
	printf("sizeof(pd) = %d\n", sizeof(pd));
	printf("sizeof(pc) = %d\n", sizeof(pc));

	printf("sizeof(int*) = %d\n", sizeof(int*));  //���������� ũ�⸦ ���Ѵ�
	printf("sizeof(double*) = %d\n", sizeof(double*));
	printf("sizeof(char*) = %d\n", sizeof(char*));

}