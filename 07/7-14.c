#include <stdio.h>
//dowhile

int main(int argc, char** argv){
	int menu, order[3];
	for(int i=0;i<3;i++) order[i]=0;
	
	do {
		printf("�ֹ��Ͻðھ��? : ");
		scanf("%d", &menu);
		switch(menu){
			case 1: printf("# ī��� �ֹ��ϼ̽��ϴ�.\n");order[menu-1]++;break;
			case 2: printf("# īǪġ�� �ֹ��ϼ̽��ϴ�.\n");order[menu-1]++;break;
			case 3: printf("# �Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�.\n");order[menu-1]++;break;
			case 4: printf("�ֹ� Ȯ���ϰڽ��ϴ�.\n");break;
			default:printf("! �߸� �ֹ��ϼ̽��ϴ�.\n");break;
		}
	} while(menu!=4);
	
	printf(" ===== �ֹ��� =====\n");
	if(order[0]!=0) printf("# ī��� ��%2d\n", order[0]);
	if(order[1]!=0) printf("# īǪġ�� ��%2d\n", order[1]);
	if(order[2]!=0) printf("# �Ƹ޸�ī�� ��%2d\n", order[2]);
	return 0;
}
