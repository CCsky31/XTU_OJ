#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
int gcd(int _a, int _b){ //ȡ��С������
    int c;
    while (_b) {
        _a = _a % _b;
        c = _a;
        _a = _b;
        _b = c;
    }
    return _a;
}

int main() {
    int T,a,b,c, d;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        if (b == 0 || b == 1) printf("1\n");
        else if (a == b) printf("0\n");
        else {
            c = a * a - a;
            d = b * b - b;
            d = c - d;
            printf("%d/%d\n", d / gcd(c, d), c / gcd(c, d));
        }
    }
    return 0;
}
