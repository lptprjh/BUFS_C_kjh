#include <stdio.h>
#include <string.h>
// 8�� 33������: 2�� �� ������ ���ڿ��� �ϳ��� �Է¹ް�, �� �� ���� �� ���ڿ��� ���̸� ���

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
