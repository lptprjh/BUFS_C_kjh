#include <stdio.h>
//6�� 44������: 6�� ����� ���� 

int main(int argc, char** argv){
	int a=0,i;
	
	for(i=1;i<=100;i++){
		if(i%6==0) { a++; }
	}
	printf("6�� ����� ������ %d", a);
	return 0;
}
