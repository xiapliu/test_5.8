//��ֻС�������
//����ֻС��ABC,��ֱ�������ֻС������أ������ж���ֻС�����أ�
#include<iostream>
using namespace std;
//���ж�A��B˭�أ����ж�AB�бȽϳ��Ľ���ں�C���бȽ�
int main()
{
	//1���ȴ�����ֻС������ر���
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	//2�����û�������ֻС�������
	cout << "������С��A������" << endl;
	cin >> num1;
	cout << "������С��B������" << endl;
	cin >> num2;
	cout << "������С��C������" << endl;
	cin >> num3;
	//��ӡ�������ֻС�������
	cout << "С��A�������ǣ�" << num1 << "��" << endl;
	cout << "С��B�������ǣ�" << num2 << "��" << endl;
	cout << "С��C�������ǣ�" << num3 << "��" << endl;

	//3���ж���ֻ����
	if (num1 > num2)
	{
		
		if (num1 > num3)
		{
			cout << "С��A�����ص�" << endl;
		}
		else
		{
			cout << "С��C�����ص�" << endl;
		}
	}
	else
	{
		
		if (num2 > num3)
		{
			cout << "С��B�����ص�" << endl;
		}
		else
		{
			cout << "С��C�����ص�" << endl;
		}
	}

	return 0;
}