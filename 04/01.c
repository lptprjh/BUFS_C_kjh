#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    int band,bor,bxor,bnota;
    double div_lf;
    printf("�� ������ ����� �����Ͽ� �Է��Ͻÿ�: ");
    scanf("%d %d", &a, &b);
    
    band=a&b;
	bor=a|b;
	bxor=a^b;
	bnota=~a;
	
    printf("\nA         |  B        | Result\n--------------------------------\n");
    printf("%8d  &  %8d = %8d\n", a,b,band);
    printf("%8d  |  %8d = %8d\n", a,b,bor);
    printf("%8d  ^  %8d = %8d\n", a,b,bxor);
    printf("          ~( %8d)= %d", a, bnota);
    return 0;
}
