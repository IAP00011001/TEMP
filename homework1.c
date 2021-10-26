// %d 整形
// %f/%lf 浮点数/双精度
// %c/%s 字符/字符串
// %p 地址

// *p == i  p == &i *p存放的是一个值，p存放的是该值的内存地址

// signed int aa 正数/负数 整型aa
// unsigned int aa 整型aa
// short int aa 4字节 短整型aa
// long int aa 长整型aa



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



#include <stdio.h>
 
int main()
{
  short si=9999999999;   // 短整数
  signed int   ii;   // 整数
  unsigned int  li;   // 长整数
 
  printf("sizeof short is %d\n",sizeof(short));
  printf("sizeof int is %d\n",sizeof(signed int));
  printf("sizeof long is %d\n",sizeof(unsigned int));
}