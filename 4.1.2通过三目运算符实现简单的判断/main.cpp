//ͨ����Ŀ�������ʵ�ּ򵥵��ж�
#include<iostream>
using namespace std;
int main()
{
	//��Ŀ�����
	//��Ŀ�����������Ϊ��ֵ����ֵ��Ҳ������Ϊ��ֵ���Ƹ���������
	int a = 20;
	int b = 10;
	int c = 0;
	c=a > b ? a : b;
	cout << "c=" << c << endl;
	(a > b ? a : b) = 100;//ע������������ȼ�
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}