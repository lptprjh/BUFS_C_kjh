#include <stdio.h>
#include <string.h>
// 8장 39페이지:
//    9줄에 걸쳐 n번째 줄마다 A를 n회 출력한다. (strcat 이용)

int main(){
    char aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa[64]={0}, i;
    
    for(i=1;i<=9;i++){
        strcat(aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa, "A");
        printf("%s\n",aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
    }

    return 0;
}