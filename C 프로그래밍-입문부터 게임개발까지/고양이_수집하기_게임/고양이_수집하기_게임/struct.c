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

void initCats(); //����� ���� �ʱ�ȭ

int main (void){

	srand(time(NULL));
	return 0;
}

void initCats() {

	cats[0].name = "������";
	cats[0].age = 5;
	cats[0].character = "�¼�";
	cats[0].level = 1;

	cats[0].name = "������";
	cats[0].age = 11;
	cats[0].character = "��ĥ";
	cats[0].level = 3;

	cats[0].name = "������";
	cats[0].age = 1;
	cats[0].character = "�ֱ�����";
	cats[0].level = 2;

	cats[0].name = "����";
	cats[0].age = 6;
	cats[0].character = "������";
	cats[0].level = 5;

	cats[0].name = "�ܲ���";
	cats[0].age = 3;
	cats[0].character = "�Ժ�";
	cats[0].level = 4;
}