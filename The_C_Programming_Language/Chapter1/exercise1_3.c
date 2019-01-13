
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("华氏度转摄氏度：\n");
    
    while (fahr <= upper)
    {
        celsius = (5.0 / 9) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}