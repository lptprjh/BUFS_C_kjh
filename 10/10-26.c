#include <stdio.h>
#include <stdlib.h>
/*  10장 20페이지:
 *    5개 정수를 입력받아 배열에 저장 후,
 *    배열의 합을 반환하는 함수 Sum을 만들어 출력
 */

int Sum(int* arr, int size);

int main(){
    int n, *arr, i;
    
    printf("입력할 정수의 개수를 입력하십시오: ");
    scanf("%d", &n);
    
    // sizeof(int)*n 바이트의 메모리를 arr에 할당
    arr = (int*)malloc(sizeof(int)*n);

    // 정수를 입력받음
    printf("%d개의 정수를 띄어쓰기로 구분하여 입력하시오: ", n);
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    printf("입력한 정수의 합은 %d\n", Sum(arr, n));

    free(arr);
    return 0;
}

int Sum(int* arr, int size){
    int i,sum=0;
    for(i=0;i<size;i++)
        sum += arr[i];
    return sum;
}