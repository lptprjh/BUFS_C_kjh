#include <stdio.h>
// 7장 23페이지: 7의 배수가 아닌 정수들의 합 (continue 이용)

int main(int argc, char** argv){
	int i,s=0;
	
	for(i=1;i<=1000;i++){
		if(i%7==0)continue;
		s+=i;
	}
	printf("%d", s);
	
	return 0;
}
/* while문을 이용할 경우 
int main(int argc, char** argv){
	int i=0,s=0;
	
	while(++i<1000){
		if(i%7==0)continue;
		s+=i;
	}
	printf("%d", s);
	return 0;
}
*/
