#include <stdio.h>
// 8강 10페이지: 처음 입력받은 숫자개의 정수개를 입력받고, 짝수의 합을 구하여 출력
// main(){int a[20],n,s=0,i;scanf("%d",&n);for(i=0;i++<n;)scanf("%d",&a[i]);for(i=0;i++<n;)s+=a[i]%2==0?a[i]:0;printf("%d",s);}

int main(){
    int a[20], n, s = 0, i;
    
    int sizeofa = sizeof(a)/sizeof(int); // 자동으로 처리

    // 입력받을 정수의 개수를 불러온다
    printf("입력받을 정수의 개수를 입력하세요(1~%d): ", sizeofa);
    scanf("%d", &n);

    // 입력값이 상정한 범위를 벗어나지 않는 지 검증
    if(n<1 || n>sizeofa){
        printf("오류: 입력값은 1~%d 사이여야 합니다.\n\n", sizeofa);
        return -1;
    }

    // 정해진 횟수만큼 정수를 입력받는다
    for (i = 0; i < n;i++){
        printf("%2d번째 정수를 입력하세요: ", i);
        scanf("%d", &a[i]);
    }

    // 입력받은 정수 중 짝수면 추려서 더한다
    for (i = 0; i < n;i++)
        if(a[i] % 2 == 0)
            s += a[i];
    printf("짝수의 합: %d\n\n", s);

    return 0;
}