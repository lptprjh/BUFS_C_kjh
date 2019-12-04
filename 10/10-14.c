#include <stdio.h>
/*  10장 14페이지:
 *    2개 정수를 입력받아 변수에 저장하고,
 *    두 변수의 값을 바꾸는 함수 Swap을 만들어 실행한 후
 *    그 결과를 출력
 */

void SwapInt(int* a, int* b){
    int tmp;
    tmp = *a;*a=*b;*b=tmp;
    return;
}

int main(){
    int a,b;
    printf("정수 2개를 띄어쓰기로 구분하여 입력: ");
    scanf("%d %d", &a,&b);
    printf("입력한 숫자가 a:%d, b:%d로 저장됨\n", a,b);
    
    printf("Swap(&a,&b); 실행\n");
    SwapInt(&a, &b);

    printf("실행 결과 a:%d, b:%d\n", a,b);
    return 0;
}