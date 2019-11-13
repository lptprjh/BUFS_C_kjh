#include <stdio.h>
//6장 44페이지: 6의 배수의 개수 

int main(int argc, char** argv){
	int a=0,i;
	
	for(i=1;i<=100;i++){
		if(i%6==0) { a++; }
	}
	printf("6의 배수의 개수는 %d", a);
	return 0;
}
