#include <stdio.h>
#define ARRSIZE 3
int singleNumber(int* nums, int numsSize){
    int n = nums[0];
    for(int i = 1; i < numsSize ;i++)
    {
        n = n ^ nums[i];
    }
     return n;
}
int main(void) {
  int arr[ARRSIZE] = {2,2,1};
  int ans = singleNumber(arr, ARRSIZE);
  printf("ans = %d \n",ans);
  return 0;
}
