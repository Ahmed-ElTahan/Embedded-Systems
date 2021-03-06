// This code is created by Ahmed A. Eltahan

/* 
	----------------------------- Program Description -----------------------------------------
	It is required to use recursive function in order to calculate the factorial of a number to be entered by the user 
	v1 : with global variable
*/


#include<stdio.h> // Library to include c functions for the compiler.
int fact = 1; // global variable initially at 1

int Rec_Fact(int no)
{
	fact = fact * no;
	no = no - 1;
	
	if (no != 1)
	{
		fact = Rec_Fact(no);
	}
	
	else
	{
		return fact;
	}
}

main()
{	
	// Declaration and Inintialization
	int input;
	
	// Write your instructions here.
	
	
	printf("Please enter the number to get its factorial: ");
	scanf("%d", &input); // get the number
	
	fact = Rec_Fact(input); // function call and get factorial
	// Output
	
	printf("Factorial of %d is %d", input, fact);
}