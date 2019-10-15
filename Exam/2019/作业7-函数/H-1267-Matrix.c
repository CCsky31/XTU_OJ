#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int** pInt = NULL;
int N = 0;
int M = 0;

void IN(int n, int m) { //创建矩阵,创新性地采用了动态内存申请QwQ
    int i, j;
    if (pInt != NULL) {
        for (int i = 0; i < N; i++) {
            free(pInt[i]);
        }
        free(pInt);
    }
    pInt = (int**)calloc(n, sizeof(int*));
    for (i = 0; i < n; i++)
        pInt[i] = (int*)calloc(m, sizeof(int));
    N = n;
    M = m;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            pInt[i][j] = i * m + j + 1;
        }
    }
}

void PR() { //输出矩阵
    int i, j;
    for (i = 0; i < N; i++) {
        printf("%d", pInt[i][0]);
        for (j = 1; j < M; j++) {
            printf(" %d", pInt[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void SR(int x, int y) {//交换矩阵的x, y行
    int* tmp = pInt[x];
    pInt[x] = pInt[y];
    pInt[y] = tmp;
}

void SC(int x, int y) {//交换矩阵的x, y列
    int i, tmp;
    for (i = 0; i < N; i++) {
        tmp = pInt[i][x];
        pInt[i][x] = pInt[i][y];
        pInt[i][y] = tmp;
    }
}

void TR() {//矩阵转置
    int** pInt2;
    int i, j, tmp;
    pInt2 = (int**)calloc(M, sizeof(int*));
    for (i = 0; i < M; i++)
        pInt2[i] = (int*)calloc(N, sizeof(int));
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            pInt2[i][j] = pInt[j][i];
        }
    }
    for (int i = 0; i < N; i++) {
        free(pInt[i]);
    }
    free(pInt);
    pInt = pInt2;
    tmp = N;
    N = M;
    M = tmp;
}

void FR() {//上下镜像反转
    int i;
    for (i = 0; i <= (int)ceil(N / 2.0) - 1; i++) {
        SR(i, N - i - 1);
    }
}

void FC() {//左右镜像反转
    int i;
    for (i = 0; i <= (int)ceil(M / 2.0) - 1; i++) {
        SC(i, M - i - 1);
    }
}

int main() {
    char str[10];
    int n, m;
    while (scanf("%s", str) != EOF) {
        if (str[0] == 'I' && str[1] == 'N') {
            scanf("%d %d", &n, &m);
            IN(n, m);
        }
        else if (str[0] == 'P' && str[1] == 'R') {
            PR();
        }
        else if (str[0] == 'S' && str[1] == 'R') {
            scanf("%d %d", &n, &m);
            SR(n - 1, m - 1);
        }
        else if (str[0] == 'S' && str[1] == 'C') {
            scanf("%d %d", &n, &m);
            SC(n - 1, m - 1);
        }
        else if (str[0] == 'T' && str[1] == 'R') {
            TR();
        }
        else if (str[0] == 'F' && str[1] == 'R') {
            FR();
        }
        else if (str[0] == 'F' && str[1] == 'C') {
            FC();
        }
        else {
            break;
        }
    }
}
				
Problem:1276  Solution:2012896  Language:G++  Result: Others 
						
int main(){
    int k;
    scanf("%d", &k);
    while (k--) {
        int x, y, judge = 0;
        double pj;
        scanf("%d %d", &x, &y);
        pj = x + y;
        pj = pj / 2;
        if (x > pj)
            printf("Bob %g\n", pj - y);
        else if (x < pj)
            printf("Alice %g\n", pj - x);
        else
            printf("None\n");
    }
    return 0;
}
