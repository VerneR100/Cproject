#include<iostream>
int stonetolb(int);
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the wight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = " << pounds << " pounds." << endl;
	return (0);
}
int stonetolb(int sts)
{
	return 14 * sts;
}