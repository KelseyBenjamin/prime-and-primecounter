//LaTyra Johnson was the driver and Kelsey Benjamin was the navigator
//March 4, 2019
/*This problem will make an array of 50 elements and use two functions to count and print out the elements within the array that are prime numbers*/
#include <iostream>
using namespace std;
bool prime(int n);
int primecount(int p[], int size);

bool prime(int n)//bool function to determine if the number is prime of not
{
	bool isPrime = true; //Make isPrime true

	for (int i = 2; i <= n / 2; i++) //Nested loop to go through every element and determine if its prime or not
	{
		if (n % i == 0) //If loop that makes all nonprime numbers false
		{
			isPrime = false;
			break;
		}
	}
	return isPrime; //Return what isPrime is (false or true)
}
int main()
{
	int *p, size = 50; //Declare pointer name p
	p = new int[50]; //Linking p to a new array
	for (int i = 0; i < 50; i++) //This loop will assign the array random numbers between 0 and 999
	{
		p[i] = rand() % 1000; //The array will have random integers between 0 and 999
	}

	cout << primecount(p,size) << endl; //Outputting primecount count function

	delete[]p; //Deallocating the array memory
	return 0;
}
int primecount(int p[], int size) //This function will count the elements that are prime and output the amount and the elements that are prime
{
	int count = 0; //initialize a counter at 0

	for (int i = 0; i < size; i++) //This nested for loop will cout the elements that are prime and count them as well
	{
		if (prime(p[i]) == true)
		{
			cout << p[i] << endl; //cout the element that is prime
			count++;
		}
	}
	cout << "Amount of prime numbers: ";
	return count; //Return the amount of prime numbers
}
