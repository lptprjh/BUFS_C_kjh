#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,N,Q=-1,tmp;

    scanf("%d", &N);

    // [여기에 핵심 요소를 입력]
    for(a=1;a<=9&&Q==-1;a++){
        for(b=a;b<=9&&Q==-1;b++){
            for(c=b;c<=9&&Q==-1;c++){
                tmp = a*b*c;
                if(tmp==N){ 
                    Q = a*100 + b*10 + c;
                }
            }
        }
    }

    if(Q/100==1) Q-=100;
    if(Q/10==1) Q-=10;
    printf("%d\n", Q);
    return 0;
}
