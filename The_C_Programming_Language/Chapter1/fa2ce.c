#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;  /* 温度下界 */
    upper = 300;  /* 温度上界 */
    step = 20;

    fahr = lower;
    
    while(fahr <= upper){
        celsius = (5.0/9) * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);  /* %3.0f至少3个字符宽，不带小数点 */
        fahr = fahr + step;
    }

    return 0;
}

/* 
%d
%6d
%f
%6f
%6.2f
%.2f
%o  八进制数
%x  十六进制
%c  字符
%s  字符串
%%  %本身
 */
