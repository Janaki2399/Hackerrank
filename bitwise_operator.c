#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int Maximum_aANDb(int aANDb[], int n, int k);
int Maximum_aORb(int aORb[], int n, int k);
int Maximum_aEXORb(int aEXORb[], int n, int k);

int main() {
  int S[20]; // S is the sample space
  int n, k;  // n is the maximum number of elements in the sample space,k is an
            // element in n
  int a, b; // a and b are elements in the sample space
  int aANDb[50], aORb[50], aEXORb[50];

  // indexes for the arrays
  int p, q, r;
  int x = 1, l = 1, m = 1;
  int i, j;

  int maximum_aANDb, maximum_aORb, maximum_aEXORb;

 // printf("enter the maximum number in the sample space S ");
  scanf("%d", &n);
  //printf("enter a number less than n ");
  scanf("%d", &k);

  for (i = 1; i <= n; i++) {
    S[i] = i;
  }

  for (i = 1; i <= n; i++) {
    for (j = i + 1; j <= n; j++) {
      a = S[i];
      b = S[j];
      aANDb[x] = a & b;
      x++;
      aORb[l] = a | b;
      l++;
      aEXORb[m] = a ^ b;
      m++;
    }
  }

  /*printf("A&&B :\n");
  for (p = 1; p < x; p++) {
    printf("%d\n", aANDb[p]);
  }
  printf("\n");

  printf("A||B :\n");
  for (q = 1; q < l; q++) {
    printf("%d\n", aORb[q]);
  }
  printf("\n");

  printf("A^B : \n");
  for (r = 1; r < m; r++) {
    printf("%d\n", aEXORb[r]);
  }
  printf("\n");*/

  maximum_aANDb = Maximum_aANDb(
      aANDb, n, k); // to find the maximum number in the array aANDb
  printf("%d\n", maximum_aANDb);

  maximum_aORb =
      Maximum_aORb(aORb, n, k); // to find the maximum number in the array aORb
  printf("%d\n", maximum_aORb);

  maximum_aEXORb = Maximum_aEXORb(
      aEXORb, n, k); // to find the maximum number in the array aEXORb
  printf("%d\n", maximum_aEXORb);
}

int Maximum_aANDb(int aANDb[], int n, int k) {
  int maximum = 0;
  int i;
  int m = 2 * n;
  for (i = 1; i <= m; i++) {
    if (aANDb[i] > maximum && aANDb[i] < k) {
      maximum = aANDb[i];
    }
  }
  return maximum;
}

int Maximum_aORb(int aORb[], int n, int k) {
  int maximum = 0;
  int i;
  int m = 2 * n;
  for (i = 1; i <= m; i++) {
    if (aORb[i] > maximum && aORb[i] < k) {
      maximum = aORb[i];
    }
  }
  return maximum;
}

int Maximum_aEXORb(int aEXORb[], int n, int k) {
  int maximum = 0;
  int i;
  int m = 2 * n;
  for (i = 1; i <= m; i++) {
    if (aEXORb[i] > maximum && aEXORb[i] < k) {
      maximum = aEXORb[i];
    }
  }
  return maximum;
}
