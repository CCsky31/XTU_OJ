#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
int main() {
    char T;
    int n=1,t,i=65,Line,Space,NowLine,j;
    while (scanf("%s", &T) != EOF ) {
        if (T == 35) break;
        printf("case %d:\n", n);
        t = T;//t为输入字符的ASCII码
        Line = t - 64;//结果行数
        for (NowLine=1; NowLine <= Line; NowLine++) {
            //part1,获取空格数并打印
            for (Space = NowLine-1; Space > 0;Space--) {
                printf(" ");
            }
            //part2,打印字母
            for (j = 65; j <= t - NowLine + 1; j++) {
                printf("%c", j);
            }
            for (j-=2; j >= 65; j--) {
                printf("%c", j);
            }
            printf("\n");
        }
        n++;
    }
    return 0;
}