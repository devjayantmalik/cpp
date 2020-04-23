#include <iostream>


int main(){
    // Arrays : 1, 2, 3, 4....10
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // access elements of array
    std::cout << nums[0] << std::endl;
    std::cout << nums[1] << std::endl;
    
    // change elements of array
    nums[0] = 10;
    std::cout << nums[0] << std::endl;
    
    int nums2[] = {1, 2, 3, 4, 5};
    
    // find size of element or variable
    int num = 10;
    std::cout << "Size taken by 10 in memory: " << sizeof(num) << std::endl;
    
    // length of an array
    int len = sizeof(nums2) / sizeof(nums2[0]);
    std::cout << "Length of nums2 : " << len << std::endl;
    
    // null arrays
    int nums3[0];
    int len2 = sizeof(nums3) / sizeof(nums3[0]);
    std::cout << "Length of nums2 : " << len2 << std::endl;
    
    // multidimensional arrays
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };
    
    std::cout << matrix[0][0] << std::endl;
    
    
    
    return 0;
}
