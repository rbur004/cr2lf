#include <stdio.h>
/*
#Take LFCR pairs and outputs LF only
#Some odd systems used LFCR line termination
#Single CR is output as LF
#Single LF is output as LF
*/

int main(int argc, char **argv)
{
int c;
int had_lf;
	had_lf = 0;
	while((c = getchar()) != -1)
	{
		if(c == '\n') 
		{	putchar('\n');
			had_lf = 1;
		}
		else if(c == '\r')
		{	if( had_lf == 1)
				had_lf = 0;
			else
				putchar('\n');
		}
		else
		{	had_lf = 0;
			putchar(c);
		}
	}
	return 0;
}
