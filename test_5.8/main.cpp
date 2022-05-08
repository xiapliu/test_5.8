//三只小猪称体重
//有三只小猪ABC,请分别输入三只小猪的体重，并且判断那只小猪最重？
#include<iostream>
using namespace std;
//先判断A和B谁重，在判断AB中比较出的结果在和C进行比较
int main()
{
	//1、先创建三只小猪的体重变量
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	//2、让用户输入三只小猪的重量
	cout << "请输入小猪A的体重" << endl;
	cin >> num1;
	cout << "请输入小猪B的体重" << endl;
	cin >> num2;
	cout << "请输入小猪C的体重" << endl;
	cin >> num3;
	//打印输入的三只小猪的重量
	cout << "小猪A的体重是：" << num1 << "斤" << endl;
	cout << "小猪B的体重是：" << num2 << "斤" << endl;
	cout << "小猪C的体重是：" << num3 << "斤" << endl;

	//3、判断哪只最重
	if (num1 > num2)
	{
		
		if (num1 > num3)
		{
			cout << "小猪A是最重的" << endl;
		}
		else
		{
			cout << "小猪C是最重的" << endl;
		}
	}
	else
	{
		
		if (num2 > num3)
		{
			cout << "小猪B是最重的" << endl;
		}
		else
		{
			cout << "小猪C是最重的" << endl;
		}
	}

	return 0;
}