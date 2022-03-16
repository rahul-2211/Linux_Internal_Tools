//memmove
#include<stdio.h>
#include<string.h>

int
main ()
{
  char dest[] = "oldstring";
  char src[] = "newstring";
  char buf2[10];
  int ret;

  printf ("before memmove dest=%s ,src=%s\n", dest, src);
  memmove (dest, src, 5);
  printf ("before memmove dest=%s ,src=%s\n", dest, src);


  return 0;
}

