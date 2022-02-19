#include <stdio.h>

typedef struct student {
  char name[20];
  int score[2];
} student;

int avg(int x, int y)
{
  int avg = (x + y) / 2;
  return avg;
}

void get(student *s)
{
  scanf("%s %d %d", s->name, &s->score[0], &s->score[1]);
}

int main()
{
  student s1;
  student s2;
  get(&s1);
  get(&s2);
  printf("%s %d %d\n%s %d %d\navg %d %d\n",
    s1.name, s1.score[0], s1.score[1],
    s2.name, s2.score[0], s2.score[1],
    avg(s1.score[0], s2.score[0]),
    avg(s1.score[1], s2.score[1]));
  return 0;
}
