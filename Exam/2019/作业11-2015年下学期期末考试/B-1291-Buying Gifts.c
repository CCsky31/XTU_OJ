#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>

int main() {
    int T, a, b, x[1024], i, j, key,cha1,cha2,position,sum;
    scanf("%d", &T);
    while (T--) {
        //������ʼ��
        cha1 = 0;
        cha2 = 9999999;
        sum = 0;
        position = 0;
        scanf("%d %d", &a, &b);
        getchar();//�����з�
        for (i = 0; i < a; i++) {
            scanf("%d", &x[i]);
        }
        //��������-����
        for (j = 1; j <= a - 1; j++) {
            key = x[j];
            i = j - 1;
            while (i >= 0 && x[i] > key) {
                x[i + 1] = x[i];
                i--;
            }
            x[i + 1] = key;
        }
        //��ʱ����x�д�������к�˳��ļ۸�
        for (i = 0; i + b <= a; i++) {
            cha1 = x[i + b-1] - x[i];
            if (cha1 < cha2) {
                cha2 = cha1;
                position = i;
            }
        }
        //��ʼ����sumֵ
        for (; b > 0; b--) {
            sum += x[position];
            position++;
        }
        printf("%d %d", cha2, sum);
        printf("\n");
    }
    return 0;
}
