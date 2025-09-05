/*
* File Name:Chapter2Ex9B.cpp
* Programmer: Mark Goldstein
* Date:09/25
* Requirements:
You have been given a job as a programmer 
on a Cyborg supercomputer. In order to accomplish some calculations, 
you need to know how many bytes the following data types use:    and . 
You do not have any technical documentation, so you can’t look this information up. Write a C++ program that will determine the amount of memory used 
by these types and display the information on the screen.
Find size of the various data types and output to screen.
* 
* 
*/

#include <iostream>
using namespace std;
int main()
{
	int number=1;
	bool tf=false;
	char alpha='c';
	string phrase="This is a test";
	float dec1=2.5;
	double bigDec=3.1415911111111111111111;
	/*cout << number << endl;
	cout << tf << endl; ;
	cout << alpha << endl;
	cout << phrase << endl;
	cout << dec1 << endl;;
	cout << bigDec << endl;
	*/
	cout <<sizeof(number)<<endl ;
	cout << sizeof(tf) << endl; ;
	cout << sizeof(alpha) << endl;
	cout<< sizeof(phrase) << endl;
	cout << sizeof(dec1)<< endl;;
	cout << sizeof(bigDec)<< endl;

   
	
	 
}

