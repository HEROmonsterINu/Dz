#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <fstream>

using namespace std;

// Дабл я взял что бы можно было сложить и делить все числа а не только целые

double addChisl(int a, int b)
{
	return a + b;
}

double divChisl(int a, int b)
{
	if (b == 0)
	{
		cout << "На 0 делить нельзя" << endl;
	}
	return a / b;
}

bool Chisl100(double s)
{
	return s > 100;
}

int maxChisl(int A[], int size)
{
	int max = A[0];

	for (int i = 0; i < size; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
		}
	}
	return max;
}

int minChisl(int A[], int size)
{
	int min = A[0];

	for (int i = 0; i < size; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
		}
	}
	return min;
}

void stroki()
{
	int n;
	string text;

	cout << "Сколько строк хотите?";
	cin >> n;
	cout << "Какой текст вы хотите видеть?";
	cin >> text;

	for (int i = 0; i < n; i++)
	{
		cout << text << endl;
	}
}

int summaSklavi()
{
	int a;
	int b;
	cin >> a >> b;
	return a + b;
}

void readPrintFile() {
	string filename;
	cout << "Введите имя файла: ";
	cin >> filename;

	ifstream file(filename);
	string line;

	while (getline(file, line)) {
		cout << line << endl;
	}

	file.close();
}

vector<int> vectorGenerate(int size)
{
	vector<int> v;
	srand(time(NULL));

	for (int i = 0; i < v.size(); i++)
	{
		v[i] = rand() % 101;
	}
	return v;
}

void selSort(int a[], int n) 
{
	for (int i = 0; i < n - 1; i++) 
	{
		int m = i;

		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[m])
			{
				m = j;
				swap(a[i], a[m]);
			}
		}
	}
}

void bubSort(int a[], int n) 
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "RU");



	return 0;
}