#include <stdio.h>
// 9�� 13������:
//    �� ������ �Է¹޾� ���� �ٿ� ����� ����Ѵ�
//    ��, �Լ� mean�� �����Ͽ� ����Ұ�

double mean(double a, double b){
    return a*b/2;
}

int main(int argc, char const *argv[])
{
    int a,b;
    printf("����� ���� ���� 2���� �Է�: ");
    scanf("%d %d", &a, &b);
    printf("%.4lf\n", mean(a,b));
    return 0;
}
