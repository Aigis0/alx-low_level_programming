#include "main.h" 

int wildcmp(char *s1, char *s2) {
  if (*s2 == '\0') {
    return (*s1 == '\0');
  } else if (*s2 == '*') {
    return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);
  } else {
    return (*s1 == *s2) && wildcmp(s1 + 1, s2 + 1);
  }
}
