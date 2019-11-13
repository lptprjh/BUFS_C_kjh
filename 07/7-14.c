#include <stdio.h>
//dowhile

int main(int argc, char** argv){
	int menu, order[3];
	for(int i=0;i<3;i++) order[i]=0;
	
	do {
		printf("주문하시겠어요? : ");
		scanf("%d", &menu);
		switch(menu){
			case 1: printf("# 카페라떼 주문하셨습니다.\n");order[menu-1]++;break;
			case 2: printf("# 카푸치노 주문하셨습니다.\n");order[menu-1]++;break;
			case 3: printf("# 아메리카노 주문하셨습니다.\n");order[menu-1]++;break;
			case 4: printf("주문 확인하겠습니다.\n");break;
			default:printf("! 잘못 주문하셨습니다.\n");break;
		}
	} while(menu!=4);
	
	printf(" ===== 주문서 =====\n");
	if(order[0]!=0) printf("# 카페라떼 ×%2d\n", order[0]);
	if(order[1]!=0) printf("# 카푸치노 ×%2d\n", order[1]);
	if(order[2]!=0) printf("# 아메리카노 ×%2d\n", order[2]);
	return 0;
}
