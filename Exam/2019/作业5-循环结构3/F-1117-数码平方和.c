#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>

int main() {
    int T,a,b,c,i,x=0,n=0;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &a, &b, &c);
        n = 0;
        for (i = a; i <= b; i++) {
            x = 0;
            for (a = i; a >= 10; a /= 10)
                x = x + (a % 10) * (a % 10);
            x = x + a * a;
            if (c == x % 10) {
                n++;
            }
        }
        printf("%d\n", n);
    }
    return 0;
}
