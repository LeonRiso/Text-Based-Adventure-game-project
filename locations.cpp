#include <cstring>
#include <iostream>

struct location {
    const char *description;
    const char *tag;
}

locs[] = {
    {"an open field", "field"},
    {"a little cave","cave"}
};

#define numberOfLocations (sizeof locs / sizeof *locs)

static unsigned locationOfPlayer = 0;

void executeLook (const char *noun)
{
    if (noun != NULL && strcmp(noun, "around") == 0){
        printf("you are in %s .\n",locs[locationOfPlayer].description);
    }
    else{
        printf("I dont understand \n");
    }
}


void executeGo(const char *noun)
{
   unsigned i;
   for (i = 0; i < numberOfLocations; i++)
   {
      if (noun != NULL && strcmp(noun, locs[i].tag) == 0)
      {
         if (i == locationOfPlayer)
         {
            printf("You can't get much closer than this.\n");
         }
         else
         {
            printf("OK.\n");
            locationOfPlayer = i;
            executeLook("around");
         }
         return;
      }
   }
   printf("I don't understand where you want to go.\n");
}