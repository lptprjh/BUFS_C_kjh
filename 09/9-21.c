#include <stdio.h>
// 9�� 21������:
//    ���� N�� �Է¹޾�, 1���� N������ ���� ���
//    ��, �Լ� sum�� �����Ͽ� ����Ұ�

/*
int sum(int from, int to){
    // ���������� �� ���� �̿�
    return (to-from+1)*(to+from)/2;
}
*/

int sum1(int to){
    // a1�� 1�� ���� ���������� �� ���� �̿�
    return to*(1+to)/2;
}

int main(int argc, char const *argv[])
{
    int N;
    printf("1���� ���� ���� N�� �Է�: ");
    scanf("%d", &N);
    printf("%d\n", sum1(N));
    return 0;
}