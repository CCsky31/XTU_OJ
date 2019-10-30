#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include<bits/stdc++.h>
int main(){
    char str[32];
    int i,length,sum;
    while(scanf("%s",str) != EOF){
        length = strlen(str);
        sum=0;
        for(i = 0; i < length; i++){
            if(str[i] == 'I'){
                if(str[i+1] == 'V'){
                    sum -= 1;
                    continue;
                }else if(str[i+1] =='X'){
                    sum -= 1;
                    continue;
                }
                sum += 1;
            }else if(str[i] == 'X'){
                if(str[i+1] == 'L'){
                    sum -= 10;
                    continue;
                }else if(str[i+1] == 'C'){
                    sum -= 10;
                    continue;
                }
                sum += 10;
            }else if(str[i] == 'C'){
                if(str[i+1] == 'D'){
                    sum -= 100;
                    continue;
                }else if(str[i+1] == 'M'){
                    sum -= 100;
                    continue;
                }
                sum += 100;
            }else if(str[i] == 'V'){
                sum += 5;
            }else if(str[i] == 'L'){
                sum += 50;
            }else if(str[i] == 'D'){
                sum += 500;
            }else if(str[i] == 'M'){
                sum += 1000;
            }
        }
        printf("%d\n",sum);
    }
}
