#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x;
	cout << "Enter the Number:";
	cin >> x;
	cout << (x == 0 ? "F" : x == 1 ? "D" : x == 2 ? "C" : x == 3 ? "B" : x == 4 ? "A" : "U")<<endl;
	system("pause");
}

