#include <stdio.h>
// 9�� 21������:
//    ���� N�� �Է¹޾�, 1���� N������ ���� ���
//    ��, �Լ� sum�� �����Ͽ� ����Ұ�

int sum(int from, int to){
    // ���������� �� ����
    return (to-from+1)*(2*from+to-from)/2;
}

int main(int argc, char const *argv[])
{
    int N;
    printf("1���� ���� ���� N�� �Է�: ");
    scanf("%d", &N);
    printf("%d\n", sum(1,N));
    return 0;
}