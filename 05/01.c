#include <stdio.h>

int main(int argc, char const *argv[])
{
    int score;
    prinf("점수를 입력: ");
    scanf("%d", &score);
    if(score>=60){
        printf("점수: %d\n", score);
    }
    return 0;
}
