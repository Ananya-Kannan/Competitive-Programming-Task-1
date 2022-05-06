#include <stdio.h>
int main() {
   char str[] = "A string.";
   char *p=str;
   printf("%c %p %c",str[0],*p,p[3]);
   return 0;
}
