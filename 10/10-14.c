#include <stdio.h>
/*  10�� 14������:
 *    2�� ������ �Է¹޾� ������ �����ϰ�,
 *    �� ������ ���� �ٲٴ� �Լ� Swap�� ����� ������ ��
 *    �� ����� ���
 */

void SwapInt(int* a, int* b){
    int tmp;
    tmp = *a;*a=*b;*b=tmp;
    return;
}

int main(){
    int a,b;
    printf("���� 2���� ����� �����Ͽ� �Է�: ");
    scanf("%d %d", &a,&b);
    printf("�Է��� ���ڰ� a:%d, b:%d�� �����\n", a,b);
    
    printf("Swap(&a,&b); ����\n");
    SwapInt(&a, &b);

    printf("���� ��� a:%d, b:%d\n", a,b);
    return 0;
}