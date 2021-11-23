#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a; // p는 a를 가리키는 포인터임

	printf("a=%d\n", a); //a의 값 출력
	printf("&a=%p\n", &a); //a의 주소 출력

	printf("p=%p\n", p); //포인터에 저장된 값 출력(a의 주소)
	printf("*p=%d\n", *p); //p가 가리키는 int형 변수 a 출력
	printf("&p=%p\n", &p); //p의 주소 출력

	*p = 20; //p가 가리키는 int 변수 a에 20을 저장
	printf("*p=%d\n", *p); //p가 가리키는 int 변수 a를 출력

}