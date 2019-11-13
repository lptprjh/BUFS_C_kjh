#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("정수 3개를 띄어쓰기로 구분하여 입력: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b){
    	if(a>c){printf("%d",a);}
    	else{printf("%d",c);}
	}else if(b>c){printf("%d",b);}
	else{printf("%d",c);}
    printf("\n");
    return 0;
}
