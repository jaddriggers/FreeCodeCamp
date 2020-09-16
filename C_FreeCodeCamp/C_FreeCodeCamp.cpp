
// Building a better Calculator using if and else if
// https://www.youtube.com/watch?v=KJgsSFOSQv0&list=PL_z0e98vIDN_0zeN2UFglCAGyUyaLekm_&index=2&t=7569s

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	double num1;
	double num2;
	char op;

	printf("Enter a number: ");
	scanf_s("%lf", &num1);
	printf("Enter operator: ");
	scanf_s(" %c", &op, 1);
	printf("Enter a number: ");
	scanf_s("%lf", &num2);

	if (op == '+') {
		printf("%f", num1 + num2);
	}
	else if (op == '-') {
		printf("%f", num1 - num2);
	}
	else if (op == '/') {
		printf("%f", num1 / num2);
	}
	else if (op == '*') {
		printf("%f", num1 * num2);
	}
	else {
		printf("Invalid operator");
	}
	return 0;
}

//Switch Statements
