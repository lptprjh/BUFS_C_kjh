#include <stdio.h>
// 9�� 10������:
//    �� ������ �Է¹޾� ���� �ٿ� �� ū ������ ����Ѵ�
//    ��, �Լ� max�� �����Ͽ� ����Ұ�

int max(int a, int b){
    return a>b?a:b;
}

int main(int argc, char const *argv[])
{
    int a,b;
    printf("���� ���� 2���� �Է�: ");
    scanf("%d %d", &a, &b);
    printf("%d\n", max(a,b));
    return 0;
}
