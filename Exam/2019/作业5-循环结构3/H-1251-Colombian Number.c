#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>

int d(int n) {
    int i;
    for (i = n; n >= 10; n /= 10) {
        i = i + n % 10;
    }
    i = i + n;
    return i;
}

int main() {
    int T,a,i,n=0,judge;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &a);
        judge = 0;
        if (a < 100) {
            for (i = 0; i <= a; i++) {
                if (d(i) == a) {
                    judge = 1;
                    break;
                }
            }
        }
        else {
            for (i = 0; i <= 82; i++) {
                if (d(a-i) == a) {
                    judge = 1;
                    break;
                }
            }
        }
        if (judge == 1) 
            printf("No\n");
        else 
            printf("Yes\n");
    }
    return 0;
}
