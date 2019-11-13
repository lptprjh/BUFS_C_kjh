#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    prinf("정수를 입력: ");
    scanf("%d", &num);
    if(num>0){
        printf("양수\n");
    }else if(num==0){
        printf("0\n");
    }else{
        printf("음수\n");
    }
    
    return 0;
}
