#include <stdio.h>
#include <string.h>

int func(char *str){
   char buffer[10];
   unsigned short len = strlen(str);

   if(len >= 10){
        return -1;
   }

   strncpy(buffer, str, strlen(str));
   return 0;
}

int main(void) {

	char c[] = "ijoadwadwadwadwadwa";

	int i = 0;
	i = func(c);

	return 0;
}
