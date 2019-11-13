#include <stdio.h>

int main(int argc, char const *argv[])
{
    int score;
    prinf("점수를 입력: ");
    scanf("%d", &score);
    if(score>=90){printf("A\n");} else
    if(score>=80){printf("B\n");} else
    if(score>=70){printf("C\n");} else
    if(score>=60){printf("D\n");} else {printf("A\n");}
    return 0;
}
