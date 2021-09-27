/********************** resword.h ******************/
#include <stdlib.h>
#define RESWORDMAX 16
char reswords[RESWORDMAX][10] =
    {
        "BEGIN", "CALL", "CONST", "DO", "END", "IF", "PROCEDURE",
        "PROGRAM", "READ", "THEN", "VAR", "WHILE", "WRITE", "MOD", "DIV", "ELSE"};
int isResword(char *s)
{
  int i;
  for (i = 0; i < RESWORDMAX; i++)
  {
    if (strcmp(s, reswords[i]) == 0)
    {
      //printf("reserved: %d\n", i);
      return i;
    }
  }
  return -1;
}
