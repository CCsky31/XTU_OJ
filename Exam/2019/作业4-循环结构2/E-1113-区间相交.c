#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������


#include <stdio.h>
int main() {
    int T,x1=0,x2=0,y1=0,y2=0,x,y;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &x1, &y1);
        scanf("%d %d", &x2, &y2);
        if (x1 < y1) {
            x1 = x1 + y1;
            y1 = x1 - y1;
            x1 = x1 - y1;
        }
        if (x2 < y2) {
            x2 = x2 + y2;
            y2 = x2 - y2;
            x2 = x2 - y2;
        }
        x = x2 - y1;
        y = y2 - x1;
        if (x * y <= 0) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}
