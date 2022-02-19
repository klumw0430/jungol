#include <stdio.h>

struct student {
  char name[20];
  int score[2];
};

int avg(int x, int y)
{
  int avg = (x + y) / 2;
  return avg;
}

int main()
{
  struct student s1;
  struct student s2;
  scanf("%s %d %d", s1.name, &s1.score[0], &s1.score[1]);
  scanf("%s %d %d", s2.name, &s2.score[0], &s2.score[1]);
  printf("%s %d %d\n%s %d %d\navg %d %d\n",
    s1.name, s1.score[0], s1.score[1],
    s2.name, s2.score[0], s2.score[1],
    avg(s1.score[0], s2.score[0]),
    avg(s1.score[1], s2.score[1]));
  return 0;
}
