#include <stdio.h>
// 7�� 23������: 7�� ����� �ƴ� �������� �� (continue �̿�)

int main(int argc, char** argv){
	int i,s=0;
	
	for(i=1;i<=1000;i++){
		if(i%7==0)continue;
		s+=i;
	}
	printf("%d", s);
	
	return 0;
}
/* while���� �̿��� ��� 
int main(int argc, char** argv){
	int i=0,s=0;
	
	while(++i<1000){
		if(i%7==0)continue;
		s+=i;
	}
	printf("%d", s);
	return 0;
}
*/
