#include <stdio.h>

int main()
{
	int i = 132;

	int first_digit = i / 100;
	printf("first digit is %d\n", first_digit);

	int second_digits = i % 100;
	int second_digit = second_digits / 10;
	printf("the second digits are %d and second_digit is %d\n", second_digits, second_digit);
	int last_digit = second_digits % 10;
	printf("last digit %d\n", last_digit);
	return 0;
}
