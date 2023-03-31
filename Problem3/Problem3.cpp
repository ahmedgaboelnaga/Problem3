#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	for (int i = 2; i <= 6; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cout << setw(2) << j * i << " ";
		}
		cout << endl;
	}
	return 0;
}