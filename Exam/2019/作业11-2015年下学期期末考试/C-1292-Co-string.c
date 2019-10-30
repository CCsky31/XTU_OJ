#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include<stdio.h>
#include<string.h>

int main()
{
    int T,len,i, j, k;
    char str[1024];
    scanf("%d",&T);
    while(T--){
        scanf("%s", str);
        len = strlen(str);
        for(i = len / 2; i >= 0; i--){
            for(j = 0; j <= len - (i * 2); j++){
                for(k = j; k < i + j; k++){
                    if(str[k] != str[k + i])
                        break;
                }
                if(k == i + j){
                    printf("%d\n", i * 2);
                    break;
                }
            }
            if(j <= len - (i*2))
                break;
        }
    }
    return 0;
}
