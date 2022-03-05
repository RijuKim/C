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

		int selected = rand() % 5; //0-4 사이의 숫자 반환
		printCat(selected); //뽑은 고양이 정보 출력
		collection[selected] = 1; //고양이 뽑기 처리

		int collectAll = checkCollection();
		if (collectAll==1) {
			break;
		}
	}
}

void initCats() {

	cats[0].name = "깜냥이";
	cats[0].age = 5;
	cats[0].character = "온순";
	cats[0].level = 1;

	cats[1].name = "구름이";
	cats[1].age = 11;
	cats[1].character = "까칠";
	cats[1].level = 3;

	cats[2].name = "꼬맹이";
	cats[2].age = 1;
	cats[2].character = "애교많음";
	cats[2].level = 2;

	cats[3].name = "포포";
	cats[3].age = 6;
	cats[3].character = "더러움";
	cats[3].level = 5;

	cats[4].name = "꿀꿀이";
	cats[4].age = 3;
	cats[4].character = "먹보";
	cats[4].level = 4;
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

int checkCollection() {
	//1. 현재 보유한 고양이 목록도 출력
	//2. 다 모았는지 여부를 반환
	int collectAll = 1;

	printf("\n\n===보유한 고양이 목록 반환===\n\n");
	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0) { //고양이 수집 x
			printf("%10s", "(빈 박스)\n");
			collectAll = 0; //다 모으지 못한 상태
		}
		else //고양이 수집 0
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n=======================\n\n");

	if (collectAll) { //모든 고양이를 다 모은 경우
		printf("\n\n축하합니다! 모든 고양이를 다 모았어요. 열심히 키워주세요!\n\n ");
	}
	return 0;

	return collectAll;
}

