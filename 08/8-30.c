#include <stdio.h>
// 8�� 30������: 10����Ʈ ������ ���ڿ��� �Է¹޾� �������� ���

int main(){
    char str[11];
    char abekobe[11];
    int i, len;

    printf("10����Ʈ ������ ���ڿ��� �Է��ϼ���: ");
    scanf("%s", str);

    // �Է¹��� ���ڿ��� ���̸� üũ
    for(len=0;len<11+1;len++){
        if(len==11){
            printf("�迭���� NULL ���ڸ� ã�� ���߽��ϴ�.");
            printf("�Էµ� ���ڿ��� 10����Ʈ�� �ʰ��߰ų�, ��ȣȯ ���ڰ� ���ԵǾ��� ���ɼ��� �ֽ��ϴ�.");
            printf("���α׷��� �����մϴ�.\n");
            return -1;
        }
        if(str[len]=='\0') break;
    }
    
    
    // �ھ�
    for(i=0;i<len;i++) // NULL ���� ó���� ���� �迭 �� ������ �� ĭ�� �ǳʊ�
        abekobe[i] = str[len-1-i];
    abekobe[len] = '\0';
    
    printf("%s\n",abekobe);

    return 0;
}