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

// Generates random numbers
std::vector<int> generateRandomData(int size, int maxVal)
{
    std::vector<int> data;
    data.reserve(size);
    for (int i = 0; i < size; ++i)
        data.push_back(rand() % maxVal);
    return data;
}

// TODO: Count duplicates using Nested Loops (The SLOW way)
// Returns the count of the specific targetID
int countSlow(const std::vector<int> &data, int targetID)
{
    int count = 0;
    // Iterate through 'data' and increment count every time you see targetID

    // YOUR CODE HERE
    return count;
}

// TODO: Count duplicates using a Map (The FAST way)
// Returns a map where Key = ID, Value = Count
std::unordered_map<int, int> countFast(const std::vector<int> &data)
{
    std::unordered_map<int, int> counts;
    // Iterate through 'data' once. Use counts[id]++

    // YOUR CODE HERE
    return counts;
}

int main()
{
    Timer timer;

    std::cout << "--- FREQUENCY ANALYSIS ---\n";
    // We use smaller data for the slow test, or it takes forever!
    std::vector<int> salesData = generateRandomData(20000, 500); // 20k items

    std::cout << "Dataset size: " << salesData.size() << " items.\n";

    // Test Slow Approach (Nested Loop simulation)
    // We will try to find the count for just ONE item
    timer.reset();
    int targetSale = salesData[0];
    int countS = countSlow(salesData, targetSale);
    std::cout << "Slow Count (finding 1 item): " << timer.elapsed() << " ms\n";

    // Test Fast Approach (Map)
    // This builds the count for ALL items at once
    timer.reset();
    std::unordered_map<int, int> mapCounts = countFast(salesData);
    std::cout << "Fast Count (indexing ALL items): " << timer.elapsed() << " ms\n";

    // Verify
    std::cout << "Verification: ID " << targetSale << " appears " << mapCounts[targetSale] << " times.\n";

    return 0;
}