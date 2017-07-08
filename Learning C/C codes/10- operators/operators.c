// This code is created by Ahmed A. Eltahan

/* 
	----------------------------- Program Description -----------------------------------------
This program is used show different operators in C (Arithmatic, Bitwise, Assignments)
*/


#include<stdio.h> // Library to include c functions for the compiler.

main()
{	
	
	
	// Declaration & Initialization
	int no_1, no_2; no_1 = 10; no_2 = 3;
	int sum, sub, multp, div, rem;
	int a, b, w;
	char x = 3;
	char y = 7;
	char z, k, m, l;
	
	
	// write your instructions here.
	
	// Arithmatic Operators
		// bi operator: (+,-,*,/,%)
		printf("Arithmatic operators bi operators (+,-,*,/,%) \n");
		// Summation operation
			sum = no_1 + no_2;
			printf("Summation equal to %d \n", sum);

		// Subtraction operation
			sub = no_1 - no_2;
			printf("Subtraction equal to %d \n", sub);

		// Multiplication operation
			multp = no_1 * no_2;
			printf("Multiplication equal to %d \n", multp);

		// Division operation
			div = no_1 / no_2;
			printf("Division 1/2 equal to %d \n", div);
			
		// Modulus (Remainder) operation
			rem = no_1 % no_2;
			printf("Remainder equal to %d \n \n", rem);
		
		// uni operators: Increment(++) and Decrement(--)
		printf("Arithmatic operators uni operators Increment(++) and Decrement(--) \n");
		// by same variable
			a = 15;
			a++;
			printf("Postfix (same var) is: %d \n", a);
			++a;
			printf("Prefix (same var) is: %d \n", a);
		
		// by other variable
			a = 15;
			b = a++; // assign a to b then increment a 
			printf("Postfix (other var) is: %d \n", b);
			b = ++a; // increment a then assign it to b
			printf("Prefix (other var) is: %d \n \n", b);
		
	// Bitwise Operators And, OR, XOR, Not
		printf("Bitwise Operators (& | ^ ~ << >>) \n");
		
		// And (&)
		z = x & y;
		printf("And result is %d \n", z);
		
		// OR (|)
		k = x | y;
		printf("OR result is %d \n", k);
		
		// XOR (^)
		m = x ^ y;
		printf("XOR result is %d \n", m);
		
		// Not (~)
		l = ~x;
		printf("Not result is %d \n", l);
		printf("shift left & right\n");
		
		// shift left
		x = 6;
		z = x<<2;
		printf("shift left by 2 to x = 6 is %d \n", z);
		
		// shift right
		x = 6;
		z = x>>2;
		printf("shift right by 2 to x = 6 is %d \n \n", z);
		
	// Assignment operators
	printf("Assignment Operators \n");
		// 1- Assign
		w = 20;
		printf("Assign result: %d \n", w);
		
		// 2- Add and Assign
		w += 2;
		printf("Add and Assign result: %d \n", w);
		
		// 3- Subtract and Assign
		w -= 1;
		printf("Subtract and Assign result: %d \n", w);
		
		// 4- Multiply and Assign
		w *= 2;
		printf("Multiply and Assign result: %d \n", w);
		
		// 5- Divide and Assign
		w /= 6;
		printf("Divide and Assign result: %d \n", w);
		
		// 6- Modulus (Remainder) and Assign
		w %= 3;
		printf("Modulus (Remainder) and Assign result: %d \n", w);
		
		// 7- And (&) and Assign
		w &=1;
		printf("And (&) and Assign result: %d \n", w);
		
		// 8- OR (|) and Assign
		w |=2;
		printf("OR (|) and Assign result: %d \n", w);
		
		// 9- XOR (^) and Assign
		w ^= 3;
		printf("XOR (^) andAssign result: %d \n", w);
		
		// 10- Shift left and Assign
		w <<= 1;
		printf("Shift left and Assign result: %d \n", w);
		
		// 11- Shift right and Assign
		w >>= 2;
		printf("Shift right and Assign result: %d \n", w);
		
	
}