#include <stdio.h>
#include <string.h>
/* 11�� 9������
 *    �̸�, ����, �й��� ���������� �Է¹޾� ����ü�� �����ϰ�,
 *    ��� �� �ٿ� ����Ѵ�.     
*/

int main(){
	struct student {
		char name[32];
		int age;
		long long int num;
	}; 
	
	struct student haksaeng;
	
	printf("�л� ����: ");
	scanf("%s", haksaeng.name);
	
	printf("�л� ����: ");
	scanf("%d", &haksaeng.age);
	
	printf("�л� �й�: ");
	scanf("%lld", &haksaeng.num);
	
	printf("\n�л� ���� %s %d %lld �� ��ϵǾ����ϴ�.", haksaeng.name, haksaeng.age, haksaeng.num);
	return 0;
}
