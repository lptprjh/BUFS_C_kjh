#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    prinf("������ �Է�: ");
    scanf("%d", &num);
    if(num>0){
        printf("���\n");
    }else if(num==0){
        printf("0\n");
    }else{
        printf("����\n");
    }
    
    return 0;
}
