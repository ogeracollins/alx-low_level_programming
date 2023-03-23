#include "main.h"

int main(void)
{
	print_numbers();
	return (0);
}

void print_numbers(void)
{
        int i;

	i = 0;
 
        while (i < 10)
        {
                _putchar(i);
                i++;
        }
        _putchar('\n');
}
