#include <stdio.h>
// 8강 18페이지: 처음 입력받은 숫자개의 정수를 입력받아 역순으로 출력 (배열 2개를 이용))

int main(){
    int a[20], b[20], n, i;
    
    int sizeofa = sizeof(a)/sizeof(int); // 자동으로 처리
    
    // 입력받을 정수의 개수를 받아온다
    printf("입력받을 정수의 개수를 입력하세요(1~%d): ", sizeofa);
    scanf("%d", &n);

    // 입력값이 상정한 범위를 벗어나지 않는 지 검증
    if(n<1 || n>sizeofa){
        printf("오류: 입력값은 1~%d 사이여야 합니다.\n\n", sizeofa);
        return -1;
    }

    // 정해진 횟수만큼 정수를 차례로 입력받아 A에 기록한다.
    for (i = 0; i < n;i++){
        printf("%2d번째 정수를 입력하세요: ", i);
        scanf("%d", &a[i]);
    }

    // B를 A의 역순으로 기록한다
    for (i = 0; i < n;i++)
        b[i] = a[n-i-1];

    printf("입력받은 순서의 역순으로 출력합니다.\n");

    // 역순으로 배열한 B를 출력한다
    for (i = 0; i < n;i++)
        printf("%d ", b[i]);
    
    printf("\n\n");
    return 0;
}