include <stdio.h>
struct st
{
  int a;
  int b;
};
struct st foo = {1,2};
struct st bar = {3,4};

int
main(void)
{
  struct st *p= &foo;
  printf("p->a is %d\n", p->a);
  p = &bar;
  printf("p->b is %d\n", p->a);
  return 0;
}
