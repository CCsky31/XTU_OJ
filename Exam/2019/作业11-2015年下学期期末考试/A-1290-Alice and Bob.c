#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

#include <stdio.h>
#include <string.h>
int main() {
    int T;
    char input[32];
    scanf("%d", &T);
    getchar();
    while (T--) {
        gets(input);
        //Alice Bob
        if (strcmp(input, "rock paper\0") == 0) {
            printf("Bob\n");
        }
        else if (strcmp(input, "rock scissors\0") == 0){
            printf("Alice\n");
        }
        else if (strcmp(input, "rock rock\0") == 0) {
            printf("Draw\n");
        }
        else if (strcmp(input, "paper rock\0") == 0) {
            printf("Alice\n");
        }
        else if (strcmp(input, "paper scissors\0") == 0) {
            printf("Bob\n");
        }
        else if (strcmp(input, "paper paper\0") == 0) {
            printf("Draw\n");
        }
        else if (strcmp(input, "scissors rock\0") == 0) {
            printf("Bob\n");
        }
        else if (strcmp(input, "scissors scissors\0") == 0) {
            printf("Draw\n");
        }
        else if (strcmp(input, "scissors paper\0") == 0) {
            printf("Alice\n");
        }
    }
    return 0;
}
