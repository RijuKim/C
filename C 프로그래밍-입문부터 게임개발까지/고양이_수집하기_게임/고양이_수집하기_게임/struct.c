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
void printCat(int selected);

int main (void){

	srand(time(NULL));

	initCats();
	while (1) {
		printf("�αٵα�~ ��� ������� ���簡 �ɱ��?\n�ƹ� Ű�� ������ Ȯ���ϼ���!");
		getchar();

		int selected = rand() * 5; //0-4 ������ ���� ��ȯ
		printCat(selected); //���� ����� ���� ���
		collection[selected] = 1; //����� �̱� ó��

		int collectAll = checkCollection();
	}
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

void printCat(int selected) {
	printf("\n\n===����� �� ������� ���簡 �Ǿ����!===\n\n");
	printf(" �̸�        : %s\n", cats[selected].name);
	printf(" ����        : %d\n", cats[selected].age);
	printf(" Ư¡(����)  : %s\n", cats[selected].character);
	printf(" ����        : ");

	for (int i = 0; i < cats[selected].level; i++) {
		printf("%s", "��");
	}
	printf("\n\n");
}