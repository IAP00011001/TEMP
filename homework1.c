// 定义
/*
int aa, bb;
double cc, dd;
char ee, ff;
char gg[11];

//初始化
int aa=bb=0;
double cc=dd=0;
char ee=ff=0;
memset(gg,0,sizeof(gg));

//变量赋值
int aa=i;
double cc=j;
char ee=k;
strcpy(gg,l);
*/




// %d 整形
// %f/%lf 浮点数/双精度
// %c/%s 字符/字符串
// %p 地址

// *p == i  p == &i *p存放的是一个值，p存放的是该值的内存地址

// 【**********整型**********】
// signed int aa 正数/负数 整型aa
// unsigned int aa 整型aa
// short int aa 4字节 短整型aa
// long int aa 长整型aa


// 二进制0~1：0 1
//      写法：±0b/0B + 0~1组合代码
// 八进制0~7：0 1 2 3 4 5 6 7
//      写法：±0 + 0~7组合代码
// 十六进制0~9、a~f/A~F：0 1 2 3 4 5 6 7 8 9 a b c d e f
//      写法：±0x/0X + 0~9、a~f组合代码


// 十进制：
// 有符号输出：%hd %d %ld  short int long
// 无符号输出：%hu %u %lu  short int long


// 1字节=8位，表示的取值范围=2^8-1
// 4字节=取值范围=2^8x2^8x2^8x2^8-1
// 8字节=取值范围=2^8x2^8x2^8x2^8x2^8x2^8x2^8x2^8-1
// singed(有符号)的范围减半，从负到正
// unsigned(无符号)的，从0到正


// 字符串转为数字的函数（仅限整数）：int atoi(const char *nptr);
//                                   long atol(const char *nptr);
// 求整数的绝对值： int abs(const int j);
//                  long labs(const long int j);
									 

/*
#include <stdio.h>

int main()
{
	int num=1;
	
	while (num <= 10)
	{ 
	    if (num!=5 & num!=6 )
	    { 
		    printf("***      ***\n");
		} 
	    else
	    { 
		    printf("************\n");
        } 
	    num += 1;
	} 
		
	return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>

int main()
{
	char name[10];
	memset(name,0,sizeof(name));
	
	char sex[3];
	memset(sex,0,sizeof(sex));
	int year=0;
	int height=0;
	double weight=0;
	
	printf("请输入姓名、性别、年龄、身高、体重。\n");
	scanf("%s %s %d %d %lf", name, &sex, &year, &height, &weight);
	printf("姓名：%s\n 性别：%s\n 年龄：%d\n 身高：%d\n 体重：%lf\n", name, sex, year, height, weight);
	
	return 0;
}
*/



/*
#include <stdio.h>

int main()
{
	int age=0;
	int money=2000;
	int yz=0;
	
	printf("请输入你的年龄\n");
	scanf("%d", &age);
	
	if (age >= 16)
	{
		printf("你已经%d岁了，有资格参加！", age);
	}
	else if (age < 16)
	{
		printf("由于你才%d岁，不满16周岁，没有资格参加！\n\n", age);
		
		printf("你认为自己的颜值怎么样？（漂亮输入：1;一般输入：0）\n");
		scanf("%d", &yz);
		
		if (yz == 1)
			printf("你觉得自己颜值漂亮，所以你的路费为：%d", money+500);
		else 
		    printf("你觉得自己颜值一般，所以你的路费为：%d", money);
	}
}

*/

/*

#include <stdio.h>

int main()
{
	int day_num=0;
	
	printf("请输入1-7之间的任意整数\n");
	scanf("%d", &day_num);
	
	switch (day_num)
	{
		case 1: printf("%d数字代表：星期一\n", day_num); break;
		case 2: printf("%d数字代表：星期二\n", day_num); break;
		case 3: printf("%d数字代表：星期三\n", day_num); break;
		case 4: printf("%d数字代表：星期四\n", day_num); break;
		case 5: printf("%d数字代表：星期五\n", day_num); break;
		case 6: printf("%d数字代表：星期六\n", day_num); break;
		case 7: printf("%d数字代表：星期日\n", day_num); break;
		default: printf("输入错误！\n"); break;
	}
	
	// if (day_num == 1)
		// printf("%d数字代表：星期一\n", day_num);
	// else if (day_num == 2)
		// printf("%d数字代表：星期二\n", day_num);
	// else if (day_num == 3)
		// printf("%d数字代表：星期三\n", day_num);
	// else if (day_num == 4)
		// printf("%d数字代表：星期四\n", day_num);
	// else if (day_num == 5)
		// printf("%d数字代表：星期五\n", day_num);
	// else if (day_num == 6)
		// printf("%d数字代表：星期六\n", day_num);
	// else if (day_num == 7)
		// printf("%d数字代表：星期日\n", day_num);
	// else 
		// printf("输入错误！\n");
}
*/


/*
#include <stdio.h>

int main()
{
	int month_num=0;
	
	printf("请输入1-12之间任意整数\n");
	scanf("%d", &month_num);
	
	switch(month_num)
	{
		case 1: printf("数字%d代表一月，英文为：January ，简写成：Jan\n", month_num); break;
		case 2: printf("数字%d代表二月，英文为：February，简写成：Feb\n", month_num); break;
		case 3: printf("数字%d代表三月，英文为：March，简写成：Mar\n", month_num); break;
		case 4: printf("数字%d代表四月，英文为：April，简写成：Apr\n", month_num); break;
		case 5: printf("数字%d代表五月，英文为：May，简写成：May\n", month_num); break;
		case 6: printf("数字%d代表六月，英文为：June，简写成：Jun\n", month_num); break;
		case 7: printf("数字%d代表七月，英文为：July，简写成：Jul\n", month_num); break;
		case 8: printf("数字%d代表八月，英文为：August，简写成：Aug\n", month_num); break;
		case 9: printf("数字%d代表九月，英文为：September，简写成：Sept\n", month_num); break;
		case 10: printf("数字%d代表十月，英文为：October，简写成：Oct\n", month_num); break;
		case 11: printf("数字%d代表十一月，英文为：November，简写成：Nov\n", month_num); break;
		case 12: printf("数字%d代表十二月，英文为：December，简写成：Dec\n", month_num); break;
		default: printf("数字%d不代表任何月份！", month_num);break;
	}
}

*/



/*

#include <stdio.h>

int main()
{
	int a, b;
	
	printf("请输入两个整数数字：\n");
	scanf("%d %d", &a, &b);
	
	if (a == b)
	{
		printf("a(%d)等于b(%d)", a, b);
	}
	else
	{
		if (a > b) printf("a(%d)大于b(%d)", a, b);
		else printf("a(%d)小于b(%d)", a, b);
	}
}
*/



/*
#include <stdio.h>

int main()
{
	int age=0;
	int height=0;
	int size=0;
	int yz=0;
	
	printf("这位选手，请描述以下自己的年龄、身高、身材、颜值！\n");
	printf("身材：1-火辣；2-普通；3-飞机场\n颜值：1-漂亮；2-一般；3-歪瓜裂枣\n");
	scanf("%d %d %d %d", &age, &height, &size, &yz);
	
	if (((age >= 18) && (age <= 25)) &&
	    ((height >= 165) && (height <= 178)) &&
        (size == 1) &&
	    (yz == 1))
	{
	    printf("你就是我们的“妃子”了\n");
	}
	else if (((age >= 18) && (age <= 30)) &&
	         ((height >= 160) && (height <= 165)) &&
			 ((size == 1) || (size == 2)) &&
			 (yz == 2))
	{
		printf("你就我们的“宫女”了\n");
	}
	else if (((age >=35) && (age <= 40)) &&
	         ((height >= 155) && (height <= 165)) &&
			 ((size == 2) || (size == 3)) &&
			 (yz == 2))
	{
		printf("你就是我们的“嬷嬷”了\n");
	}
	else
	{
		printf("哦NO~ 你不是我们要找的人，麻溜的走吧！");
	}
}
*/


/*
#include <stdio.h>

int main()
{
	int times=0;
	int numbers=0;
	int sum=0;
	
	while (sum < 5000)
	{
		printf("请输入数字：");
	    scanf("%d", &numbers);
		
		// times += 1;
		times ++;
		sum += numbers;
	}
	
	printf("你一共输入了%d次数据，总和为：%d", times, sum);
				
}
*/


/*
#include <stdio.h>

int main()
{
	int i=0;
	int a=0;
	int sum=0;
	
	printf("请输入任意一个整数：\n");
	scanf("%d", &a);
		
	for (i=a; i<=100; i++)
	{
		sum += i;
	}
	
	printf("%d到100的累加值为：%d", a, sum);
}
*/


//作业 1)：累加1-100的值
/*
#include <stdio.h>

int main()
{
	int num=0;
	int sum=0;
	
	while (num<100)
	{
		num++;
		sum += num;
	}
	
	printf("num=%d,累加总值为：%d", num, sum);
}
*/

//作业 2)：累加输入数字和
/*
#include <stdio.h>

int main()
{
	int num=0;
	int sum=0;
	int counts=0;
	
	for (sum=0; sum<5000; sum += num)
	{
		printf("请输入数字：");
	    scanf("%d", &num);
	
		counts++;
	}
	
	printf("你输入了%d次，累加值为：%d", counts, sum);
}
*/


//作业 3):99乘法表
/*
#include <stdio.h>

int main()
{
	int i=0;
	int j=0;
	
	for (i=1; i<10; i++)
	{
		for (j=1; j<=i; j++)
		{
			printf("%dX%d=%d\t", j, i, i*j);
		}
		
		printf("\n");
	}
}
*/


// 作业4)
/*
#include <stdio.h>

int main()
{
	int counts1=0;
	int counts2=0;
	int num;
	int sum=0;
	
	while (num != 0)
	{
		printf("请输入数字：");
		scanf("%d", &num);
		
		if ((num > 0) && (num <= 100))
		{
			sum += num;
			counts2++;
		}
		
		counts1++;
	}
	
	printf("你一共输入了%d次，有效输入了%d次，有效数据总和为：%d", counts1, counts2, sum);
}
*/


// 作业 5)
/*
#include <stdio.h>

int main()
{
	int num=1;
	int i;
	
	for (i=0; i<=100; i++)
	{
		if (i%2 == 0)
		{
			printf("第%d个偶数是：%d\n", num, i);
			num += 1;
		}
	}
}
*/


// 作业 6)
/*
#include <stdio.h>

int main()
{
	int num=1;
	int i;
	
	for (i=1; i<=100; i++)
	{
		if (i%5 == 0)
		{
			printf("第%d个数是：%d\n", num, i);
			num += 1;
		}
	}
}
*/


// 作业 7)
/*
#include <stdio.h>

int main()
{
	int age=0;
	int height=0;
	int size=0;
	int yz=0;
	
	int num_fz=0;
	int num_gn=0;
	int num_mm=0;
	int num_qt=0;
	int num;
	
	for (num=0; num<5; num++)
	{
		printf("这位选手，请描述以下自己的年龄、身高、身材、颜值！\n");
	    printf("身材：1-火辣；2-普通；3-飞机场\n颜值：1-漂亮；2-一般；3-歪瓜裂枣\n");
	    scanf("%d %d %d %d", &age, &height, &size, &yz);
	
	    if (((age >= 18) && (age <= 25)) &&
	        ((height >= 165) && (height <= 178)) &&
            (size == 1) &&
	        (yz == 1))
	    {
			num_fz++;
	    }
	    else if (((age >= 18) && (age <= 30)) &&
	             ((height >= 160) && (height <= 165)) &&
		    	 ((size == 1) || (size == 2)) &&
		    	 (yz == 2))
	    {
			num_gn++;
	    }
	    else if (((age >=35) && (age <= 40)) &&
	             ((height >= 155) && (height <= 165)) &&
		    	 ((size == 2) || (size == 3)) &&
			     (yz == 2))
	    {
			num_mm++;
	    }
		else num_qt++;
	}
	
	printf("妃子有%d人，宫女有%d人，嬷嬷有%d人，闲杂人等有%d人", num_fz, num_gn, num_mm, num_qt);
	
}

*/





// 【数组】作业 4）
/*
#include <stdio.h>
#include <string.h>

int main()
{
	double cj[10];
	memset(cj,0,sizeof(0));
	double sum=0;
	int rs=10;
	int counts=0;
	
	for (counts=0; counts<rs; counts++)
	{
		printf("请输入第%d位学生的成绩：", counts+1);
		scanf("%lf", &cj[counts]);
		sum += cj[counts];
	}
	
	printf("这个班的总成绩是：%lf，平均成绩是：%lf", sum, sum/rs);
}
*/

// 【数组】作业 5)
/*
#include <stdio.h>
#include <string.h>

int main()
{
	int bj=0;
	int rs=0;
	double cj[bj][rs];
	memset(cj,0,sizeof(cj));
	int c_bj=0;
	int c_rs=0;
	double sum=0;
	double sum_all=0;
	
	printf("输入该年级的班级数、每个班级的人数；");
	scanf("%d %d", &bj, &rs);
	
	for (c_bj=0; c_bj<bj; c_bj++)
	{
		for (c_rs=0; c_rs<rs; c_rs++)
		{
			printf("请输入%d班第%d人的成绩 ：", c_bj+1, c_rs+1);
			scanf("%lf", &cj[c_bj][c_rs]);
			sum += cj[c_bj][c_rs];
			sum_all += cj[c_bj][c_rs];
			
			// printf("cj[c_bj][c_rs]=cj[%d][%d]=%lf      sum=%lf\n", c_bj, c_rs, cj[c_bj][c_rs], sum);
		}
		
		printf("%d班的总成绩是：%lf，平均成绩是：%lf\n\n", c_bj+1, sum, sum/rs);
		sum = 0;
	}
	
	printf("该年级的总成绩是：%lf，平均成绩是：%lf", sum_all, sum_all/(bj*rs));
}
*/



// 作业 7)*****************没调通******************
/*
#include <stdio.h>
#include <string.h>

int main()
{
    double school[2][3][4];
    memset(school,0,sizeof(school));
    double ver_bj[3];
    double ver_nj[2];
    double ver_xj[1];
    memset(ver_bj,0,sizeof(ver_bj));
    memset(ver_nj,0,sizeof(ver_nj));
    memset(ver_xj,0,sizeof(ver_xj));
 
    int nj=0;
    int bj=0;
    int rs=0;
 
    for (nj=0; nj<2; nj++)
    {
        for (bj=0; bj<3; bj++)
        {
            for (rs=0; rs<4; rs++)
            {
                printf("请输入%d年级%d班第%d名同学的成绩：", nj+1, bj+1, rs+1);
                scanf("lf", &school[nj][bj][rs]);
                ver_bj[bj] += school[nj][bj][rs];
            }
   
            ver_nj[nj] += ver_bj[bj];
			printf("%d班的总成绩是：%lf，平均成绩是 ：%lf\n", bj+1, ver_bj[bj], ver_bj[bj]/4);
        }
  
        ver_xj[0] += ver_nj[nj];
		printf("%d年级的总成绩是：%lf，平均成绩是：%lf\n", nj+1, ver_nj[nj], ver_nj[nj]/12);
    }
	
	printf("该学校的总成绩是：%lf，平均成绩是：%lf\n", ver_xj[0], ver_xj[0]/24);
 
}
*/


/*
#include <stdio.h>
#include <string.h>

int check_num(int num);


int main()
{
	int cj=0;
	printf("请输入你的成绩：");
	scanf("%d", &cj);
	
	check_num(cj);
}


int check_num(int num)
{
	if (num<60) printf("不及格");
	if (num>60 && num<85) printf("一般");
	if (num>85 && num <95) printf("良好");
	if (num>95 && num<=100) printf("优秀");
}
*/

/*
#include <stdio.h>
#include "_public.h"

int main()
{
	int aa, bb;
	aa=bb=0;
	
	printf("请输入两个数字：");
	scanf("%d %d", &aa, &bb);
	
	printf("%d和%d中的最大值是：%d\n", aa, bb, maxx(aa, bb));
	printf("%d和%d中的最小值是：%d", aa, bb, minn(aa, bb));
}
*/

/*
#include <stdio.h>

double pi=3.1;

void func1();

int main()
{
	printf("位置一 pi=%lf\n", pi);
	func1();
	printf("位置二 pi=%lf\n", pi);
}

// printf("位置五 pi=%lf\n", pi);

void func1()
{
	printf("位置三 pi=%lf\n", pi);
	double pi=3.5;
	printf("位置四 pi=%lf\n", pi);
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	// int a2=0b00011001;
	// int a8=031;
	// int a10=25;
	// int a16=0x25ac;
	
	// printf("二进制：%d\n八进制：%d\n十进制：%d\n十六进制：%d\n", a2, a8, a10, a16);
	
	// int i=32767;
	// printf("i %hd, %d, %ld\n", i, i, i);
	// int j=32767;
	// printf("j %hu, %u, %lu\n", j, j, j);
	
	
	int ii;
	int jj;
	
	ii=atoi("-12164");
	jj=atol("-64894654465416541");
	printf("ii=%d\n", ii);
	printf("jj=%ld\n", jj);
	
	ii=abs(ii);
	jj=labs(jj);
	printf("ii=%d\n", ii);
	printf("ii=%ld\n", jj);
}
*/


/*
#include <stdio.h>
#include <string.h>
#include "_public.h"

int main()
{
	int sex=0;
	int age=0;
	double weight=63;
	int height=0;
	int waistline=85;
	double bfr=0;
	
	
	// bfr=(((waistline*0.74)-(weight*0.082+44.74))/weight)*100;
	
	// printf("bfr=%lf", bfr);
	
	// printf("开始测试BodyFatRatio_simple函数\n");
	// BodyFatRatio_simple(sex, age, weight, height);
	// printf("\nBodyFatRatio_simple函数测试完成！");
	
	printf("\n\n\n\n开始测试BodyFatRatio_adult函数\n");
	BodyFatRatio_adult(sex, age, waistline, weight);
	printf("\nBodyFatRatio_adult函数测试完成！");
	
}
*/


// ********************整型********************
// 作业 1)
/*
#include <stdio.h>

int main()
{
	short s1;
	unsigned short s2;
	int i1;
	unsigned int i2;
	long l1;
	unsigned long l2;
	
	printf("sizeof(s1)=%hd  ", sizeof(s1));
	printf("sizeof(s2)=%hu\n", sizeof(s2));
	printf("sizeof(i1)=%d  ", sizeof(i1));
	printf("sizeof(i2)=%u\n", sizeof(i2));
	printf("sizeof(l1)=%ld  ", sizeof(l1));
	printf("sizeof(l2)=%lu\n", sizeof(l2));
}
*/


// 作业 4)
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char num[101];
		
	printf("请输入一个数字字符串：");
	scanf("%s", num);
	
	printf("你输入的字符串是%s，加100后的值=%d", num, atoi(num)+100);
}
*/


// 作业 5)
/*
#include <stdio.h>
#include <math.h>

int main()
{
	long long int ii;
	
	double area=0;
	double aa=0;
	
	area=pow((pow(2,8)),sizeof(ii));
	aa=pow(256,8);
		
	printf("long long int ii的sizeof(ii)=%d，ii的取值范围=%lf", sizeof(ii), aa);
}
*/


// 作业 6) ???
/*
#include <stdio.h>

int main()
{
	short s1=33000;
	unsigned short s2=66000;
	int i1=2247483647;
	unsigned int i2=4394967295;
	long l1=9323372036854775807;
	unsigned long l2=19446744073709551615;
	
	printf("s1=%hd  s2=%hu\ni1=%d  i2=%u\nl1=%ld  l2=lu", s1, s2, i1, i2, l1, l2);
}
*/


// 作业 7)
/*
#include <stdio.h>
#include "_public.h"

int main()
{
	int jj=0;
		
	printf("请输入一个整数：");
	scanf("%d", &jj);
	printf("你输入的值jj=%d，ABS(jj)=%d，LABS(jj)=%ld", jj, i_abs(jj), i_labs(jj));
}
*/


// 作业 8)
/*
#include <stdio.h>
#include <string.h>
#include "_public.h"

int main()
{
	char aa=0;
	
	printf("请输入一个数字字符：");
	scanf("%c", &aa);
	
	printf("你输入的字符是'%c'，i_ctoi('%c')=%d", aa, aa, i_ctoi(aa));
	
}
*/


// 作业 9)
/*
#include <stdio.h>
#include <math.h>
#include "_public.h"

int main()
{
	long x=0;
	long y=0;
	
	printf("请输入x、y：");
	scanf("%ld %ld", &x, &y);
	printf("i_pow(%ld, %ld)=%ld    |i_labs(%ld, %ld)|=%ld", x, y, i_pow(x, y), x, y, i_labs(_pow(x, y)));
}
*/


// 作业 10)???
/*
#include <stdio.h>
#include <string.h>
#include "_public.h"

int main()
{
	char cc[51];
	memset(cc,0,sizeof(cc));
	int count=0;
	
	int ii=0;
	int sum=0;
	
	printf("请输入字符串：");
	scanf("%s", cc);
	
	count = i_strlen(cc);
	
	for (ii=0; ii<count; ii++)
	{
		char cc2=cc[ii];
		sum += i_ctoi(cc2);
	}
	
	printf("你输入的字符串是：%s，总和=%d", cc, sum);
}
*/


// 作业 11) ******bug:超过10个数字就出错*****
/*
#include <stdio.h>
#include <string.h>
#include "_public.h"

int main()
{
	char chr[101];
	memset(chr,0,sizeof(chr));
	long ii, jj;
	long sum=0;
	
	// strcpy(chr, "123");
	printf("请输入一个数字字符串：");
	scanf("%s", chr);
	ii = i_strlen(chr);
	
	for (jj=0; jj<ii; jj++)
	{
		long chr_single=0;
		chr_single = i_ctoi(chr[jj]);
		
		sum += chr_single*(i_pow(10, ii-(jj+1)));
		
		printf("%d*i_pow(10, %d-(%d+1)) sum=%d\n", chr_single, ii, jj, sum);
	}
	
	printf("%d", sum);
	
}
*/


// 作业 12) ???
/*
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 int main()
 {
	 int chr[61];
	 memset(chr,0,sizeof(chr));
	 int ii;
	 
	 for (ii=0; ii<53; ii++)
	 {
		 chr[ii] = rand()%52+1;
		 printf("%d\n", chr[ii]);
	 }
	 // printf("%d", chr);
 }
 */
 
 