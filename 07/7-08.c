#include <stdio.h>
//7장 8페이지: 1~100 짝수의 합 (while문 사용) 

int main(int argc, char** argv){
	int i=1,s=0;
	while(i<=100){
		if(i%2==0){ s+=i; }
	}
	printf("%d", s);
}
