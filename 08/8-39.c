#include <stdio.h>
#include <string.h>
// 8�� 39������:
//    9�ٿ� ���� n��° �ٸ��� A�� nȸ ����Ѵ�. (strcat �̿�)

int main(){
    char aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa[64]={0}, i;
    
    for(i=1;i<=9;i++){
        strcat(aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa, "A");
        printf("%s\n",aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
    }

    return 0;
}