#include <stdio.h>
// 9장 21페이지:
//    정수 N을 입력받아, 1부터 N까지의 합을 출력
//    단, 함수 sum를 정의하여 사용할것

/*
int sum(int from, int to){
    // 등차수열의 합 공식 이용
    return (to-from+1)*(to+from)/2;
}
*/

int sum1(int to){
    // a1이 1일 때의 등차수열의 합 공식 이용
    return to*(1+to)/2;
}

int main(int argc, char const *argv[])
{
    int N;
    printf("1부터 더할 정수 N을 입력: ");
    scanf("%d", &N);
    printf("%d\n", sum1(N));
    return 0;
}