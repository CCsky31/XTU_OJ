#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>

int main() {
    int T,a,b,i,n,temp;
    char s[201];
    scanf("%d", &T);
    getchar();
    while (T--) {
        scanf("%s", s);
        scanf("%d %d", &a, &b);
        n = a-1;
        for (i = a + b - 2; i >= a - 1 + b/2; i--) {
            temp = s[i];
            s[i] = s[n];
            s[n] = temp;
            n++;
        }
        printf("%s\n", s);
    }
    return 0;
}
