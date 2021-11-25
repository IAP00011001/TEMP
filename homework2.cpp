// 【**********函数重载**********】
// 函数的重载：函数名相同，但参数列表中的参数的类型、参数的个数、参数的顺序任一不同







#include <stdio.h>
#include <string.h>
 
// 重载strcpy函数，对dest初始化，防止内存溢出。
char *strcpy1(char *dest, const char *src, size_t destsize);

int main()
{
    char tt[10];
    // www.freecplus.net
    strcpy(tt, "samuel.miller"); printf("=%s=\n", tt);

    strcpy1(tt, "samuel.miller", sizeof(tt)); printf("=%s=\n", tt);
}

char *strcpy1(char *dest, const char *src, size_t destsize)
{
    // 定义计数器，初始化dest
    memset(dest, 0, sizeof(dest));
    int len_src = 0;    // stc长度计数器

    while (src[len_src] != 0) len_src ++;
    // printf("%d", len_src);

    // 将src在dest长度内的值赋值给src  
    if (len_src < destsize)
    {
        for (int counts=0; counts<len_src; counts++)
        {
            dest[counts] = src[counts];
        }
    }
    else if (len_src > destsize)
    {
        for (int counts=0; counts < destsize - 1; counts++)
        {
            dest[counts] = src[counts];
            // printf("dest[%d]=%c, src[%d]=%c\n", counts, src[counts], counts, dest[counts]);
        }

        dest[destsize] = 0;
    }
    
    return dest;
}