//#include <print> //C++ 20 only, file not found, as Clang 8 C++17
//#include <string> // not needed now
//#include <iostream> // not needed now
//#include <limits> // not needed now

// function prototype declarations
int GetVectorSize(std::vector<int> arr);

/*
** int s are signed by default so
** the all the integer array items in vector<int>
** are signed int
** therefore in bit wise operations assume singed int
*/
int FindOutlier(std::vector<int> arr)
{
    int result; // the reuturn value
    int arr_size; // the size of the array.
    int even_count; // to test to see if list is even or odd
    
    arr_size = GetVectorSize(arr); // return the number of array elements
    // std::cout << "vector num or elements? is " << arr_size << "\n"; // debug
    
    // instantiate the even_count to 0 or unexpected values are set.
    even_count = 0;
  
    // for the first three numbers, to check list even or odd
    // to set outlier test  
    for (int i = 0; i < 3; i++) {
      int number = arr[i]; 
      // get the first bit, if 1 odd, if 0 even
      // not important to test if its negative or positive
      unsigned int test_bit = 0x1 & number; 
      //std::cout << "first number? is " << number << std::endl; // debug
      //std::cout << "first bit? is " << test_bit << std::endl; // debug
      // the number is even if its first bit is 0
      if (test_bit == 0) {
        even_count++; // increment to count of even numbers by one
      }
    }
  
    //std::cout << "even count? is " << even_count << std::endl; // debug
  
    bool outlier_even = true;
    int iter_limit = 0;
    
    if (even_count == 3) { // the list is even
      // we did not find the odd item, we have go through the entire array until found
      outlier_even = false; // we will will have test for an odd number as outlier
      iter_limit = arr_size;
    } else if (even_count == 2) { // the list is even
      // we did find the odd item, we only have to go through the first three elements
      outlier_even = false; // we will will have test for an odd number as outlier
      iter_limit = 3;
    } else if (even_count == 1) { // the list is odd
      // we did find the even item, we only have to go through the first three elements
      // outlier_even = true; // is already set as the default
      iter_limit = 3;
    } else if (even_count == 0) { // this list is odd
      // we did not find the even item, we have go through the entire array until found
      // outlier_even = true; // is already set as the default
      iter_limit = arr_size;
    }
  
    // the test, finnally
    int i; // to test later for break
    for (i = 0; i < iter_limit; i++) {
      if (outlier_even && ((0x1 & arr[i]) == 0)) {
        result = arr[i];
        break; // we found the item, stop looping
      } else if (!outlier_even && ((0x1 & arr[i]) == 1)) {
        result = arr[i];
        break; // we found the item, stop looping
      }
    }
  
    // break works! i is lower than the arr_size in simple tests
    //std::cout << "i is " << i << ", arr size is " << arr_size << std::endl; // debug
  
    //result = arr_size;
    return result;
}

/*
** return the number of integers items stored in
** the paramater std::vector<int> arr 
**
*/
int GetVectorSize(std::vector<int> arr) {
  
  int result; // the return value
  int arr_size; // the size of the array.
  
  // tried lots of more verbose things before this
  // this simple statement could be moved to main function
  // but seperate function required a function declaration
  // which I had forgotten about, so leaving as is
  arr_size = arr.size();
  result = arr_size; //purposely instantiate the result
  
  return result;
  
}