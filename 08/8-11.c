#include <stdio.h>
// 8�� 11������: ó�� �Է¹��� ���ڰ��� ������ �Է¹ް�, �� �� �ִ�ġ�� ���

int main(){
    int a[20], n, i, choegobong; //�ְ��
    
    int sizeofa = sizeof(a)/sizeof(int); // �ڵ����� ó��

    // �Է¹��� ������ ������ �޾ƿ´�
    printf("�Է¹��� ������ ������ �Է��ϼ���(1~%d): ", sizeofa);
    scanf("%d", &n);

    // �Է°��� ������ ������ ����� �ʴ� �� ����
    if(n<1 || n>sizeofa){
        printf("����: �Է°��� 1~%d ���̿��� �մϴ�.\n\n", sizeofa);
        return -1;
    }    

    // ������ Ƚ����ŭ ������ ���ʷ� �Է¹޴´�
    for (i = 0; i < n;i++){
        printf("%2d��° ������ �Է��ϼ���: ", i);
        scanf("%d", &a[i]);
    }
    
    // �ְ���� ã�´�
    for (i = 0; i < n;i++)
        if(i==0 || a[i]>choegobong) //i==0: ���� �ʱ�ȭ�� ����
            choegobong=a[i];
    
    // �ְ���� ���
    printf("%d\n\n", choegobong);

    return 0;
}