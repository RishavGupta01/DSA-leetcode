#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize) {
    int n = numsSize;

     for(int i=0; i<n-1;i++){
        for(int j=0; j<n-1-i;j++){
            if(nums[j]>nums[j+1]){
                int temp= nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
            else{
                if(nums[j]==nums[j+1]){
                    return true;
                }
            }

        }
     }
     return false;
}