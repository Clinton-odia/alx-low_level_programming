#include <stdio.h>
/**
 * main - prints the size of various data type
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d bytes(s)", sizeof(char));
	printf("Size of an int: %d bytes(s)", sizeof(int));
	printf("Size of a long: %d bytes(s)", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)", sizeof(long long int));
	printf("Size of a float: %d bytes(s)", sizeof(float));
	return (0);
}
