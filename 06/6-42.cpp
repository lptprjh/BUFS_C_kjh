#include <stdio.h>
//6장 42페이지: 두 수의 덧셈 (무한루프) 

int main(int argc, char** argv){
	int a,b;
	for(;;){
		printf("더할 두 수 입력 (멈추려면 Ctrl+C) : ");
		scanf("%d %d", &a,&b);
		printf("%d + %d = %d\n\n", a,b,a+b); 
	}
}
