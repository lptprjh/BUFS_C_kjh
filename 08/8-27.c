#include <stdio.h>
// 8�� 27������: �̸�(���ڿ�)�� �迭�� �ʱ�ȭ�ϰ� �������� ���

int main(){
    char nm[12] = "Ryujongheon";
    char abekobe[12];
    int i;

    for(i=0;i<11;i++) // NULL ���� ó���� ���� �迭 �� ������ �� ĭ�� �ǳʊ�
        abekobe[i] = nm[11-1-i];
    abekobe[11] = '\0';
    
    printf("%s\n",abekobe);

    return 0;
}