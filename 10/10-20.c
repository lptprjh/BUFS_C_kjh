#include <stdio.h>
/*  10�� 20������:
 *    5�� ������ �Է¹޾� �迭�� ���� ��,
 *    �迭�� ���� ��ȯ�ϴ� �Լ� Sum�� ����� ���
 */

// ���� �迭�� �ּҿ� ũ�⸦ �޾�, �� ���� ��ȯ�ϴ� �Լ�
int Sum(int* arr, int size){
    int i,sum=0;
    for(i=0;i<size;i++)
        sum += arr[i];
    return sum;
}

int main(){
    int nums[5];
    printf("���� 5���� �Է�: ");
    for(int i=0;i<5;i++)
        scanf("%d", &nums[i]);
    printf("���� 5���� ���� %d\n", Sum(nums,5));
}