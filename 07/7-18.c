#include <stdio.h>
// 7�� 18������: �Է¹��� ������ ¦/Ȧ�� �Ǻ�, 0 �Է½� ����. (while�� ����Ͽ� ���ѹݺ�) 

int main(int argc, char** argv){
	int a;
	
	while(1){
		printf("���� ������ �Է��Ͻʽÿ�: ");
		scanf("%d", &a);
		if(a==0){
			printf("0�� �Է��ϼ̽��ϴ�. ���α׷��� �����մϴ�.");
			break;
		}else if(a<0){
			printf("���� ������ �ƴմϴ�. �����Ͻ÷��� 0�� �Է��Ͻʽÿ�.\n\n");
		}else{
			printf("�Է��Ͻ� ���� %d�� %s�Դϴ�.\n\n",a,a%2==0?"¦��":"Ȧ��");
		}
	}
	return 0;
}
