// %d ����
// %f/%lf ������/˫����
// %c/%s �ַ�/�ַ���
// %p ��ַ

// *p == i  p == &i *p��ŵ���һ��ֵ��p��ŵ��Ǹ�ֵ���ڴ��ַ

// signed int aa ����/���� ����aa
// unsigned int aa ����aa
// short int aa 4�ֽ� ������aa
// long int aa ������aa



// �����顿��ҵ 4��
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
		printf("�������%dλѧ���ĳɼ���", counts+1);
		scanf("%lf", &cj[counts]);
		sum += cj[counts];
	}
	
	printf("�������ܳɼ��ǣ�%lf��ƽ���ɼ��ǣ�%lf", sum, sum/rs);
}
*/

// �����顿��ҵ 5)
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
	
	printf("������꼶�İ༶����ÿ���༶��������");
	scanf("%d %d", &bj, &rs);
	
	for (c_bj=0; c_bj<bj; c_bj++)
	{
		for (c_rs=0; c_rs<rs; c_rs++)
		{
			printf("������%d���%d�˵ĳɼ� ��", c_bj+1, c_rs+1);
			scanf("%lf", &cj[c_bj][c_rs]);
			sum += cj[c_bj][c_rs];
			sum_all += cj[c_bj][c_rs];
			
			// printf("cj[c_bj][c_rs]=cj[%d][%d]=%lf      sum=%lf\n", c_bj, c_rs, cj[c_bj][c_rs], sum);
		}
		
		printf("%d����ܳɼ��ǣ�%lf��ƽ���ɼ��ǣ�%lf\n\n", c_bj+1, sum, sum/rs);
		sum = 0;
	}
	
	printf("���꼶���ܳɼ��ǣ�%lf��ƽ���ɼ��ǣ�%lf", sum_all, sum_all/(bj*rs));
}
*/



// ��ҵ 7)*****************û��ͨ******************
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
                printf("������%d�꼶%d���%d��ͬѧ�ĳɼ���", nj+1, bj+1, rs+1);
                scanf("lf", &school[nj][bj][rs]);
                ver_bj[bj] += school[nj][bj][rs];
            }
   
            ver_nj[nj] += ver_bj[bj];
			printf("%d����ܳɼ��ǣ�%lf��ƽ���ɼ��� ��%lf\n", bj+1, ver_bj[bj], ver_bj[bj]/4);
        }
  
        ver_xj[0] += ver_nj[nj];
		printf("%d�꼶���ܳɼ��ǣ�%lf��ƽ���ɼ��ǣ�%lf\n", nj+1, ver_nj[nj], ver_nj[nj]/12);
    }
	
	printf("��ѧУ���ܳɼ��ǣ�%lf��ƽ���ɼ��ǣ�%lf\n", ver_xj[0], ver_xj[0]/24);
 
}
*/


/*
#include <stdio.h>
#include <string.h>

int check_num(int num);


int main()
{
	int cj=0;
	printf("��������ĳɼ���");
	scanf("%d", &cj);
	
	check_num(cj);
}


int check_num(int num)
{
	if (num<60) printf("������");
	if (num>60 && num<85) printf("һ��");
	if (num>85 && num <95) printf("����");
	if (num>95 && num<=100) printf("����");
}
*/

/*
#include <stdio.h>
#include "_public.h"

int main()
{
	int aa, bb;
	aa=bb=0;
	
	printf("�������������֣�");
	scanf("%d %d", &aa, &bb);
	
	printf("%d��%d�е����ֵ�ǣ�%d\n", aa, bb, maxx(aa, bb));
	printf("%d��%d�е���Сֵ�ǣ�%d", aa, bb, minn(aa, bb));
}
*/

/*
#include <stdio.h>

double pi=3.1;

void func1();

int main()
{
	printf("λ��һ pi=%lf\n", pi);
	func1();
	printf("λ�ö� pi=%lf\n", pi);
}

// printf("λ���� pi=%lf\n", pi);

void func1()
{
	printf("λ���� pi=%lf\n", pi);
	double pi=3.5;
	printf("λ���� pi=%lf\n", pi);
}
*/



#include <stdio.h>
 
int main()
{
  short si=9999999999;   // ������
  signed int   ii;   // ����
  unsigned int  li;   // ������
 
  printf("sizeof short is %d\n",sizeof(short));
  printf("sizeof int is %d\n",sizeof(signed int));
  printf("sizeof long is %d\n",sizeof(unsigned int));
}