/*************************** symbol.h *********************/
#include <stdio.h>
#include <stdlib.h>
struct symbolTag
{
  int sym;		//字符編號
  int left;		//記錄符記字串在原始程式裡的列數
  int right;		//記錄符記字串在原始程式裡該列的開始行數
  char value[36];		//記錄符記字串等資料
} symbol;
struct symbolTag *newSymbol(int sym, int left,
                            int right, char *value)
{
  struct symbolTag *p=malloc(sizeof(symbol));
  p->sym = sym;
  p->left = left;
  p->right = right;
  strcpy(p->value, value);
  return p;
}
char *symbolToString(struct symbolTag *p)
{
  static char str[256]="OK";
  sprintf(str,"sym=%d left=%d right=%d value=\"%-s\"",
          p->sym, p->left, p->right, p->value);
  return str;
}
