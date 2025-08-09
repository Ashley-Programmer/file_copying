#include <stdio.h>

// copy input to output

int main(void)
{
	int c;

	c = getchar();
	while (c != EOF) { // while (charater is not end-of-file indicator)
		putchar(c); //  output the character just read
		c = getchar(); // read a character
	}

	return 0;
}