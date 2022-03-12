#include<iostream>
using namespace std;
int main()
{
	char ch;   //erro  只能存放一个字符
	cout << "请输入字符串：" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;  
	}
	else if (ch >= '0' && ch <= '9')
	{
		ch = '#';
	}
	cout << "转换后的字符串为：" << ch<<endl;
}