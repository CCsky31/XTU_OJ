#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>

int main() {
    int T,a,b;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        a ^= b;
        b = 0;
        while (a){
            if (a & 1) b++;
            a >>= 1;
        }
        printf("%d\n", b);
    }
    return 0;
}
