#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <bits/stdc++.h>
int main() {
    char str[256], exist[32];
    int i, word_num = 1, index;
    while (scanf("%[^\n]s", str) > 0 && getchar()) {
        word_num = 1;
        index = 0;
        for (i = 0; i < 32; i++) {
            exist[i] = 0;
        }
        for (i = 0; i < strlen(str); i++) {
            if (str[i] == ' ') {
                word_num++;
            }
            else if ('a' <= str[i] && str[i] <= 'z' && strchr(exist, str[i]) == NULL) {
                exist[index] = str[i];
                index++;
            }
            else if ('A' <= str[i] && str[i] <= 'Z' && strchr(exist, str[i] - 'A' + 'a') == NULL) {
                exist[index] = str[i] - 'A' + 'a';
                index++;
            }
        }
        if (word_num > 10 || strlen(exist) > 10) {
            printf("No\n");
        }
        else {
            printf("Yes\n");
        }
    }
}
