# C-aggregation-op.
C++ agregation operations with &lt;algorithm> lib

# C++ Aggregation Operations with `<algorithm>` Library

This C++ program demonstrates basic aggregation operations (finding minimum, maximum, sum, average, and median) on a randomly generated list of numbers using the `<algorithm>` library. It's a simple example designed to help beginners understand how to use these powerful tools in C++.

## What the Code Does

The program performs the following steps:

1.  **Initialization:**
    * Includes necessary header files for input/output, vectors, algorithms, random number generation, and time.
    * Seeds the random number generator to ensure different random numbers each time the program runs.
    * Creates a `vector` named `nums` to store 20 integers.

2.  **Random Number Generation:**
    * Uses a range-based `for` loop to fill the `nums` vector with 20 random integers between 1 and 100 (inclusive).

3.  **Displaying the Unsorted List:**
    * Prints the contents of the `nums` vector before any operations are performed, showing the initial random order.

4.  **Finding Minimum and Maximum Elements:**
    * Utilizes `std::min_element` and `std::max_element` from the `<algorithm>` library to find the smallest and largest elements in the `nums` vector, respectively.
    * Dereferences the iterators returned by these functions to get the actual minimum and maximum values.

5.  **Calculating Sum and Average:**
    * Iterates through the `nums` vector to calculate the sum of all elements.
    * Calculates the average by dividing the sum by the number of elements, ensuring a `double` result for precision.

6.  **Sorting the List:**
    * Employs `std::sort` from the `<algorithm>` library to sort the `nums` vector in ascending order.

7.  **Calculating the Median:**
    * Determines the median (middle value) of the sorted list.
    * Handles both even and odd-sized lists correctly:
        * For even-sized lists, it averages the two middle values.
        * For odd-sized lists, it takes the single middle value.

8.  **Displaying Results:**
    * Prints the calculated minimum, maximum, sum, average, and median to the console.

## Code Breakdown

```cpp
#include <iostream>  // Input/output operations
#include <vector>    // Dynamic arrays
#include <algorithm> // Sorting, min/max operations
#include <cstdlib>   // Random number generation
#include <ctime>     // Time functions

using namespace std;

int main() {
    srand(time(0)); // Seed random number generator

    vector<int> nums(20); // Create a vector of 20 integers

    // Generate random numbers
    for (int& num : nums) {
        num = rand() % 100 + 1;
    }

    // Display unsorted list
    cout << "Unsorted: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Find min and max
    int minNum = *min_element(nums.begin(), nums.end());
    int maxNum = *max_element(nums.begin(), nums.end());

    // Calculate sum and average
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    double avg = sum / (double)nums.size();

    // Sort the vector
    sort(nums.begin(), nums.end());

    // Calculate median
    double med = 0;
    int n = nums.size();
    if (n % 2 == 0) {
        med = (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
    } else {
        med = nums[n / 2];
    }

    // Display results
    cout << "Min: " << minNum << endl;
    cout << "Max: " << maxNum << endl;
    cout << "Sum: " << sum << endl;
    cout << "Avg: " << avg << endl;
    cout << "Median: " << med << endl;

    return 0;
}
