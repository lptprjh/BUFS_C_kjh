#include <stdio.h>
// 9�� 21������:
//    *�� �̷���� 20x20 ũ���� �����ﰢ�� ���
//    ��, �Լ� f(n)�� �����Ͽ� ����Ұ�

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