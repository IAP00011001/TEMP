// 该头文件用于声明自定义函数

// 体脂率计算公式，简单型
// 性别（男-1，女-0）-sex  年龄-age  体重（kg）-weight  身高（cm）-height
double BodyFatRatio_simple(int sex, int age, double weight, int height);


// 体脂率计算公式，成年型
// 性别（男-1，女-0）-sex  年龄-age  腰围（cm）-waistline  体重（kg）-weight
double BodyFatRatio_adult(int sex, int age, int waistline, double weight);


//2021.10.29 求int整数的绝对值
int i_abs(const int j);


// 求long整数的绝对值
long i_labs(const long int j);


// 把数字0-9的字符转换为int整型
int i_ctoi(const char chr);


// 求整数x的y次幂， 函数返回值为整数x的y次幂
long i_pow(const long x, const long y);


// 统计100以内字符串长度，函数返回值为长度数字
int i_strlen(const char chr[101]);


// 计算字符串里所有数字之和
long i_sumstr(const char str[101]);


// 把字符串nptr转换为int整数
// int i_atoi(const char nptr);


// // 把字符串nptr转换为long整数
// int i_atol(const char nptr);
