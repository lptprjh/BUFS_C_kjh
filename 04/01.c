#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    int band,bor,bxor,bnota;
    double div_lf;
    printf("두 정수를 띄어쓰기로 구분하여 입력하시오: ");
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
