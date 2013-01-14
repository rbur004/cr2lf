#include <stdio.h>

int main(int argc, char **argv)
{
int c;
	while((c = getchar()) != -1)
	{
		if(c == '\n') c = '\r';
		putchar(c);
	}
	return 0;
}
