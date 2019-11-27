#include <stdio.h>
#include <string.h>
// 8장 36페이지:
//   세 줄에 걸쳐 문자열을 3개 입력받고,
//   그 중 가장 긴 문자열을 출력 (strcpy 이용)

int main(){
    char a[256], b[256], c[256], x[256];
    int alen, blen, clen;

    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);

    alen=strlen(a);
    blen=strlen(b);
    clen=strlen(c);

    if(alen>blen){
        if(alen>clen) strcpy(x,a);
        else strcpy(x,c);
    }else{
        if(blen>clen) strcpy(x,b);
        else strcpy(x,c);
    }

    printf("%s", x);
}