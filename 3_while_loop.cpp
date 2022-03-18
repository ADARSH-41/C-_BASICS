#include<iostream>
using  namespace std;
int main()
{
	int x,y,z,k,sum=0;
	cout << "Enter value of x : ";
	cin >> x;
	cout << "Enter value of y : ";
	cin >> y;
	z = x%y; // returns the remainder obtained by dividing x by y and assigns it to variable 'z'.
	
	while(z!=0) // runs the whole body with in '{}' until the expression 'z!=0' becomes false.
	{
		cout << "Enter value of k : ";
		cin >> k; //takes input value of k from user.
		
		sum += k; //adds the value of k to 'sum' for each iteration. 
		
		z--; //decrements the value of z by 1 after completion of each iteration.
	}
	cout << "The sum of all given values is : " << sum; //returns the value of sum along with formatted string. 
	return 0;
}
