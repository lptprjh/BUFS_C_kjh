#include <stdio.h>
// 8�� 10������: ó�� �Է¹��� ���ڰ��� �������� �Է¹ް�, ¦���� ���� ���Ͽ� ���
// main(){int a[20],n,s=0,i;scanf("%d",&n);for(i=0;i++<n;)scanf("%d",&a[i]);for(i=0;i++<n;)s+=a[i]%2==0?a[i]:0;printf("%d",s);}

int main(){
    int a[20], n, s = 0, i;
    
    int sizeofa = sizeof(a)/sizeof(int); // �ڵ����� ó��

    // �Է¹��� ������ ������ �ҷ��´�
    printf("�Է¹��� ������ ������ �Է��ϼ���(1~%d): ", sizeofa);
    scanf("%d", &n);

    // �Է°��� ������ ������ ����� �ʴ� �� ����
    if(n<1 || n>sizeofa){
        printf("����: �Է°��� 1~%d ���̿��� �մϴ�.\n\n", sizeofa);
        return -1;
    }

    // ������ Ƚ����ŭ ������ �Է¹޴´�
    for (i = 0; i < n;i++){
        printf("%2d��° ������ �Է��ϼ���: ", i);
        scanf("%d", &a[i]);
    }

    // �Է¹��� ���� �� ¦���� �߷��� ���Ѵ�
    for (i = 0; i < n;i++)
        if(a[i] % 2 == 0)
            s += a[i];
    printf("¦���� ��: %d\n\n", s);

    return 0;
}