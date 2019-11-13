#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    prinf("정수 2개를 입력: ");
    scanf("%d %d", &a,&b);
    if(a>b){
        printf("%d\n",a);
    }else{
        printf("%d\n",b);
    }
    return 0;
}
