#include <stdio.h>

int main(void)
{
	int i;
	i=97;
	while(i<=122)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
© 2022 GitHub, Inc.
Terms
Privacy
