#include <stdio.h>
int main()
{
	if (false)
		;
	{
		//Part of a new "block" and but not part of the if statement because it's done as soon as  ; is used. 
		printf("This text won't be shown.\n");
	}
}
