#include<iostream>
int converter(int);
int main()
{
	using namespace std;
	int furlong;
	cout << "Enter the value in furlongs: ";
	cin >> furlong;
	cout << furlong << " furlongs = " << converter(furlong) << " yards.";
	return (0);
}
int converter(int fr)
{
	return fr * 220;
}