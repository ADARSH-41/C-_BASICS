#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
    cout << " Value of a : "; // prompts user for value of 'a'.
    
	cin >> a ; // takes input value from user and stores it in address of 'a'.
	
	cout << "\n Value of b : "; // prompts user for value of 'b'.
	
	cin >> b ; // takes input value from user and stores it in address of 'b'.
	
	c = a + b ;
	
	cout << "\n The sum is : " <<  c ; // Outputs the sum result in the variable 'c'.
	
	/* Note the directions of arrow heads used for cin and cout statements. '>>' indicates 
	   Input(cin) and '<<' indicates Output(cout). */
}
