
#include<iostream>
#include<ostream>
using namespace std;

int main()
{
	int i;
	while (i<37)
	{
		if (i%2!=0)
		{
			cout << "-";
		}
		else
		{
			cout << "=";	
		}
		i++;
	}
	cout << "\n\n";
	int a;
	cout << "             Daniel Novotny \n";
	cout << "           Student - OSU OKC\n\n";
	
	cout << "  Phone : " << "(405)397-6558\n";
	cout << "  Email : " << "daniel.novotny0@gmail.com\n";
	cout << "    Git : " << "github.com/DNovotny\n\n";
	
	while (i>0)
	{
		if (i%2!=0)
		{
			cout << "=";
		}
		else
		{
			cout << "-";	
		}
		i--;
	}
	cin >> a;
	return 0;
}