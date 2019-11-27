#include <stdio.h>
// 9장 21페이지:
//    *로 이루어진 20x20 크기의 직각삼각형 출력
//    단, 함수 f(n)을 정의하여 사용할것

void f(int n){
    int i;
    for(i=1;i<=n;i++) printf("*");
    printf("\n");
    return;
}

int main(int argc, char const *argv[])
{
    int i;
    for(i=1;i<=20;i++)
        f(i);
    return 0;
}