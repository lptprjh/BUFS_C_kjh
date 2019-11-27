#include <stdio.h>
// 8장 27페이지: 이름(문자열)로 배열을 초기화하고 역순으로 출력

int main(){
    char nm[12] = "Ryujongheon";
    char abekobe[12];
    int i;

    for(i=0;i<11;i++) // NULL 문자 처리를 위해 배열 맨 마지막 한 칸은 건너뒴
        abekobe[i] = nm[11-1-i];
    abekobe[11] = '\0';
    
    printf("%s\n",abekobe);

    return 0;
}