#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
#include <string.h>

int main() {
    int T,i1,i2,Now=0,i=0;
    char s1[16],s2[16];
    scanf("%d", &T);
    while (T--) {
        scanf("%s %s", s1, s2);
        i1 = strlen(s1);
        i2 = strlen(s2);
        i = i1 + i2;
        i1 = 0;
        Now = 0;
        while (i--) {
            if (Now == 0) {
                printf("%c", s1[i1]);
                i1++;
                Now = 1;
            }
            else {
                printf("%c", s2[i2-1]);
                i2--;
                Now = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
