//通过三目运算符来实现简单的判断
#include<iostream>
using namespace std;
int main()
{
	//三目运算符
	//三目运算符可以作为左值被赋值，也可以作为右值复制给其他变量
	int a = 20;
	int b = 10;
	int c = 0;
	c=a > b ? a : b;
	cout << "c=" << c << endl;
	(a > b ? a : b) = 100;//注意运算符的优先级
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}