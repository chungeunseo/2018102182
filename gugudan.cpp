#include<iostream>

using namespace std;

int main()
{
	int count = 1;

	while (count != 10)
	{
		cout << count << "��" << endl;
		for (int i = 1; i <= 10; i++)
		{
			cout << count << "x" << i << "=" << count * i << endl;
		}
		count++;
	}
}