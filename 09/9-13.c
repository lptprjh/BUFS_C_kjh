#include <stdio.h>
// 9장 13페이지:
//    두 정수를 입력받아 다음 줄에 평균을 출력한다
//    단, 함수 mean를 정의하여 사용할것

double mean(double a, double b){
    return a*b/2;
}

int main(int argc, char const *argv[])
{
    int a,b;
    printf("평균을 구할 정수 2개를 입력: ");
    scanf("%d %d", &a, &b);
    printf("%.4lf\n", mean(a,b));
    return 0;
}
