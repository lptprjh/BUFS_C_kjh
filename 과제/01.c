#include <stdio.h>
// 과제: 주어진 시각을 통해 이용 시간에 따른 요금 정산

int main(void)
{
    // 시간, 분, 시작 시각(ah,am), 종료 시각(bh,bm), 합계 요금
    // 분당 요금(100원)
    int h,m,ah,am,bh,bm,total;
    const int costPerMin = 100;
	
    // 두 줄에 걸쳐 시작/종료 시각을 입력받음
	printf("시작 시간과 시작 분을 입력하시오:");
	scanf("%d %d",&ah,&am);
	printf("종료 시간과 종료 분을 입력하시오:");
	scanf("%d %d",&bh,&bm);
	
    // 자정을 넘긴 경우
    if(ah>bh || (ah==bh&&am>bm)) bh+=24;
	
    // 시간 계산 
    h = bh-ah;
    m = bm-am;

    // 요금 계산
    total = (h*60 + m) * costPerMin;
	
	printf("지불해야할 사용료는 %d 입니다",total);
	
	return 0;
	
}
