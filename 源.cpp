#include<iostream>
using namespace std;
int main()
{
	char ch;   //erro  ֻ�ܴ��һ���ַ�
	cout << "�������ַ�����" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;  
	}
	else if (ch >= '0' && ch <= '9')
	{
		ch = '#';
	}
	cout << "ת������ַ���Ϊ��" << ch<<endl;
}