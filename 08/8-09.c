#include <stdio.h>
// 8강 9페이지: 처음 입력받은 숫자개의 정수를 입력받아 빈 칸으로 구분하여 출력

int main(){
    int a[20], n, i;
    
    int sizeofa = sizeof(a)/sizeof(int); // 자동으로 처리, 배열 a의 크기를 가져옴
    
    // 입력받을 정수의 개수를 받아온다
    printf("입력받을 정수의 개수를 입력하세요(1~%d): ", sizeofa);
    scanf("%d", &n);

    // 입력값이 상정한 범위를 벗어나지 않는 지 검증
    if(n<1 || n>sizeofa){
        printf("오류: 입력값은 1~%d 사이여야 합니다.\n\n", sizeofa);
        return -1;
    }

    // 정해진 횟수만큼 정수를 차례로 입력받는다
    for (i = 0; i < n;i++){
        printf("%2d번째 정수를 입력하세요: ", i);
        scanf("%d", &a[i]);
    }

    // 입력받은 정수를 차례로 출력한다
    for (i = 0; i < n;i++)
        printf("%d ", a[i]);
    
    printf("\n\n");
    return 0;
}