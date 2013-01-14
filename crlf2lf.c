#include <stdio.h>
/*
#Take CRLF pairs and outputs LF only
#Single LF chars are left alone
#Single CR chars convert to LF
*/

int main(int argc, char **argv)
{
int c;
int had_cr;
	had_cr = 0;
	while((c = getchar()) != -1)
	{
		if(c == '\r') 
		{	putchar('\n');
			had_cr = 1;
		}
		else if(c == '\n' && had_cr == 1)
			had_cr = 0;
		else
		{	had_cr = 0;
			putchar(c);
		}
	}
	return 0;
}
