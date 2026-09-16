Based on the C++ code shown in the images (group_asssignment1.cpp), here is the breakdown of the assignment documentation.

1. Task Requirements
The program computes statistics for a collection of floating-point numbers (double) using functions in C++. Specifically, it requires:
Sum: Calculate the total of all elements in the dataset.
Mean: Calculate the arithmetic average.
Median: Calculate the middle value of the dataset (averaging the two middle elements if the dataset size is even).
Min: Find the smallest value in the dataset.
Max: Find the largest value in the dataset.
Also safely handle empty datasets (returning 0 for mean/median to avoid division by zero).


2. Implementation Strategy
The solution breaks down statistical operations into helper functions that work on dynamic arrays.
Pass-by-Reference: Pass vectors using... const vector<double>&arr... to avoid unnecessary memory copying for get_sum, get_mean, get_min, and get_max.
Pass-by-Value for Sorting: Pass the vector by value in get_median using... vector<double> arr... so that sorting inside the function does not modify the original data order in main().
Loop Iteration: Utilize C++ range-based for loops... for (double num : arr)... to cleanly iterate through element values without managing explicit array indices.

3. Key Decisions & Approaches
Median Calculation Logic: First sorts the vector with... sort... For an even number of elements (n \% 2 == 0), it takes the average of elements at index (n/2 - 1) and n/2. For an odd number of elements (n \% 2 != 0), it picks the single middle element at index n/2.
Min/Max Initialization: Initializes tracking variables min_val and max_val directly to arr[0] rather than using arbitrary constant limits (e.g., INT_MAX), ensuring correctness regardless of range.
Zero-Division Prevention: Checks if (arr.empty()) return 0; inside get_mean and get_median to prevent runtime division-by-zero crashes.

4. How the Solution Was Tested
The code was compiled and executed using the driver dataset initialized in main() as;
vector <double> data={12.5,4.2,9.8,15.1,7.3,2.0};
Testing Procedure
Manual Math Verification: Calculated expected outputs by hand:
Sorted Set: {2.0, 4.2, 7.3, 9.8, 12.5, 15.1} (N = 6)
Sum: 12.5 + 4.2 + 9.8 + 15.1 + 7.3 + 2.0 = 50.9
Mean: 50.9 / 6 which is approximately 8.48333
Median: Average of middle elements 7.3 and 9.8 which is (7.3 + 9.8) / 2 = 8.55
Min: 2.0
Max: 15.1
Execution Verification: Run main() via standard standard C++ output streams 
(cout) to ensure the console values matched the manual calculations.
5. Working Example
Standard Input
The dataset initialized directly in the code:
vector<double> data = {12.5, 4.2, 9.8, 15.1, 7.3, 2.0}; 
Program Output
Sum: 50.9 
Mean: 8.48333 
Median: 8.55 
Min: 2 
Max: 15.1 
