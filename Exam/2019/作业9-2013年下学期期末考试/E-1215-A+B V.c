#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>

int main() {
    int T, a, b, i, sum, bs, x, y;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        bs = 1;
        sum = a + b;
        while (a != 0 && b != 0) {
            bs *= 10;
            x = a % 10;
            y = b % 10;
            if (x + y >= 10) {
                sum -= bs;
            }
            a /= 10;
            b /= 10;
        }
        printf("%d\n", sum);
    }
}
