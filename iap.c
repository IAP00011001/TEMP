#include <stdio.h>
#include <string.h>


char SubString(const char strname[256], int starpoint, int strlength);

int main()
{
    char aa[256];
	memset(aa, 0, sizeof(aa));
	
	int bb=0;
	int cc=0;
	
	printf("请输入：");
	scanf("%s %d %d", aa, &bb, &cc);
	
	SubString(aa, bb, cc);
	
	// printf("aa=%s, bb=%d, cc=%d\n", aa, bb, cc);
	
	// printf("=%s=", SubString(aa, bb, cc));


}

/*
// 获取指定位置、指定长度的字符串，SubString(字符串, 起始位置, 截取长度)；
char SubString(const char strname[256], int starpoint, int strlength)
{	
    // 获取输入字符串A的长度，起始位置的下标a
    int len_strname = 0;

    while (strname[len_strname] != 0) len_strname ++;

    // 将A从下标a开始逐个字符拷贝给字符串B，直至A的末尾
    char strb[256];
    memset(strb, 0, sizeof(strb));
	
	int counts_a = starpoint - 1;
	int aa = 0;
	
	for (aa=0; counts_a<(len_strname); counts_a++, aa++) strb[aa]=strname[counts_a];
	
    // 获取截取长度b
	char strc[256];
	memset(strc, 0, sizeof(strc));
	
	int counts_b = strlength;
	int bb = 0;
	
	for (; bb<counts_b; bb++) strc[bb]=strb[bb];
	
	// return *strc;
	
	printf("%s", strc);
    // 将B从起始开始逐个字符拷贝给字符串C，直至B的下标b
}
*/

// 获取指定位置、指定长度的字符串，SubString(字符串, 起始位置, 截取长度)；
char SubString(const char strname[256], int starpoint, int strlength)
{	
    // 定义变量
    int len_strname = 0;    // 计算strname的字符长度
	int sub_a = 0;          // starpoint的计数器
	int count_a = 0;        // 计数器a
	int sub_b = 0;          // strlength的计数器
	int count_b = 0;        // 计数器b
	
	char str_a[256];
	char str_b[256];
	memset(str_a, 0, sizeof(str_a));	
	memset(str_b, 0, sizeof(str_b));
	
	
    while (strname[len_strname] != 0) 
	{
		// 获取从starpoint开始的strname的字符串内容
		if ((sub_a >= starpoint-1))
		{
			str_a[count_a] = strname[len_strname];
		    
			// 获取从starpoint开始的、长度为strlength的strname的字符串内容
			if (sub_b < strlength)
			{
				str_b[count_b] = strname[len_strname];
				count_b ++;
			}
			
			count_a ++;
			sub_b ++;
		}
		
		len_strname ++;
		sub_a ++;
	}
	
	printf("%s", str_b);
}