#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include<stdio.h>

int main() {
    int x, k, i, c;
    while (scanf("%d", &x) != EOF) {
        for (i = 2; i * i <= x; i++) {
            for (c = 0; x % i == 0; c++) {
                x /= i;
            }
            if (c == 0) continue;
            if (c == 1) printf("%d", i);
            else if (c >= 1) {
                printf("%d^%d", i, c);
            }
            if (x != 1) putchar('*');
            else break;
        }
        if (x != 1) printf("%d", x);
        putchar('\n');
    }
}
