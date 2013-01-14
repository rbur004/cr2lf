#include <stdio.h>

int main(int argc, char **argv)
{
int c;
	while((c = getchar()) != -1)
	{
		if(c == '\n') putchar('\r');
		putchar(c);
	}
	return 0;
}
