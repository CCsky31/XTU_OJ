#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
#include <string.h>
int pow(int num,int times){
    int i,result=1;
    for(i=times;i>0;i--){
        result = result * num;
    }
    return result;
}

int F2d(int pos){
    return -1 * pow(3,pos);
}

int t2d(char* nums){
    int i;
    int pos=0;
    int result=0;
    for(i=strlen(nums)-1;i>=0;i--){
        //printf("i=%d pos=%d nums[i]=%c\n",i,pos,nums[i]);
        if(nums[i] == '-'){
            //printf("result=%d F2d(pos)=%d\n",result,F2d(pos));
            result = result + F2d(pos);
        }
        if(nums[i] == '1'){
            //printf("result=%d pow(3,pos)=%d\n",result,pow(3,pos));
            result = result + pow(3,pos);
        }
        pos++;
    }
    return result;
}
