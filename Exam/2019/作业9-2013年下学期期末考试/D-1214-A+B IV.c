#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include<stdio.h>
int main() {
    int T,a,b,c,sum=0,i,judge,a2,b2;
    scanf("%d", &T);
    while (T--) {
        scanf("%d+%d=%d", &a, &b, &c);
        //���Ʋ���
        if (a + b == c) {
            printf("0\n");
            continue;
        }
        sum = 0;
        a2 = a;
        b2 = b;
        i = 0;
        judge = 0;
        while (sum < c) {
            a2 = a2 * 10;
            sum = a2 + b;
            //printf("Test:%d %d\n", i, sum);
            i++;
            if (sum == c) {
                printf("%d\n", i);
                break;
            }
        }
        if (judge == 1) {
            printf("%d\n", i);
        }
        else {
            //���Ʋ���
            sum = 0;
            i = 0;
            while (sum < c) {
                b2 = b2 * 10;
                sum = a + b2;
                i--;
                //printf("Test:%d %d\n", i, sum);
                if (sum == c) {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }
    return 0;
}
