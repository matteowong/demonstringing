#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* strcmp and strncmp (string compare)
 * int strcmp(char *s1, char *s2);
 * compares two null-terminated strings lexographically (alphabetically)
 * int strncmp(char *s1, char *s2, int count);
 * compares, lexographically, two strings but only at maximum count characters

 * for both functions:
 * negative value if first parameter comes first
 * 0 if equal
 * positive value if second parameter comes first
 */


void test_strcmp(char *s1, char *s2) {
  int comp_val=strcmp(s1,s2);
  if (comp_val>0) 
    printf("\t\"%s\" follows \"%s\"\n",s1,s2);
  else if (comp_val<0)
    printf("\t\"%s\" precedes \"%s\"\n",s1,s2);
  else
    printf("\t\"%s\" equals \"%s\"\n",s1,s2);
}

void test_strncmp(char *s1, char *s2, int count) {
  int comp_val=strncmp(s1,s2,count);
  if (comp_val>0) 
    printf("\tFirst %d characters of \"%s\" follow first %d characters of \"%s\"\n",count,s1,count,s2);
  else if (comp_val<0)
    printf("\tFirst %d characters of \"%s\" precede first %d characters of \"%s\"\n",count,s1,count,s2);
  else
    printf("\tFirst %d characters of \"%s\" equal first %d characters of  \"%s\"\n",count,s1,count,s2);
}

int main() {

  test_strcmp("mao zedong","mussolini");
  test_strcmp("mao zedong","mao zedong");
  test_strcmp("mao zedong","kim jong uhn");
  test_strncmp("stalin","santa",1);
  test_strncmp("stalin","santa",3);
  test_strncmp("magician","magical",6);


  return 0;
}

