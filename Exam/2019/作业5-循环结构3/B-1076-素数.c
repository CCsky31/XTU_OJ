#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
int main() {
    int i,k,judge;
    unsigned long int m;
    while (scanf("%d", &m) != EOF)
    {
        if (m == 0) return 0;
        if (m == 1) {
            printf("No\n");
            continue;
        }
        judge = 0;
        for (i = 2; i * i <= m; i++) {
            if (m % i == 0) {
                judge = 1;
                break;
            }
        }
        if (judge == 1) printf("No\n");
        else printf("Yes\n");
    }
}
