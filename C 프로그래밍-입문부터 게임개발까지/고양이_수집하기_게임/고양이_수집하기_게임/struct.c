#include <stdio.h>
#include <time.h>

//5������ ����̰� �ִ�
//�ƹ� Ű�� ���� �������� ����̸� �̴´�
//5���� ��� �����ϸ� ���� ����!
//�ߺ� �߻� ����

//�����
//�̸�, ����, ����, Ű��� ���̵�(����)

typedef struct {
	char name; //�̸�
	int age; //����
	char* character; //����
	int level; //Ű��� ���̵� (2-5, 5�� �����)

} CAT;

//������� ������ �����
int collection[5] = { 0,0,0,0,0 };

//��ü ����� ����Ʈ
CAT cats[5];

int main (void){

	srand(time(NULL));
	return 0;
}