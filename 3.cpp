#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;
//سید پارسا عسگری طباطبائی

int main()
{
	char s[50];
	int a[50];
	int i=0, t=0, j = 0,m=0;
	cin.get(s,50);
	while (s[i] != '.')
	{
		m++;
		if (s[i] == ' ')
		{
			t++;
			a[j] =m-1 ;
			j++;
			m = 0;
		}
		i++;
			
	}
	cout << "tedad kalamat:" << t<<"\n";
	for (j = 0; j < t; j++)
		cout << "tedad horof kalame"<<j+1<<":" << a[j] << "\t";
}

