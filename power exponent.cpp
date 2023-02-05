#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int Pow(int chislo, int stepen);

int main()
{
	int num;
	cin >> num;
	int step;
	cin >> step;
	cout<<Pow(num, step);
}

int Pow(int chislo, int stepen) {
	int result = 1;
	if (stepen > 0) {
		for (int i = 0; i < stepen; i++)
		{
			result = result * chislo;
		}	
		return result;
	 }
}