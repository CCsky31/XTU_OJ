#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
int main(){
    int k;
    while (scanf("%d", &k) && k != 0) {
        int i, n, a[102], b, c, d, flag, judge, sum;
        n = k;
        while (k--) {
            scanf("%d", &a[k]);
        }while (n >= 1) {
            for (i = 0; i < n - 1; i++) {
                a[i] = (a[i] + a[i + 1]) % 2013;
            }
            n--;
        }
        printf("%d\n", a[0]);
    }
}
