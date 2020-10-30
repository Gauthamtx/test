#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

#define PIPEPATH "/tmp/targetpipe"

int main(void)
{
  char strfinal[200]; 
  int i;
  for(i = 0; i < 131; i++)
    memcpy(strfinal + i, "\x90", 1);
  writecmd(PIPEPATH, strfinal);
  return 0;
}
