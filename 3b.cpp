#include "3b.h"

int primecount (int p[], int size)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (prime(p[i]) == true)
		{
			cout << p[i] << endl;
			count++;
		}
	}
	cout << "Amount of prime numbers: ";
	return count;
}

bool prime(int n)
{
	bool isPrime = true;

	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	return isPrime;
}





