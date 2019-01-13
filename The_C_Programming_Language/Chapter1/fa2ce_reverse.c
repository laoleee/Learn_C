#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    
    printf("华氏度转摄氏度(倒序)：\n");
    
    for(fahr = upper; fahr >= 0; fahr = fahr - 20){
        celsius = (5.0 / 9) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
    }

    return 0;
}