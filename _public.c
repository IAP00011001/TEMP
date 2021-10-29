//该文件用于保存自定义函数

#include <stdio.h>
#include <string.h>
#include "_public.h"

// 体脂率计算公式，简单型
// 性别（男-1，女-0）-sex  年龄-age  体重（kg）-weight  身高（cm）-height
double BodyFatRatio_simple(int sex, int age, double weight, int height)
{
	double bmi=0;
	double bfr=0;
	
	printf("请输入你的性别（男-1，女-0）、年龄、体重（kg）、身高（cm）：");
	scanf("%d %d %lf %d", &sex, &age, &weight, &height);
	
	bmi=weight/(height*height)*10000;
	
	if (sex == 1) {bfr=1.2*bmi+0.23*age-5.4-10.8;}
	else if (sex == 0) {bfr=1.2*bmi+0.23*age-5.4;}
	
	switch (sex)
	{
		case 1:
			if (age>=18 && age<=39)
			{
				printf("【18-39岁的体脂率范围】\n偏瘦：5-10\n标准（建康型）：11-16\n标准（警戒型）：17-21\n轻度肥胖：22-26\n重度肥胖：27-45\n\n");
				
				if (bfr>=5 && bfr<11) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=11 && bfr<17) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=17 && bfr<22) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=22 && bfr<27) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=27 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
			else if (age>=40 && age<=59)
			{
				printf("【40-59岁的体脂率范围】\n偏瘦：5-11\n标准（建康型）：12-17\n标准（警戒型）：18-22\n轻度肥胖：23-27\n重度肥胖：28-45\n\n");
				
				if (bfr>=5 && bfr<12) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=12 && bfr<18) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=18 && bfr<23) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=23 && bfr<28) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=28 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
			else if (age>=60)
			{
				printf("【60岁以上的体脂率范围】\n偏瘦：5-13\n标准（建康型）：14-19\n标准（警戒型）：20-24\n轻度肥胖：25-29\n重度肥胖：30-45\n\n");
				
				if (bfr>=5 && bfr<14) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=14 && bfr<20) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=20 && bfr<25) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=25 && bfr<30) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=30 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
		break;
		
		case 0:
			if (age>=18 && age<=39)
			{
				printf("【18-39岁的体脂率范围】\n偏瘦：5-20\n标准（建康型）：21-27\n标准（警戒型）：28-34\n轻度肥胖：35-39\n重度肥胖：40-45\n\n");
				
				if (bfr>=5 && bfr<21) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=21 && bfr<28) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=28 && bfr<35) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=35 && bfr<40) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=40 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
			else if (age>=40 && age<=59)
			{
				printf("【40-59岁的体脂率范围】\n偏瘦：5-21\n标准（建康型）：22-28\n标准（警戒型）：29-35\n轻度肥胖：36-40\n重度肥胖：41-45\n\n");
				
				if (bfr>=5 && bfr<22) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=22 && bfr<29) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=29 && bfr<36) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=36 && bfr<41) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=41 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
			else if (age>=60)
			{
				printf("【50岁以上的体脂率范围】\n偏瘦：5-22\n标准（建康型）：23-29\n标准（警戒型）：30-36\n轻度肥胖：37-41\n重度肥胖：45-45\n\n");
				
				if (bfr>=5 && bfr<23) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=23 && bfr<30) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=30 && bfr<37) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=37 && bfr<42) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=42 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
		break;
	}
}


// 体脂率计算公式，成年型
// 性别（男-1，女-0）-sex  年龄-age  腰围（cm）-waistline  体重（kg）-weight
double BodyFatRatio_adult(int sex, int age, int waistline, double weight)
{
	double bfr=0;
	
	printf("请输入你的性别（男-1，女-0）、年龄、腰围（cm）、体重（kg）：");
	scanf("%d %d %d %lf", &sex, &age, &waistline, &weight);
	
	if (sex == 1) bfr=(((waistline*0.74)-(weight*0.082+44.74))/weight)*100;
	else if (sex == 0) bfr=(((waistline*0.74)-(weight*0.082+34.89))/weight)*100;
	
	switch (sex)
	{
		case 1:
		    if (age>=18 && age<=39)
			{
				printf("【18-39岁的体脂率范围】\n偏瘦：5-10\n标准（建康型）：11-16\n标准（警戒型）：17-21\n轻度肥胖：22-26\n重度肥胖：27-45\n\n");
				
				if (bfr>=5 && bfr<11) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=11 && bfr<17) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=17 && bfr<22) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=22 && bfr<27) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=27 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
			else if (age>=40 && age<=59)
			{
				printf("【40-59岁的体脂率范围】\n偏瘦：5-11\n标准（建康型）：12-17\n标准（警戒型）：18-22\n轻度肥胖：23-27\n重度肥胖：28-45\n\n");
				
				if (bfr>=5 && bfr<12) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=12 && bfr<18) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=18 && bfr<23) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=23 && bfr<28) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=28 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
			else if (age>=60)
			{
				printf("【60岁以上的体脂率范围】\n偏瘦：5-13\n标准（建康型）：14-19\n标准（警戒型）：20-24\n轻度肥胖：25-29\n重度肥胖：30-45\n\n");
				
				if (bfr>=5 && bfr<14) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=14 && bfr<20) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=20 && bfr<25) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=25 && bfr<30) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=30 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
		break;
		
		case 0:
		    if (age>=18 && age<=39)
			{
				printf("【18-39岁的体脂率范围】\n偏瘦：5-20\n标准（建康型）：21-27\n标准（警戒型）：28-34\n轻度肥胖：35-39\n重度肥胖：40-45\n\n");
				
				if (bfr>=5 && bfr<21) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=21 && bfr<28) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=28 && bfr<35) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=35 && bfr<40) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=40 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
			else if (age>=40 && age<=59)
			{
				printf("【40-59岁的体脂率范围】\n偏瘦：5-21\n标准（建康型）：22-28\n标准（警戒型）：29-35\n轻度肥胖：36-40\n重度肥胖：41-45\n\n");
				
				if (bfr>=5 && bfr<22) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=22 && bfr<29) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=29 && bfr<36) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=36 && bfr<41) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=41 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
			else if (age>=60)
			{
				printf("【50岁以上的体脂率范围】\n偏瘦：5-22\n标准（建康型）：23-29\n标准（警戒型）：30-36\n轻度肥胖：37-41\n重度肥胖：45-45\n\n");
				
				if (bfr>=5 && bfr<23) printf("你的体脂率是%lf，有点儿偏瘦了！", bfr);
				else if (bfr>=23 && bfr<30) printf("你的体脂率是%lf，是理想体型啊！", bfr);
				else if (bfr>=30 && bfr<37) printf("你的体脂率是%lf，很健康，注意合理饮食！", bfr);
				else if (bfr>=37 && bfr<42) printf("你的体脂率是%lf，轻度肥胖，建议多锻炼！", bfr);
				else if (bfr>=42 && bfr<46) printf("你的体脂率是%lf，属于重度肥胖，急需减肥！", bfr);
			}
		break;
	}
}


//2021.10.29 求int整数的绝对值
int i_abs(const int j)
{
	int j_return=0;
	
	if (j == 0) j_return=0;
	else if (j > 0) j_return=j;
	else if (j < 0) j_return=0-j;
	
	return j_return;
}


// 求long整数的绝对值
long i_labs(const long int j)
{
	int j_return=0;
	
	if (j == 0) j_return=0;
	else if (j > 0) j_return=j;
	else if (j < 0) j_return=0-j;
	
	return j_return;
}


// 把数字0-9的字符转换为int整型
int i_ctoi(const char chr)
{
	switch(chr)
	{
		case '0': return 0; break;
		case '1': return 1; break;
		case '2': return 2; break;
		case '3': return 3; break;
		case '4': return 4; break;
		case '5': return 5; break;
		case '6': return 6; break;
		case '7': return 7; break;
		case '8': return 8; break;
		case '9': return 9; break;
	}
	
	// 若chr不是数字的字符，函数返回-1
	return 0;
}


// 求整数x的y次幂， 函数返回值为整数x的y次幂
long i_pow(const long x, const long y)
{
	long count;
	long sum=1;
		
	for (count=1; count<=y; count++) {sum *= x;}
	
	return sum;
}


// 统计100以内字符串长度，函数返回值为长度数字
int i_strlen(const char chr[101])
{
	int count=0;
	
	while (chr[count] != '\0')
	{
		count += 1;
	}
	
	return count;
}


// 计算字符串里所有数字之和
long i_sumstr(const char str[101])
{
	int count=0;    // 计数器
	int corner=0;    // 数组角标
	int sum=0;    // 数字总和
	
	// 获取数组长度count
	while (str[count] != '\0') {count += 1;}
		
	for (corner=0; corner<count; corner++)
	{
		char chr = str[corner];    // 获取单个字符
		
		switch (chr)
		{
			case '0': sum += 0; break;
			case '1': sum += 1; break;
			case '2': sum += 2; break;
			case '3': sum += 3; break;
			case '4': sum += 4; break;
			case '5': sum += 5; break;
			case '6': sum += 6; break;
			case '7': sum += 7; break;
			case '8': sum += 8; break;
			case '9': sum += 9; break;
			default: sum += 0;
		}
	}
	
	return sum;    // 返回数字总和
}


// 把100以内长度字符串nptr转换为int整数
// int i_atoi(const char nptr[101])
// {
	// int ii=0;
	// int jj=0;
	// int count=i_strlen(nptr);
	
	// int sum=0;
	
	// for (jj=0; jj<count; jj++)
	// {
		// char cc=nptr[ii];
		// int kk=count;
		
	    // sum += i_ctoi(cc)*(i_pow(10, kk));
		// ii += 1;
		// kk -= 1;
	// }
	
	// return sum;
// }


// 把字符串nptr转换为long整数
// int i_atol(const char nptr)
// {}

