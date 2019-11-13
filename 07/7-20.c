#include <stdio.h>
// 7장 20페이지: i³의 합이 처음으로 100,000을 넘는 i의 값 출력 (while문 사용) 

int main(int argc, char** argv){
	int i=0,s=0;
	while(s<100000){
		i += 1;
		s += i*i*i;
	}
	printf("i³의 합이 100,000을 넘게 하는 i의 최솟값: %d (%d)\n\n", i,s);
	return 0;
}
