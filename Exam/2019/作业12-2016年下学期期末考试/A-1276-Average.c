#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
int main(){
    int k;
    scanf("%d", &k);
    while (k--) {
        int x, y, judge = 0;
        double pj;
        scanf("%d %d", &x, &y);
        pj = x + y;
        pj = pj / 2;
        if (x > pj)
            printf("Bob %g\n", pj - y);
        else if (x < pj)
            printf("Alice %g\n", pj - x);
        else
            printf("None\n");
    }
    return 0;
}
