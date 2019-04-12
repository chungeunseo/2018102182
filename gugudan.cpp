#include<iostream>

using namespace std;

int main()
{
	int count = 1;

	while (count != 9)
	{
		cout << count << "´Ü" << endl;
		for (int i = 1; i < 10; i++)
		{
			cout << count << "x" << i << "=" << count * i << endl;
		}
		count++;
	}
}