#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void ex02 ();
void ex03 ();
void ex04 ();
void ex05 ();
int doublenum (int a){
	return (2*a);
}
int add (int a, int b) {
	return (a+b);
}
void outputArray (int arrayName[], int length)
{
	for (int x=0; x<length; x++)
	{
		cout << arrayName[x] << ", ";
	}
}
void findArray (int arrayName[], int length)
{
	int value;
	bool found=false;
	cout << "Value to find: ";
	cin>> value;
	for (int x=0; x<length; x++)
	{
		if (arrayName[x]==value);
		{
			found=true;
		}
	}
	if (found=true)
		cout << "Value is found.\n";
	else
		cout << "Value is not found.\n";
}
void addone (int &x)
{
	x+=1;
}

int main ()
{
	ex02 ();
	ex03 ();
	ex04 ();
	ex05 ();

}

void ex02 ()
{
	bool hasPassedTest=true;
	srand(time(NULL));
	int x=rand();
	int y=rand();
	if (x>=y)
		cout << "x (" << x << ") is greater than or equal to y (" << y << ")";
	else
		cout << "x (" << x << ") is less than y (" << y << ")";
	int numberOfShares;
	cout << "how many shares? ";
	cin >> numberOfShares;
	if (numberOfShares<100)
		cout << "There are less than 100 shares.\n";
	else
		cout << "There are greater than or equal to 100 shares.\n";
	int boxWidth, bookWidth;
	cout << "How wide is the box? ";
	cin >> boxWidth;
	cout << "How wide is the book? ";
	cin >> bookWidth;
	if (boxWidth%bookWidth==0)
		cout << "Box width is evenly divisible by book width.\n";
	else
		cout << "Box width is not evenly divisible by book width.\n";
	int shelfLife, temp;
	cout << "What is the shelf life in days? ";
	cin >> shelfLife;
	cout << "What is the outside temperature? ";
	cin >> temp;
	if (temp>90)
		shelfLife-=4;
}

void ex03 ()
{
	double area, length, diaglength;
	cout << "What is the area of the square? ";
	cin >> area;
	length=sqrt(area);
	diaglength=(sqrt(2)*length);
	cout << "Diagonal length is: " << diaglength << endl;
	cout << "y or n? ";
	char c;
	cin >> c;
	if (c=='y')
		cout << "Yes";
	else
		cout << "No";
	char tab;
	tab = 'HT';
	string mailingAddress;
	cout << "What is your mailing address?";
	mailingAddress = "Initialized string";
}

void ex04 ()
{
	srand(time(NULL));
	int number, sum=0, q=0;
	do
	{
		cout << "Declare a number between 1 and 10: ";
		cin >> number;
	}
	while (number>0 && number<11);
	for (int x=0;  x<number; x++)
	{
		sum+=((x+1)*(x+1)*(x+1));
	}
	cout << "sum of cubes from 1 to " << number << ": " << sum;
	for (int y=0; y<number; y++)
	{
		cout <<"*";
	}
	for (q; q<41; q+=2);
	{
		cout << q << ", ";
	}
	doublenum (number);
	int w=rand(),e=rand();
	add (w,e);
	// add one to paramater was not asked to be used but has been made above main
}

void ex05 ()
{
	int x=0,sum=0,product=1;
	int input[5];
	for (x; x<5; x++)
	{
		cout << "Integer Please: ";
		cin >> input[x];
	}
	for (x=0; x<5; x++)
	{
		sum+=input[x];

	}
	for (x=0; x<5; x++)
	{
		product=(input[x]*product);
	}
	cout << "sum: " << sum << endl << "product: " << product << endl;
	outputArray (input, 5);
	findArray (input,5);
}