// 【**********函数重载**********】
// 函数的重载：函数名相同，但参数列表中的参数的类型、参数的个数、参数的顺序任一不同




// 【**********类和对象**********】
// C++的结构体定义时，可忽略struct关键字
// C++结构体的定义是在C的基础上扩充了，既可定义数据成员，也可定义成员函数

// struct-结构体，内部成员均为public
// class-类，内部成员均为private

// 成员访问限定符    public-共有的；private-私有的；protected-受保护的




// 【**********引用**********】
// 定义格式：数据类型 &引用名 = 目标变量名;
// 例如：           int ii;
//                  int &rii = ii;   // rii是ii的引用；同意不同名



// 【**********运算符重载**********】
// 运算符重载函数：operator
// 例如： 重载==  operator==



// 【**********string类**********】
// 使用string类
//                    using namespace std;
//                    string str1;
//或者
//                    std::string str2;

// string类的重载操作符
// 赋值：=                        std::string str = "aa";
// 运算：== !=  >  <  >=  <=      if (str1 == str2) printf("相等\n");
// 连接：+ +=                     str = "samuel" + "." + "miller"
// 位置：[]                       printf("str[0]=%c, str[1]=%c", str[0], str[1]);

// string类的成员函数  const char *c_str();  // 返回动态存放的字符串地址
//                     int size();           // 返回字符串的大小
//                     int length();         // 返回字符串的长度
//                     void clear();         // 清空字符串





// 【**********函数重载**********】
/*
#include <stdio.h>
#include <string.h>

// 重载strcpy函数，对dest初始化，防止内存溢出。
char *strcpy(char *dest, const char *src, size_t destsize);

int main()
{
    char tt[10];
    // www.freecplus.net

    // 系统的strcpy
    strcpy(tt, "samuel.miller"); printf("=%s=\n", tt);

    // 重新定义的strcpy
    strcpy(tt, "samuel.miller", sizeof(tt)); printf("=%s=\n", tt);

}

char *strcpy(char *dest, const char *src, size_t destsize)
{
    // 定义计数器，初始化dest
    memset(dest, 0, destsize);

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
*/



// 【**********类和对象**********】
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class myson
{
    public:
        char name[51];    // 姓名
        int age;          // 年龄
        int height;       // 身高cm
        char sc[51];      // 身材：瘦弱、标准、强壮
        char yz[51];      // 颜值：大众、帅哥、俊秀

        void show();    // 输出美男信息
        void levle();    // 判断美男的级别
};

void myson::show()
{
    printf("该选手名叫%s, 今年%d岁, 身高%dcm, 身材%s, 颜值%s\n",
           name, age, height, sc, yz);
}

void myson::levle()
{
    if ((age>=20 && age<25) &&
       (height>=175 && height<190) &&
       (strcmp(sc, "qz") == 0) &&
       (strcmp(yz, "jx") == 0))
       {
           printf("好家伙，这是万中无一的美男子啊！");
       }
    else if ((age>=18 && age<20) &&
       (height>=165 && height<175) &&
       (strcmp(sc, "bz") == 0) &&
       (strcmp(yz, "sg") == 0))
       {
           printf("很不错，你是一个俊俏书生！");
       }
    else if ((age>=15 && age<18) &&
       (height>=155 && height<165) &&
       (strcmp(sc, "sr") == 0) &&
       (strcmp(yz, "dz") == 0))
       {
           printf("嗯...额...，赶紧回家洗洗睡吧...");
       }
}

int main(int argc, char *argv[])
{
    //./hw2 lb 21 185 qz jx
    //./hw2 zgl 19 170 bz sg
    //./hw2 zf 16 160 sr dz

    // 判断输入参数个数是否为5
    if (argc != 6)
    {
        puts("----------------------------------------------");
        puts("                 该命令用法如下          ");
        puts("       ./hw2 name, age, heightm sc, yz     ");
        puts("       ./hw2 吕布 21 185 强壮 俊秀     ");
        puts("----------------------------------------------");
    }

    // 定于类变量
    class myson son;

    strcpy(son.name, argv[1]);
    son.age = atoi(argv[2]);
    son.height = atoi(argv[3]);
    strcpy(son.sc, argv[4]);
    strcpy(son.yz, argv[5]);

    printf("%s %d %d %s %s\n", son.name, son.age, son.height, son.sc, son.yz);


    son.show();
    son.levle();

}
*/




// 【**********引用**********】
/*
#include <stdio.h>

class tt
{
	public:
	    int func(int *pa);
        int func(int &ra);
};



int  main()
{
	int ii=0;

	tt t_return;

	t_return.func(&ii);
	printf("1 ii=%d\n", ii);

	t_return.func(ii);
	printf("2 ii=%d\n", ii);
}

int tt::func(int *pa)
{
	*pa = 20;
	return 0;
}

int tt::func(int &ra)
{
	ra = 30;
	return 0;
}
*/

/*
#include <stdio.h>

int value;

class tt
{
	public:

		int fun1(int ii);

};

int &fun2(int ii);

int main()
{
	tt t_return;

	int aa = t_return.fun1(1);
	printf("aa=%d\n", aa);

	int &bb = fun2(1);
	printf("bb=%d\n", bb);
}

int tt::fun1(int ii)
{
	value = 10+ii;
	return value;
}

int &fun2(int ii)
{
	int jj;
	value = 20+ii;
	jj = 20+ii;
	// return value;
	return jj;
}
*/





// 【**********运算符重载**********】
/*
#include <stdio.h>
#include <string.h>

class GGirl
{
	public:
	    char name_[50];
		char sc_[30];

		bool operator==(const GGirl &Girl);
		bool operator!=(const GGirl &Girl);
};

int main()
{
	GGirl g1, g2;

	strcpy(g1.name_, "西施");
	strcpy(g2.name_, "西施s");

	if (g1 == g2) printf("这两个人是同一人\n");
	else printf("这是两个人\n");

	strcpy(g1.sc_, "aa");
	strcpy(g2.sc_, "aaa");

	if (g1 != g2) printf("这俩人身材不同");
	else printf("这俩人身材一致");
}

bool GGirl::operator==(const GGirl &Girl)
{
	// 若两个姓名相等就返回ture
	if (strcmp(name_, Girl.name_) == 0) return true;
	else return false;
}

bool GGirl::operator!=(const GGirl &Girl)
{
	// 若两个身材相同就返回true
	if (strcmp(sc_, Girl.sc_) == 0) return false;
	else return true;
}
*/





// 【**********string类**********】
/*
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

int main()
{
	char chr1[51];
	memset(chr1, 0, sizeof(chr1));
	strcpy(chr1, "aaa");

	string chr2="bbb";

	if (chr1 != chr2) printf("chr1=%s, chr2=%s, 不相等\n", chr1, chr2.c_str());
	else printf("chr1=%s, chr2=%s, 相等\n", chr1, chr2.c_str());

	printf("chr2.size()=%d\n", chr2.size());
	printf("chr2.length()=%d\n", chr2.length());

	// 清楚字符串
	chr2.clear();

	printf("chr2.size()=%d\n", chr2.size());
	printf("chr2.length()=%d\n", chr2.length());
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <string>

int main()
{
	std::string chr;

	chr = "samuel";
	printf("chr=%s\n", chr.c_str());

	chr = chr + "." + "miller";
	printf("chr=%s\n", chr.c_str());

	chr = "sam";
	printf("chr=%s\n", chr.c_str());

	chr = "Hello World";
	printf("chr=%s\n", chr.c_str());
	printf("chr.size()=%d, chr.length()=%d\n", chr.size(), chr.length());

	// 输出chr存储的每一个字符
	for (int i=0; i<chr.length(); i++) printf("chr[%d]=%c\n", i, chr[i]);
}
*/



// 【**********vector容器**********】
/*
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    int height = 0;
    std::vector<int> vheight = {1,2,3,4,5,6,7,8,9};

    // for (int i=0; i<vheight.size(); i++)
    // {
    //     printf("=vheight[%d]=%d=\n", i, vheight[i]);
    // }

    printf("=%p=\n", vheight.begin());


    // while (true)
    // {
    //     printf("请输入一个身高：");
    //     scanf("%d", &height);

    //     if (height == 0) break;
    //     vheight.push_back(height);
    // }

    // for (int i=0; i<vheight.size(); i++)
    // {
    //     printf("vheight[%d]=%d\n", i, vheight[i]);
    // }

    // sort(vheight.begin(), vheight.end());

    // for (int i=0; i<vheight.size(); i++)
    // {
    //     printf("vheight[%d]=%d\n", i, vheight[i]);
    // }

}
*/


/*
#include <stdio.h>
#include <string.h>
#include <vector>
#include <string>

int main()
{
    char temp_name[50];
    std::string tname;
    std::vector<std::string> vname;

    while (true)
    {
        printf("请输入姓名（q-退出）：");
        scanf("%s", temp_name);

        if (strcmp(temp_name, "q") == 0) break;

        vname.push_back(temp_name);
    }

    for (int i=0; i<vname.size(); i++)
    {
        printf("vname[%d]=%s\n", i, vname[i].c_str());
    }
}
*/


/*
#include <stdio.h>
#include <string.h>
#include <vector>

struct myson
{
    char name[51];
    int age;
};

int main()
{
    struct myson son;
    memset(&son, 0, sizeof(struct myson));
    std::vector<struct myson> vson;

    strcpy(son.name, "吕布");
    son.age = 21;
    vson.push_back(son);

    strcpy(son.name, "诸葛亮");
    son.age = 32;
    vson.push_back(son);


    // 采用数组下标访问容器中的记录
    for (int i=0; i<vson.size(); i++)
    {
        printf("vson[%d].name=%s, vson[%d].age=%d\n",
               i, vson[i].name, i, vson[i].age);
    }

    // 把容器中的记录复制到结构体中
    puts("");
    for (int i=0; i<vson.size(); i++)
    {
        memcpy(&son, &vson[i], sizeof(struct myson));
        printf("son.name=%s, son.age=%d\n", son.name, son.age);
    }
}
*/


/*
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>

class printf_int
{
    public:
        int PrintfInt(std::vector<int> v)
        {
            if (v.empty() == 0)
            {
                for (int i=0; i<v.size(); i++)
                {
                    printf("vint[%d]=%d\n", i, v[i]);
                }
            }
            else printf("\nOVER\n");

            return 0;
        }
};


int main()
{
    printf_int pi;

    std::vector<int> vint = {1,2,3,4,5,6,7,8,9};


    std::vector<int> vii = {1,2,3};

    printf("=%d=, =%d=", vii.empty(), vii.size());

    pi.PrintfInt(vint);

    // 从开头指定位置增加元素
    vint.insert(vint.begin()+1, 22);
    puts("");
    pi.PrintfInt(vint);

    // 从末尾指定位置增加元素
    vint.insert(vint.end()-3, 44);
    puts("");
    pi.PrintfInt(vint);

    // 删除指定位置的元素
    vint.erase(vint.end()-4);
    vint.erase(vint.begin()+1);
    vint.pop_back();    // 删除最后一个元素
    puts("");
    pi.PrintfInt(vint);

    // 删除所有元素
    vint.clear();
    pi.PrintfInt(vint);
}
*/


#include <stdio.h>
#include <string.h>
#include <vector>
#include <string>
#include <algorithm>

// struct myson
// {
//     char name[51];
//     int age;
// };

class sx
{
    public:
        char name[51];
        int age;

        bool sortbyname(const sx &p1, const sx &p2);
        bool sortbyage(const sx &p1, const sx &p2);

        int PrintfInt(std::vector<std::string> v);
};

bool sortbyname(const sx &p1, const sx &p2)
{
    if (strcmp(p1.name, p2.name) <= 0) return true;
    return false;
}

bool sortbyage(const sx &p1, const sx &p2)
{
    if (p1.age < p2.age) return true;
    return false;
}

int sx::PrintfInt(std::vector<std::string> v)
{
    if (v.empty() == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            printf("vson[%d]=%s\n",
                   i, v[i]);
        }
    }

    return 0;
}


int main()
{
    sx ssxx;    // 类
    // struct myson son;    // 结构体
    std::vector<std::string> vson;    // 存放结构体的容器

    // // 结构体赋值
    // strcpy(son.name, "吕布");
    // son.age = 21;
    // vson.push_back(son);

    // strcpy(son.name, "诸葛亮");
    // son.age = 18;
    // vson.push_back(son);'

    strcpy(ssxx.name, "aa");
    vson.push_back(ssxx.name);

     strcpy(ssxx.name, "bb");
    vson.push_back(ssxx.name);

    sort(vson.begin(), vson.end());


    ssxx.PrintfInt(vson);

}



/*
// 作业 3)
#include <stdio.h>
#include <vector>

class CRand
{
    public:
        std::vector<int> m_val;
        CRand();
        ~CRand();

        void Rand(const int minvalue, const int maxvalue, const int totalcount, const bool brep=true);
};*/