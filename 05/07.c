#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("���� 3���� ����� �����Ͽ� �Է�: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b){
    	if(a>c){printf("%d",a);}
    	else{printf("%d",c);}
	}else if(b>c){printf("%d",b);}
	else{printf("%d",c);}
    printf("\n");
    return 0;
}
