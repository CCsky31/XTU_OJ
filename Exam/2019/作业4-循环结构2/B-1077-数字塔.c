#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
int main() {
    int T = 0, n = 1, Space, Number, Line;
    while (scanf("%d", &T) != EOF && T) {
        printf("case %d:\n", n);
        for (Line = 1; Line <= T; Line++) {
            for (Space = T - 1 - Line; Space >= 0; Space--) {
                printf(" ");
            }
            for (Number = 2 * Line - 1; Number > 0; Number--) {
                printf("%d", Line);
            }
            printf("\n");
        }
        n++;
    }
    return 0;
}