// Program for Binary Search
// Only searches in Sorted arrays

#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector <int>& nums, int key){
    int high,low,mid;
    low = 0;
    high = nums.size()-1;
    while(high>=low){
        mid = (low+high)/2;
        if(nums[mid] == key)
            return mid;
        else if(key < nums[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main(){

    return 0;
}