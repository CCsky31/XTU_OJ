#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>

unsigned long long c[66][66];
int main()
{
    int n;
    for (int i = 0; i <= 64; i++) {
        c[i][0] = c[i][i] = 1;
    }
    for (int i = 2; i <= 64; i++)
        for (int j = 1; j < i; j++)
            c[i][j] = c[i - 1][j] + c[i - 1][j - 1];

    while (~scanf("%d", &n)) {
        unsigned long long ans = 0;
        for (int i = n >> 1; i <= n - 1; i++)
            ans += c[n - 1][i];
        printf("%I64d\n", ans);
    }
    return 0;
}
