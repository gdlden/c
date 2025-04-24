int removeDuplicates(int* nums, int numsSize) {
    int tempNumbers[40000];
    for (int i=0; i<40000; i++) {
        tempNumbers[i] = 0;
    }
    for (int i=0; i<numsSize; i++) {
        if(tempNumbers[nums[i]]!=0) {
            
        } else {
        tempNumbers[nums[i]]++;
        }
    }
}