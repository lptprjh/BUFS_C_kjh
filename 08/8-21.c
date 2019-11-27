#include <stdio.h>
// 8장 21페이지: double형 배열를 초기화하고, 배열의 크기를 출력

int main(int argc, char const *argv[])
{
    double a[] = {1,2,3,4,5,5,4,3,2,1};

    printf("배열의 크기는 %ld (%ld바이트) 입니다.\n\n", sizeof(a)/sizeof(double), sizeof(a));
    return 0;
}
