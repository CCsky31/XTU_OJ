#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
int main() {
    int T,a,b,c,d,e;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        printf("%d\n", a + b + c + d + e);
    }
}