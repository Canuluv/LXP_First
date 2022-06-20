#include<iostream>
#include<string>
using namespace std;

int main()
{
	string lxp = "李小胖是大猪头\t";
	for (int i = 0; i < 9999; i++)
	{
		cout << lxp;
		if (i % 5 == 0)
		{
			cout << endl;
		}
	}
	system("pause");
	return 0;
}