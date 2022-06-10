#include <stdio.h>
#include <string.h>
int check_subsequence (char [], char[]);

int main () {
  int t;
  char s1[1000]="heidi", s2[1000];

  gets(s2);



  if (strlen(s1) < strlen(s2))
    t = check_subsequence(s1, s2);
  else
    t = check_subsequence(s2, s1);

  if (t)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}

int check_subsequence (char a[], char b[]) {
  int c, d;

  c = d = 0;

  while (a[c] != '\0') {
    while ((a[c] != b[d]) && b[d] != '\0') {
      d++;
    }
    if (b[d] == '\0')
      break;
    d++;
    c++;
  }
  if (a[c] == '\0')
    return 1;
  else
    return 0;
}