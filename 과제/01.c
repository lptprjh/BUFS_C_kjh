#include <stdio.h>
// ����: �־��� �ð��� ���� �̿� �ð��� ���� ��� ����

int main(void)
{
    // �ð�, ��, ���� �ð�(ah,am), ���� �ð�(bh,bm), �հ� ���
    // �д� ���(100��)
    int h,m,ah,am,bh,bm,total;
    const int costPerMin = 100;
	
    // �� �ٿ� ���� ����/���� �ð��� �Է¹���
	printf("���� �ð��� ���� ���� �Է��Ͻÿ�:");
	scanf("%d %d",&ah,&am);
	printf("���� �ð��� ���� ���� �Է��Ͻÿ�:");
	scanf("%d %d",&bh,&bm);
	
    // ������ �ѱ� ���
    if(ah>bh || (ah==bh&&am>bm)) bh+=24;
	
    // �ð� ��� 
    h = bh-ah;
    m = bm-am;

    // ��� ���
    total = (h*60 + m) * costPerMin;
	
	printf("�����ؾ��� ����� %d �Դϴ�",total);
	
	return 0;
	
}
