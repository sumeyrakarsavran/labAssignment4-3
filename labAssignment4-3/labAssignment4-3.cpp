#include <iostream>
using namespace std;

int main()
{
	int lines;
	cout << "Enter a line number : ";
	cin >> lines;

	for (int i = 1; i <= lines; i++)
	{
		if (i % 4 == 1)
		{
			cout << "   ******" << endl;
		}
		else if (i % 4 == 2)
		{
			cout << " **********" << endl;
		}

		else if (i % 4 == 3)
		{
			cout << "************" << endl;
		}
		else if (i % 4 == 0)
		{
			cout << " **********" << endl;
		}

	}




}