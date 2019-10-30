#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

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
