#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 想要实现大数之积,必须得实现大数之和.这里依然只能用字符串来模拟
char *sum(char *a, char *b){
    int len1 = strlen(a);
    int len2 = strlen(b);
    int len = len1 > len2 ? len1+1 : len2+1;
    // 返回值
    char *ans = (char*)malloc(sizeof(char)*(len));
    int p = len1-1, q = len2-1,t = 0;
    int tag = 0;
    while(p >= 0 || q >= 0 || tag != 0){
        int num1 = p >= 0 ? a[p--]-'0' : 0;
        int num2 = q >= 0 ? a[q--]-'0' : 0;
        ans[t++] = (num1+num2+tag)%10 + '0';
        tag = (num1+num2+tag)/10;
    }
    ans[t] = '\0'; // 字符终止符
    // 倒置
    for(int i = 0; 2*i < t; i++){
        char temp = ans[i];
        ans[t-1-i] = ans[i];
        ans[i] = temp;
    }
    return ans;
}
// 大数的积,这里不打算用int型的数组进行计算,因为数组的长度没办法计算.
// 如果用字符串的话,可以直接求得字符串的长度,然后用模拟的方法进行求解
char *ret(char *a, char *b){
    int len1 = strlen(a);
    int len2 = strlen(b);
    // 答案的长度一定不会超过 len1+len2,有可能是 len1+len2-1
    char *ans = (char*)malloc(sizeof(char)*(len1+len2));
    // 乘法用加法模拟;
    for(int i = len1-1; i >= 0; i--){
        for(int j = 0; j <len2; j++){
            for(int k = 1; k <= a[i]-'0'; k++){
                ans = sum(ans,b);
            }
        }
    }



    while()
}
int main(){
    return 0;
}