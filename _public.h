// 该头文件用于声明自定义函数

// 体脂率计算公式，简单型
// 性别（男-1，女-0）-sex  年龄-age  体重（kg）-weight  身高（cm）-height
double BodyFatRatio_simple(int sex, int age, double weight, int height);


// 体脂率计算公式，成年型
// 性别（男-1，女-0）-sex  年龄-age  腰围（cm）-waistline  体重（kg）-weight
double BodyFatRatio_adult(int sex, int age, int waistline, double weight);

