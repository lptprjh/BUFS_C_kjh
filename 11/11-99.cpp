#include <stdio.h>
#include <string.h>
/* 11장 9페이지
 *    이름, 나이, 학번을 순차적으로 입력받아 구조체에 저장하고,
 *    모두 한 줄에 출력한다.     
*/

int main(){
	struct student {
		char name[32];
		int age;
		long long int num;
	}; 
	
	struct student haksaeng;
	
	printf("학생 성명: ");
	scanf("%s", haksaeng.name);
	
	printf("학생 나이: ");
	scanf("%d", &haksaeng.age);
	
	printf("학생 학번: ");
	scanf("%lld", &haksaeng.num);
	
	printf("\n학생 정보 %s %d %lld 이 등록되었습니다.", haksaeng.name, haksaeng.age, haksaeng.num);
	return 0;
}
