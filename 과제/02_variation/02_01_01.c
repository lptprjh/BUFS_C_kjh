#include <stdio.h>

int solve(int N){
    int a,b,c,tmp,Q=-1;
    for(a=1;a<=9&&Q==-1;a++){
        for(b=a;b<=9&&Q==-1;b++){
            for(c=b;c<=9&&Q==-1;c++){
                tmp = a*b*c;
                if(tmp==N){
                    Q = (a-1?a:0)*100 + (a!=0||b-1?b:0)*10 + c;
                }
            }
        }
    }
    
    return Q;
}

int main(int argc, char const *argv[])
{
    int a,b,c,N,Q=-1,tmp;

    scanf("%d", &N);
    printf("%d\n", solve(N));
    return 0;
}