#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>

int main() {
    int T, a, x[1024], i, j, key;
    char b;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %c",&a,&b);
        getchar();
        for (i = 0; i < a; i++) {
            scanf("%d", &x[i]);
        }
        if (b == 'A') {
            //��������-����
            for (j = 1; j <= a-1; j++) {
                key = x[j];
                i = j - 1;
                while (i >= 0 && x[i] > key) {
                    x[i + 1] = x[i];
                    i--;
                }
                x[i + 1] = key;
            }
        }
        else {
            //��������-����
            for (j = 1; j <= a-1; j++) {
                key = x[j];
                i = j - 1;
                while (i >= 0 && x[i] < key) {
                    x[i + 1] = x[i];
                    i--;
                }
                x[i + 1] = key;
            }
        }
        
        printf("%d", x[0]);
        for (i = 1; i < a; i++) {
            printf(" %d", x[i]);
        }
        printf("\n");
    }
    return 0;
}
