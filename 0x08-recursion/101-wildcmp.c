#include <stdio.h>

int wildcmp(char *s1, char *s2) {
  if (*s2 == '\0') {
    return (*s1 == '\0');
  } else if (*s2 == '*') {
    return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);
  } else {
    return (*s1 == *s2) && wildcmp(s1 + 1, s2 + 1);
  }
}

int main() {
  int r;

  r = wildcmp("main.c", "*.c");
  printf("%d\n", r);
  r = wildcmp("main.c", "m*a*i*n*.*c*");
  printf("%d\n", r);
  r = wildcmp("main.c", "main.c");
  printf("%d\n", r);
  r = wildcmp("main.c", "m*c");
  printf("%d\n", r);
  r = wildcmp("main.c", "ma********************************c");
  printf("%d\n", r);
  r = wildcmp("main.c", "*");
  printf("%d\n", r);
  r = wildcmp("main.c", "***");
  printf("%d\n", r);
  r = wildcmp("main.c", "m.*c");
  printf("%d\n", r);
  r = wildcmp("main.c", "**.*c");
  printf("%d\n", r);
  r = wildcmp("main-main.c", "ma*in.c");
  printf("%d\n", r);
  r = wildcmp("main", "main*d");
  printf("%d\n", r);
  r = wildcmp("abc", "*b");
  printf("%d\n", r);
  return (0);
}
