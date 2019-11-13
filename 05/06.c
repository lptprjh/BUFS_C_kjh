#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, breast;
    prinf("나이를 입력: ");
    scanf("%d", &age);
    printf("가슴둘레를 입력: ");
    scanfe("%d", &breast);
    if(age<20){
        if(breast<85){printf("S")}
        else if(breast<95){printf("M")}
        else {printf("L")}
    }else{
        if(breast<90){printf("S")}
        else if(breast<100){printf("M")}
        else {printf("L")}
    }
    printf("\n");
    return 0;
}
