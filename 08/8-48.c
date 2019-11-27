#include <stdio.h>
// 8장 48페이지: aa[10][10]의 aa[i][k]에 i*k를 저장하고, 배열 aa의 요소들의 합을 출력


int main(int argc, char const *argv[])
{
    char aa[10][10];
    int i,k,sum=0;

    for(i=0;i<10;i++)
        for(k=0;k<10;k++)
            aa[i][k] = i*k;

    for(i=0;i<10;i++)
        for(k=0;k<10;k++)
            sum += aa[i][k];

    printf("%d\n", sum);
    return 0;
}
