//Main cpp file 
#include <iostream>
#include "3b.h"
using namespace std;

bool prime(int n);
int primecount(int p[], int size);

int main()
{
	int *p, size= 50;
	p = new int[size]; //Linking p to a new array
	for (int i = 0; i < 50; i++) //This loop will assign the array random numbers between 0 and 999
	{
		p[i] = rand() % 1000; //The array will have random integers between 0 and 999
	}
	
	cout << primecount(p, size) << endl;
	delete []p;

	system("pause");
	return 0;
}