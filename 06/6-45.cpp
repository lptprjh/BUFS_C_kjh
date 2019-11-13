#include <stdio.h>
//6장 45페이지: 소수 판별

int main(int argc, char** argv){
	int a,i;
	printf("정수를 입력하시오: ");
	scanf("%d",&a);
	
	for(i=2;i<a;i++){
		if(a%i==0){ break; }
	}
	if(a==i){
		printf("입력하신 숫자는 소수입니다.\n");
	}else{
		printf("입력하신 숫자는 소수가 아닙니다. (%d(으)로 나누어짐)\n", i);
	}
}
