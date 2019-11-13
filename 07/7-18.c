#include <stdio.h>
// 7장 18페이지: 입력받은 정수의 짝/홀을 판별, 0 입력시 종료. (while을 사용하여 무한반복) 

int main(int argc, char** argv){
	int a;
	
	while(1){
		printf("양의 정수를 입력하십시오: ");
		scanf("%d", &a);
		if(a==0){
			printf("0을 입력하셨습니다. 프로그램을 종료합니다.");
			break;
		}else if(a<0){
			printf("양의 정수가 아닙니다. 종료하시려면 0을 입력하십시오.\n\n");
		}else{
			printf("입력하신 숫자 %d는 %s입니다.\n\n",a,a%2==0?"짝수":"홀수");
		}
	}
	return 0;
}
