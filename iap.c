#include <string.h>
#include "iap.h"


// 获取指定位置、指定长度的字符串，SubString(字符串, 起始位置, 截取长度)；
char *SubString(const char strname[256], int starpoint, int strlength)
{	
    // 定义计数器
    int sub_strname = 0;    // strname字符串的下标计数器
    int sub_str = 0;        // str字符串的下标计数器
	int counts = 0;         // 计数器
	
    // 定义截取字符串的 局部静态存储变量
	static char str[256];        
	memset(str, 0, sizeof(str));
	
    while (strname[sub_strname] != 0) 
	{
		// 当counts的范围在(starpoint, starpoint + strlength)时，获取对应strname的字符内容，并存储在str中
		if ((counts >= starpoint-1) && (counts < (starpoint-1) + strlength))
		{
			str[sub_str] = strname[sub_strname];
			sub_str ++;
		}

        // 当counts的范围大于(starpoint + strlength)时，跳出循环
        else if (counts > (starpoint-1) + strlength)    break;
		
        // 计数器值+1
		sub_strname ++;
		counts ++;
	}
	
	// 返回截取字符串
    return str;
}