#include <stdio.h>
//6�� 42������: �� ���� ���� (���ѷ���) 

int main(int argc, char** argv){
	int a,b;
	for(;;){
		printf("���� �� �� �Է� (���߷��� Ctrl+C) : ");
		scanf("%d %d", &a,&b);
		printf("%d + %d = %d\n\n", a,b,a+b); 
	}
}
