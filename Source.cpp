#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	//B1
	//1
	/*int mas[10];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++)
	{
		mas[i] = rand() % 20 + 0;
		cout << mas[i] << ' ';
	}
	cout << endl;
	long long p = 1;
	for (int i = 0; i < 10; i++)
	{
		p = p * mas[i];
	}
	cout << p;*/

	//2
	/*int mas[8];
	srand(time(nullptr));
	for (int i = 0; i < 8; i++)
	{
		mas[i] = rand() % 20 - 10;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < 8; i++)
	{
		if (mas[i] >= 0)
		{
			s = s + mas[i];
		}
	}
	cout << s;*/

	//3
	/*int mas[16];
	srand(time(nullptr));
	for (int i = 0; i < 16; i++)
	{
		mas[i] = rand() % 20 + 0;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < 16; i++)
	{
		if (mas[i] % 3 == 0 && mas[i] % 5 == 0)
		{
			k++;
		}
	}
	cout << k;*/

	//4
	/*int mas[9];
	srand(time(nullptr));
	for (int i = 0; i < 9; i++)
	{
		mas[i] = rand() % 20 - 10;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < 9; i++)
	{
		if (mas[i] % 2 == 0)
		{
			s = s + mas[i];
		}
	}
	cout << s;*/
}