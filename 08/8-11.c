#include <stdio.h>
// 8강 11페이지: 처음 입력받은 숫자개의 정수를 입력받고, 그 중 최대치를 출력

int main(){
    int a[20], n, i, choegobong; //최고봉
    
    int sizeofa = sizeof(a)/sizeof(int); // 자동으로 처리

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
    
    // 최고봉을 찾는다
    for (i = 0; i < n;i++)
        if(i==0 || a[i]>choegobong) //i==0: 변수 초기화를 위함
            choegobong=a[i];
    
    // 최고봉을 출력
    printf("%d\n\n", choegobong);

    return 0;
}