#include <stdio.h>
// 7�� 11������: �� ���� �� ū ���� ���(while���� ����Ͽ� ���ѹݺ�) 

int main(int argc, char** argv){
	int a,b;
	while(1){
		printf("���� �� ������ �Է�:");
		scanf("%d %d", &a,&b);
		printf("�� ���� ū ���ڴ� %d �Դϴ�.\n\n", a>b?a:b);
	}
	return 0;
}
