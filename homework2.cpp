// 【**********函数重载**********】
// 函数的重载：函数名相同，但参数列表中的参数的类型、参数的个数、参数的顺序任一不同




// 【**********类和对象**********】
// C++的结构体定义时，可忽略struct关键字
// C++结构体的定义是在C的基础上扩充了，既可定义数据成员，也可定义成员函数

// struct-结构体，内部成员均为public
// class-类，内部成员均为private

// 成员访问限定符    public-共有的；private-私有的；protected-受保护的






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


#include <stdio.h>
#include <string.h>
#include <stdarg.h>
 
// 文件操作类声明
class CFile
{
    private:
        FILE *m_fp;        // 文件指针
        bool  m_bEnBuffer; // 是否启用缓冲区，true-启用；false-不启用
    
    public:
        CFile();   // 类的构造函数
        CFile(bool bEnBuffer);   // 类的构造函数
        
        ~CFile();   // 类的析构函数
        
        void EnBuffer(bool bEnBuffer=true);  // 启、禁用缓冲区
        
        // 打开文件，参数与fopen相同，打开成功true，失败返回false         
        bool Open(const char *filename,const char *openmode);
        
        // 调用fprintf向文件写入数据
        void Fprintf(const char *fmt,... );
        
        // 调用fgets从文件中读取一行
        bool Fgets(char *strBuffer,const int ReadSize);
        
        // 关闭文件指针
        void Close();
};
 
int main(int argc,char *argv[])
{
    if (argc !=2) { printf("请输入待打开的文件名。\n"); return -1; }
    
    CFile File;
    
    if (File.Open(argv[1],"r")==false) { printf("File.Open(%s)失败。\n",argv[1]); return -1; }
    
    char strLine[301];
    
    while (true)
    { // 从文件中读取每一行
        if (File.Fgets(strLine,300)==false) break;
    
        printf("%s",strLine);   // 把从文件中读到的内容显示到屏幕
    }
}
 
CFile::CFile()   // 类的构造函数
{
    m_fp=0;
    m_bEnBuffer=true;
}
 
CFile::CFile(bool bEnBuffer)   // 类的构造函数
{
    m_fp=0;
    m_bEnBuffer=bEnBuffer;
}
 
// 关闭文件指针
void CFile::Close()
{
    if (m_fp!=0) fclose(m_fp);  // 关闭文件指针
    m_fp=0;
}
 
CFile::~CFile()   // 类的析构函数
{
    Close();  // 调用Close释放资源
}
 
// 启、禁用缓冲区
void CFile::EnBuffer(bool bEnBuffer)
{
    m_bEnBuffer=bEnBuffer;
}
 
// 打开文件，参数与fopen相同，打开成功true，失败返回false         
bool CFile::Open(const char *filename,const char *openmode)
{
    Close();  // 打开新的文件之前，如果已经打开了文件，关闭它。
    
    if ( (m_fp=fopen(filename,openmode)) == 0 ) return false;
    
    return true;
}
 
// 调用fprintf向文件写入数据
void CFile::Fprintf(const char *fmt,...)
{
    if ( m_fp == 0 ) return;
    
    va_list arg;
    va_start(arg,fmt);
    vfprintf(m_fp,fmt, arg);
    va_end(arg);
    
    if ( m_bEnBuffer == false ) fflush(m_fp);
}
 
// 调用fgets从文件中读取一行
bool CFile::Fgets(char *strBuffer,const int ReadSize)
{
    if ( m_fp == 0 ) return false;
    
    memset(strBuffer,0,ReadSize);
    
    if (fgets(strBuffer,ReadSize,m_fp) == 0) return false;
    
    return true;
}


