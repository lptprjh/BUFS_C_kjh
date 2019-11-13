#include <stdio.h>
// 7장 11페이지: 두 정수 중 큰 수를 출력(while문을 사용하여 무한반복) 

int main(int argc, char** argv){
	int a,b;
	while(1){
		printf("비교할 두 정수를 입력:");
		scanf("%d %d", &a,&b);
		printf("두 수중 큰 숫자는 %d 입니다.\n\n", a>b?a:b);
	}
	return 0;
}
