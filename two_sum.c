int* twoSum(int* nums, int numsSize, int target, int* returnSize) {//brute force approach
    int* arr = (int*)malloc(2* sizeof(int));
    *returnSize=2;

    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                arr[0]=i;
                arr[1]=j;
                return arr;
            }
        }
    }
    return arr;
}