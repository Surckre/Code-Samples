#define _CRT_SECURE_NO_WARNINGS // needed if u compile in vs2022
#include <stdio.h>

int main() {
	double num1;
	double num2;
	char opr;

	printf("Enter first Number: ");
	scanf("%lf", &num1);

	printf("Enter Operator: ");
	scanf(" %c",&opr);

	printf("\nEnter second Number: ");
	scanf("%lf",&num2);

	if (opr == '+') {
		double res = num1 + num2;
		printf("%.2lf", res);
		
	}
	else if (opr == '-') {
		double res = num1 - num2;
		printf("%.2lf", res);
		
	}
	else if (opr == '*') {
		double res = num1 * num2;
		printf("%.2lf", res);
		
	}
	else if (opr == '/') {
		double res = num1 / num2;
		printf("%.2lf", res);
	}
	else {
		printf("The operator %c is not valid",opr);
	}
}
