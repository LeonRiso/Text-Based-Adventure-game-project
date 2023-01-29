#include <iostream>
#include <cstring>
#include "parsexec.h"
#include "parsexec.cpp"
#include "locations.cpp"
#include "locations.h"


static char input[100] = "look Around";

static bool getInput(void)
{
	printf("\n What do you do: ");
	return fgets(input, sizeof input, stdin) != NULL;
}

int main()
{
	printf("Welcome to the spooky cave \n");
	printf("It is humid, dank, dark and you can barely see \n ");
	while (parseAndExecute(input) && getInput());
   	printf("\nBye!\n");
   	return 0;
}
