#include <stdio.h>
#include <stdlib.h>
/*  10�� 20������:
 *    5�� ������ �Է¹޾� �迭�� ���� ��,
 *    �迭�� ���� ��ȯ�ϴ� �Լ� Sum�� ����� ���
 */

int Sum(int* arr, int size);

int main(){
    int n, *arr, i;
    
    printf("�Է��� ������ ������ �Է��Ͻʽÿ�: ");
    scanf("%d", &n);
    
    // sizeof(int)*n ����Ʈ�� �޸𸮸� arr�� �Ҵ�
    arr = (int*)malloc(sizeof(int)*n);

    // ������ �Է¹���
    printf("%d���� ������ ����� �����Ͽ� �Է��Ͻÿ�: ", n);
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    printf("�Է��� ������ ���� %d\n", Sum(arr, n));

    free(arr);
    return 0;
}

int Sum(int* arr, int size){
    int i,sum=0;
    for(i=0;i<size;i++)
        sum += arr[i];
    return sum;
}