#include <stdio.h>
#include <string.h>
/* 11장 9페이지
 *    이름, 나이, 학번을 순차적으로 입력받아 구조체에 저장하고,
 *    모두 한 줄에 출력한다.     
 *  Var.01: 입력을 받아 구조체에 저장하는 부분을 별도 함수로 분리 
 */

struct student {
		char name[32];
		int age;
		long long int num;
	}; 

void getStudentInfoFromUser(struct student *s){
	printf("학생 성명: ");
	scanf("%s", s->name);
	
	printf("학생 나이: ");
	scanf("%d", &s->age);
	
	printf("학생 학번: ");
	scanf("%lld", &s->num);
	return;
}

int main(){
	struct student haksaeng;
	
	getStudentInfoFromUser(&haksaeng);
	
	printf("\n학생 정보 %s %d %lld 이 등록되었습니다.", haksaeng.name, haksaeng.age, haksaeng.num);
	return 0;
}
