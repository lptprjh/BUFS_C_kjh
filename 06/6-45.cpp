#include <stdio.h>
//6�� 45������: �Ҽ� �Ǻ�

int main(int argc, char** argv){
	int a,i;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d",&a);
	
	for(i=2;i<a;i++){
		if(a%i==0){ break; }
	}
	if(a==i){
		printf("�Է��Ͻ� ���ڴ� �Ҽ��Դϴ�.\n");
	}else{
		printf("�Է��Ͻ� ���ڴ� �Ҽ��� �ƴմϴ�. (%d(��)�� ��������)\n", i);
	}
}
