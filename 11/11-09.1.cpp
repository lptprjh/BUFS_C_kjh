#include <stdio.h>
#include <string.h>
/* 11�� 9������
 *    �̸�, ����, �й��� ���������� �Է¹޾� ����ü�� �����ϰ�,
 *    ��� �� �ٿ� ����Ѵ�.     
 *  Var.01: �Է��� �޾� ����ü�� �����ϴ� �κ��� ���� �Լ��� �и� 
 */

struct student {
		char name[32];
		int age;
		long long int num;
	}; 

void getStudentInfoFromUser(struct student *s){
	printf("�л� ����: ");
	scanf("%s", s->name);
	
	printf("�л� ����: ");
	scanf("%d", &s->age);
	
	printf("�л� �й�: ");
	scanf("%lld", &s->num);
	return;
}

int main(){
	struct student haksaeng;
	
	getStudentInfoFromUser(&haksaeng);
	
	printf("\n�л� ���� %s %d %lld �� ��ϵǾ����ϴ�.", haksaeng.name, haksaeng.age, haksaeng.num);
	return 0;
}
