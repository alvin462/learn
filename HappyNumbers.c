#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/*
Input 20
2*2 +0*0  => 4
4*4       => 16
1*1 + 6*6 => 37
........etc
4*4+2*2   => 20 
cycle detection
*/
int next_num(int n)
{
    int result = 0;
    while(n != 0)
    {
        int d = n%10;
        n = n/10;
        result += d*d;
    }
    return result;
}

bool isHappy(int n)
{
    int fast = n;
    int slow = n;
    do 
    {
        fast = next_num(next_num(fast));
        slow = next_num(slow);
    }while (fast != slow);
    return fast == 1;
}
int main(void) {
  int num = rand() % 100;
  bool ans = isHappy(num);
  printf("ans = %d \n",ans);
  return 0;
}
