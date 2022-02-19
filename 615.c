#include <stdio.h>

struct student {
  char name[20];
  int score[2];
};

int main()
{
  struct student s1;
  struct student s2;
  scanf("%s %d %d", s1.name, &s1.score[0], &s1.score[1]);
  scanf("%s %d %d", s2.name, &s2.score[0], &s2.score[1]);
  int avg[2] = {s1.score[0] + s1.score[1] / 2,
    s2.score[0] + s2.score[1] / 2};
  printf("%s %d %d\n%s %d %d\navg %d %d",
    s1.name, s1.score[0], s1.score[1],
    s2.name, s2.score[0], s2.score[1],
    avg[0], avg[1]);
  return 0;
}
