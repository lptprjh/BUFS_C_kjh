#include <stdio.h>
#include <string.h>
// 8�� 44������:
//   20����Ʈ ���� ���ڿ� �Է¹ް� a�� #�� ġȯ�ؼ� ��� (gets, puts �̿�)

int main(int argc, char const *argv[])
{
    char str[21], strl,i;

    gets(str);
    strl = strlen(str);

    for(i=0;i<strl;i++)
        if(str[i]=='a') str[i]='#';

    puts(str);
    return 0;
}
