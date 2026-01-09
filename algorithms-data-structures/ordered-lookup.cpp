#include <iostream>
#include <vector>
#include <algorithm>     // For std::sort
#include <chrono>        // For timing
#include <cstdlib>       // For rand()
#include <unordered_map> // For the "Fast" solution

class Timer
{
    std::chrono::high_resolution_clock::time_point start;

public:
    Timer() { reset(); }
    void reset() { start = std::chrono::high_resolution_clock::now(); }
    double elapsed()
    {
        auto end = std::chrono::high_resolution_clock::now();
        return std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    }
};

// Generates a sorted list of numbers (0 to size)
std::vector<int> generateSortedData(int size)
{
    std::vector<int> data;
    data.reserve(size);
    for (int i = 0; i < size; ++i)
        data.push_back(i);
    return data;
}

// TODO: Implement Linear Search
// Iterate through the vector one by one. Return true if found.
bool linearSearch(const std::vector<int> &data, int target)
{
    // YOUR CODE HERE
    return false; // placeholder
}

// TODO: Implement Binary Search
// Divide and conquer. Return true if found.
bool binarySearch(const std::vector<int> &data, int target)
{
    // Hint: Use indices 'left', 'right', and 'mid'
    // Remember: int mid = left + (right - left) / 2;

    // YOUR CODE HERE
    return false; // placeholder
}

int main()
{
    Timer timer;

    std::cout << "--- SEARCHING 10,000,000 ITEMS ---\n";
    std::vector<int> sortedData = generateSortedData(10000000);
    int target = 9999999; // Worst case scenario (at the end)

    // Test Linear Search
    timer.reset();
    bool foundLinear = linearSearch(sortedData, target);
    std::cout << "Linear Search: " << timer.elapsed() << " ms "
              << (foundLinear ? "(Found)" : "(Not Found)") << "\n";

    // Test Binary Search
    timer.reset();
    bool foundBinary = binarySearch(sortedData, target);
    std::cout << "Binary Search: " << timer.elapsed() << " ms "
              << (foundBinary ? "(Found)" : "(Not Found)") << "\n";
    return 0;
}