#include <stdio.h>
#include <string.h>

int i, j, m, n, LCS_t[50][50];
char S1[50] = "catcat", S2[50] = "tgrcat", b[50][50];

  void lcsAlgo(){
  m = strlen(S1);
  n = strlen(S2);
  for (i = 0; i <= m; i++)
  LCS_t[i][0] = 0;
  for (i = 0; i <= n; i++)
  LCS_t[0][i] = 0;

  for (i = 1; i <= m; i++)
  for (j = 1; j <= n; j++) {
      if (S1[i - 1] == S2[j - 1]) {
        LCS_t[i][j] = LCS_t[i - 1][j - 1] + 1;
      } else if (LCS_t[i - 1][j] >= LCS_t[i][j - 1]) {
        LCS_t[i][j] = LCS_t[i - 1][j];
      } else {
        LCS_t[i][j] = LCS_t[i][j - 1];
      }
    }
  int index = LCS_t[m][n];
  char lcsAlgo[index + 1];
  lcsAlgo[index] = '\0';

  int i = m, j = n;
  while (i > 0 && j > 0) {
    if (S1[i - 1] == S2[j - 1]) {
      lcsAlgo[index - 1] = S1[i - 1];
      i--;
      j--;
      index--;
    }
    else if (LCS_t[i - 1][j] > LCS_t[i][j - 1])
      i--;
    else
      j--;
  }
  printf("S1 : %s \nS2 : %s \n", S1, S2);
  printf("DNA Most Match: %s", lcsAlgo);
}
  int main() {
  lcsAlgo();
}
