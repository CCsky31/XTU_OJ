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
        temp = 0;
        for (i = a + b - 2; i >= a - 1 + b/2; i--) {
            if (s[i] != s[n]) {
                temp = 1;
                break;
            }
            n++;
        }
        printf("%s\n", temp != 1 ? "Yes" : "No");
    }
    return 0;
}
