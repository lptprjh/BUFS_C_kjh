#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, breast;
    prinf("���̸� �Է�: ");
    scanf("%d", &age);
    printf("�����ѷ��� �Է�: ");
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
