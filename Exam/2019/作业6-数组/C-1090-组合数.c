#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>

int main() { //������Ƿ�
    int T,i,j;
    long int Tri[34][34];
    for (i = 0; i <= 33; i++) {
        Tri[i][0] = 1;
    }
    Tri[1][1] = 1;
    /*
    0 - 1
    1 - 1 1
    2 - 1
    3 - 1
    ...
    */
    for (i = 2; i <= 33; i++) { //�����������
        for (j = 1; j <= i - 1; j++) {
            Tri[i][j] = Tri[i-1][j-1] + Tri[i-1][j];
            //printf("[%d,%d]=%d", i, j, Tri[i][j]);
        }
        Tri[i][j] = 1;
    }

    while (scanf("%d", &T) != EOF && T >= 0) {
        printf("2^%d=", T);
        for (i = 0; i <= T - 1; i++) {
            printf("%d+", Tri[T][i]);
        }
        printf("1\n");
    }
    return 0;
}
