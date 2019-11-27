#include <stdio.h>
// 8장 30페이지: 10바이트 이하의 문자열을 입력받아 역순으로 출력

int main(){
    char str[11];
    char abekobe[11];
    int i, len;

    printf("10바이트 이하의 문자열을 입력하세요: ");
    scanf("%s", str);

    // 입력받은 문자열의 길이를 체크
    for(len=0;len<11+1;len++){
        if(len==11){
            printf("배열에서 NULL 문자를 찾지 못했습니다.");
            printf("입력된 문자열이 10바이트를 초과했거나, 비호환 문자가 포함되었을 가능성이 있습니다.");
            printf("프로그램을 종료합니다.\n");
            return -1;
        }
        if(str[len]=='\0') break;
    }
    
    
    // 뒤엎
    for(i=0;i<len;i++) // NULL 문자 처리를 위해 배열 맨 마지막 한 칸은 건너뒴
        abekobe[i] = str[len-1-i];
    abekobe[len] = '\0';
    
    printf("%s\n",abekobe);

    return 0;
}