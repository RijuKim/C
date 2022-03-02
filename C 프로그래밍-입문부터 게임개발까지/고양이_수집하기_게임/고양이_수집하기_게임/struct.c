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

int main (void){

	srand(time(NULL));
	return 0;
}