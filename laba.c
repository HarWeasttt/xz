#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, n, x, p;
	p = 1;
	i = 0;
	printf("Enter n: ");
	while ((scanf_s("%d", &n) == 0)||(n < 1))
	{
		printf("Enter a positive integer number\nEnter n: ");
		while (getchar() != '\n')
			continue;
	}
	printf("Enter odd numbers\n");
	while (i < n)
	{
		while (scanf_s("%d", &x) == 0)
		{
			printf("Enter an integer number\n");
			while (getchar() != '\n')
				continue;
		}
		
		if (x % 2 == 1)
		{
			i++;
			p *= x;
		}
		
	}
	printf("Product is: %i", p);
}
