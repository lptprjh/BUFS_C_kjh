#include <stdio.h>
// 8�� 21������: double�� �迭�� �ʱ�ȭ�ϰ�, �迭�� ũ�⸦ ���

int main(int argc, char const *argv[])
{
    double a[] = {1,2,3,4,5,5,4,3,2,1};

    printf("�迭�� ũ��� %ld (%ld����Ʈ) �Դϴ�.\n\n", sizeof(a)/sizeof(double), sizeof(a));
    return 0;
}
