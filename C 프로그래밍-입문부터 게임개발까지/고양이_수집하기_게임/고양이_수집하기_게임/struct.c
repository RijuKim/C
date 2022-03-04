#include <stdio.h>
#include <time.h>

//5마리의 고양이가 있다
//아무 키나 눌러 랜덤으로 고양이를 뽑는다
//5마리 모두 수집하면 게임 성공!
//중복 발생 가능

//고양이
//이름, 나이, 성격, 키우기 난이도(레벨)

typedef struct {
	char name; //이름
	int age; //나이
	char* character; //성격
	int level; //키우기 난이도 (2-5, 5가 어려움)

} CAT;

//현재까지 보유한 고양이
int collection[5] = { 0,0,0,0,0 };

//전체 고양이 리스트
CAT cats[5];

void initCats(); //고양이 정보 초기화
void printCat(int selected);

int main (void){

	srand(time(NULL));

	initCats();
	while (1) {
		printf("두근두근~ 어느 고양이의 집사가 될까요?\n아무 키나 눌러서 확인하세요!");
		getchar();

		int selected = rand() * 5; //0-4 사이의 숫자 반환
		printCat(selected); //뽑은 고양이 정보 출력
		collection[selected] = 1; //고양이 뽑기 처리

		int collectAll = checkCollection();
	}
	return 0;
}

void initCats() {

	cats[0].name = "깜냥이";
	cats[0].age = 5;
	cats[0].character = "온순";
	cats[0].level = 1;

	cats[0].name = "구름이";
	cats[0].age = 11;
	cats[0].character = "까칠";
	cats[0].level = 3;

	cats[0].name = "꼬맹이";
	cats[0].age = 1;
	cats[0].character = "애교많음";
	cats[0].level = 2;

	cats[0].name = "포포";
	cats[0].age = 6;
	cats[0].character = "더러움";
	cats[0].level = 5;

	cats[0].name = "꿀꿀이";
	cats[0].age = 3;
	cats[0].character = "먹보";
	cats[0].level = 4;
}

void printCat(int selected) {
	printf("\n\n===당신은 이 고양이의 집사가 되었어요!===\n\n");
	printf(" 이름        : %s\n", cats[selected].name);
	printf(" 나이        : %d\n", cats[selected].age);
	printf(" 특징(성격)  : %s\n", cats[selected].character);
	printf(" 레벨        : ");

	for (int i = 0; i < cats[selected].level; i++) {
		printf("%s", "★");
	}
	printf("\n\n");
}