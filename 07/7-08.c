#include <stdio.h>
//7�� 8������: 1~100 ¦���� �� (while�� ���) 

int main(int argc, char** argv){
	int i=1,s=0;
	while(i<=100){
		if(i%2==0){ s+=i; }
	}
	printf("%d", s);
}
