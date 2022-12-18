#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 Success
 *
 */

int main() 
{
	int i = 1;

	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			    printf(" FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			    printf(" Buzz ");
		}
		else if(i % 3 == 0)
		{
			    printf(" Fizz ");
		}
		else
		{
			    printf(" %d ", i);
		}
		
		i++;
	}
		
		return (0);
}
