#include <stdio.h>
// 7�� 20������: i���� ���� ó������ 100,000�� �Ѵ� i�� �� ��� (while�� ���) 

int main(int argc, char** argv){
	int i=0,s=0;
	while(s<100000){
		i += 1;
		s += i*i*i;
	}
	printf("i���� ���� 100,000�� �Ѱ� �ϴ� i�� �ּڰ�: %d (%d)\n\n", i,s);
	return 0;
}
