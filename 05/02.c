#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    prinf("Á¤¼ö¸¦ ÀÔ·Â: ");
    scanf("%d", &num);
    if(num%2==0){
        printf("Â¦¼ö\n");
    }else{
        printf("È¦¼ö\n");
    }
    
    return 0;
}
