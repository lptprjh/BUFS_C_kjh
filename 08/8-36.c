#include <stdio.h>
#include <string.h>
// 8�� 36������:
//   �� �ٿ� ���� ���ڿ��� 3�� �Է¹ް�,
//   �� �� ���� �� ���ڿ��� ��� (strcpy �̿�)

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