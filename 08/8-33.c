#include <stdio.h>
#include <string.h>
// 8장 33페이지: 2개 줄 각각에 문자열을 하나씩 입력받고, 둘 중 제일 긴 문자열의 길이를 출력

int main(int argc, char const *argv[])
{
    char a[256], b[256];
    int len_a, len_b;

    scanf("%s", a);
    scanf("%s", b);

    len_a = strlen(a);
    len_b = strlen(b);

    if (len_a > len_b) {
        printf("%d\n", len_a);
    } else {
        printf("%d\n", len_b);
    }

    return 0;
}
