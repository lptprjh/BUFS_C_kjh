#include <stdio.h>
// 8�� 48������: aa[10][10]�� aa[i][k]�� i*k�� �����ϰ�, �迭 aa�� ��ҵ��� ���� ���


int main(int argc, char const *argv[])
{
    char aa[10][10];
    int i,k,sum=0;

    for(i=0;i<10;i++)
        for(k=0;k<10;k++)
            aa[i][k] = i*k;

    for(i=0;i<10;i++)
        for(k=0;k<10;k++)
            sum += aa[i][k];

    printf("%d\n", sum);
    return 0;
}
