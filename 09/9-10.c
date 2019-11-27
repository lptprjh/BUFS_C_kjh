#include <stdio.h>
// 9장 10페이지:
//    두 정수를 입력받아 다음 줄에 더 큰 정수를 출력한다
//    단, 함수 max를 정의하여 사용할것

int max(int a, int b){
    return a>b?a:b;
}

int main(int argc, char const *argv[])
{
    int a,b;
    printf("비교할 정수 2개를 입력: ");
    scanf("%d %d", &a, &b);
    printf("%d\n", max(a,b));
    return 0;
}
