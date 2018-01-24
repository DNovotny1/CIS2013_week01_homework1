//generates business card in c++
#include<iostream>
using namespace std;

int main()
{
	//repeats pattern till i equals j. Set j to odd number
	int i, j;
	j=37;
	while (i<j)
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
	//outputs personal information
	cout << "\n\n";
	int a;
	cout << "             Daniel Novotny \n";
	cout << "           Student - OSU OKC\n\n";
	
	cout << "  Phone : " << "(405)397-6558\n";
	cout << "  Email : " << "daniel.novotny0@gmail.com\n";
	cout << "    Git : " << "github.com/DNovotny\n\n";
	
	//counts down i repeating pattern below
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