#include <stdio.h>
#include <stdlib.h>

int compare(const void *x, const void *y)
{
  return *(int*)x - *(int*)y;
}

int main()
{
  int n;
  scanf("%d",&n);
  int *p = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
  {
    scanf(" %d", &p[i]);
  }
  qsort(p, n, sizeof(int), compare);
  int max = p[n - 1], min = p[0];
  printf("max : %d\nmin : %d\n", max, min);
  return 0;
}
