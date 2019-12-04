#include <stdio.h>
/*  10장 20페이지:
 *    5개 정수를 입력받아 배열에 저장 후,
 *    배열의 합을 반환하는 함수 Sum을 만들어 출력
 */

// 정수 배열의 주소와 크기를 받아, 그 합을 반환하는 함수
int Sum(int* arr, int size){
    int i,sum=0;
    for(i=0;i<size;i++)
        sum += arr[i];
    return sum;
}

int main(){
    int nums[5];
    printf("정수 5개를 입력: ");
    for(int i=0;i<5;i++)
        scanf("%d", &nums[i]);
    printf("정수 5개의 합은 %d\n", Sum(nums,5));
}