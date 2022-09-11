#include <iostream>
#include <string>
#include "parsexec.h"

static char input[100] = "look around";

static bool getInput(void)
{
   printf("\n do something sicko -->");
   return fgets(input, sizeof input, stdin) !=NULL;
}

int main()
{
   printf("Welcome to Little Cave Adventure.\n");
   printf("It is very dark in here.\n");
   while (parseAndExecute(input) && getInput());
   printf("\nBye!\n");
   return 0;
}