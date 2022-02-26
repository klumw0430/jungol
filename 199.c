#include <stdio.h>

typedef struct student {
  char name[21];
  int ko;
  int math;
  int en;
  int sum;
}student;

int main()
{
  int num , i, j;
  scanf("%d", &num);
  student a[num] , tmp;

  for ( i = 0; i < num; i++)
  {
    scanf("%s %d %d %d", a[i].name, &a[i].ko, &a[i].math, &a[i].en);
    a[i].sum = a[i].ko + a[i].math + a[i].en;
  }

  for ( i = 0; i < num; i++)
  {
    for ( j = i; j < num; i++)
    {
      if ( a[i].sum < a[j].sum)
      {
        tmp = a[i];
        a[i] = a[j];
	a[j] = tmp;
      }
    }
  }
  for ( i = 0; i < num; i++)
  {
    printf("%s %d %d %d %d\n",
      a[i].name, a[i].ko, a[i].math, a[i].en, a[i].sum);
  }
  return 0;
}
