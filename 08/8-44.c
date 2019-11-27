#include <stdio.h>
#include <string.h>
// 8장 44페이지:
//   20바이트 이하 문자열 입력받고 a를 #로 치환해서 출력 (gets, puts 이용)

int main(int argc, char const *argv[])
{
    char str[21], strl,i;

    gets(str);
    strl = strlen(str);

    for(i=0;i<strl;i++)
        if(str[i]=='a') str[i]='#';

    puts(str);
    return 0;
}
