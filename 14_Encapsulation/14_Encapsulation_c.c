#include <stdio.h>

#define MAX_NAME_LEN 20
typedef struct Unit Unit;

struct Unit
{
  int num;
  char name[MAX_NAME_LEN];
  int hp;
};

void Train(Unit *unit, int hour)
{
  printf("%d번 유닛(%s) 훈련하다.\n", unit->num, unit->name);
  unit->hp += hour;
}

int main(void)
{
  Unit unit = {3, "홍길동", 100};
  Train(&unit, 5);
  printf("%d번, 유닛 이름:%s, 체력:%d\n", unit.num, unit.name, unit.hp);
  unit.hp += 1000;
  printf("%d번, 유닛 이름:%s, 체력:%d\n", unit.num, unit.name, unit.hp);
  return 0;
}
