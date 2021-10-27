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