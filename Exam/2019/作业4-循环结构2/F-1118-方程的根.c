#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
int main() {
    int T,a,b,c,delta;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &a, &b,&c);
        if (a != 0) { //一元二次方程
            delta = b * b - 4 * a * c;
            if (delta == 0) {
                printf("1\n");
            }
            else if (delta > 0) {
                printf("2\n");
            }
            else if (delta < 0) {
                printf("0\n");
            }
        }
        else {
            if (b != 0) {//一元一次方程
                printf("1\n");
            }
            else {
                if (c == 0) {
                    printf("INF\n");
                }
                else {
                    printf("0\n");
                }
            }
        }
        

    }
    return 0;
}
