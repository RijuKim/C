#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a; // p�� a�� ����Ű�� ��������

	printf("a=%d\n", a); //a�� �� ���
	printf("&a=%p\n", &a); //a�� �ּ� ���

	printf("p=%p\n", p); //�����Ϳ� ����� �� ���(a�� �ּ�)
	printf("*p=%d\n", *p); //p�� ����Ű�� int�� ���� a ���
	printf("&p=%p\n", &p); //p�� �ּ� ���

	*p = 20; //p�� ����Ű�� int ���� a�� 20�� ����
	printf("*p=%d\n", *p); //p�� ����Ű�� int ���� a�� ���

}