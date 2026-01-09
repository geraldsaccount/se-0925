#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <chrono>
#include <cstdlib>

// ==========================================
// DATA STRUCTURES
// ==========================================

struct User
{
    int id;
    std::string name;
};

struct Transaction
{
    int transactionId;
    int userId; // The Foreign Key linking to User
    double amount;
};

// ==========================================
// UTILITIES (Timer & Generators)
// ==========================================

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

std::vector<User> generateUsers(int count)
{
    std::vector<User> users;
    for (int i = 0; i < count; ++i)
    {
        users.push_back({i, "User_" + std::to_string(i)});
    }
    return users;
}

std::vector<Transaction> generateTransactions(int count, int userCount)
{
    std::vector<Transaction> transactions;
    for (int i = 0; i < count; ++i)
    {
        // Randomly assign this transaction to a user
        transactions.push_back({i, rand() % userCount, (rand() % 10000) / 100.0});
    }
    return transactions;
}

// ==========================================
// THE CHALLENGE
// ==========================================

// CHALLENGE A: The "Naive" Approach (Nested Loops)
// For each user, loop through ALL transactions to count theirs.
// Returns a vector where index = userID and value = transaction count.
std::vector<int> processSlow(const std::vector<User> &users, const std::vector<Transaction> &transactions)
{
    std::vector<int> results;

    // TODO: Write a Nested Loop
    // 1. Loop through every 'user' in users
    // 2. Inside that, loop through every 'trans' in transactions
    // 3. If trans.userId == user.id, increment a counter
    // 4. Push the counter to 'results'

    // YOUR CODE HERE

    return results;
}

// CHALLENGE B: The "Engineer" Approach (Hash Map)
// Loop through transactions ONCE to build a map.
std::vector<int> processFast(const std::vector<User> &users, const std::vector<Transaction> &transactions)
{
    std::vector<int> results;

    // TODO: Use a Map
    // 1. Create std::unordered_map<int, int> counts;
    // 2. Loop through 'transactions' just once.
    // 3. counts[trans.userId]++;

    // 4. Finally, loop through 'users' to fill the 'results' vector
    //    using the data from your map.

    // YOUR CODE HERE

    return results;
}

// ==========================================
// MAIN EXECUTION
// ==========================================

int main()
{
    // 1. SETUP DATA
    // 10,000 Users
    // 50,000 Transactions
    // Complexity warning: 10,000 * 50,000 = 500,000,000 checks for the slow method!
    int numUsers = 10000;
    int numTrans = 50000;

    std::cout << "Generating Data (" << numUsers << " users, " << numTrans << " transactions)...\n";
    auto users = generateUsers(numUsers);
    auto transactions = generateTransactions(numTrans, numUsers);
    std::cout << "Data Ready.\n\n";

    Timer timer;

    // 2. RUN SLOW METHOD
    std::cout << "Running Nested Loop Approach (This might take a while...)\n";
    timer.reset();
    std::vector<int> slowResults = processSlow(users, transactions);
    double slowTime = timer.elapsed();

    if (slowResults.empty())
    {
        std::cout << "Slow method not implemented yet.\n";
    }
    else
    {
        std::cout << ">> Slow Method finished in: " << slowTime << " ms\n";
    }

    // 3. RUN FAST METHOD
    std::cout << "\nRunning Hash Map Approach...\n";
    timer.reset();
    std::vector<int> fastResults = processFast(users, transactions);
    double fastTime = timer.elapsed();

    if (fastResults.empty())
    {
        std::cout << "Fast method not implemented yet.\n";
    }
    else
    {
        std::cout << ">> Fast Method finished in: " << fastTime << " ms\n";
    }

    // 4. COMPARISON
    if (!slowResults.empty() && !fastResults.empty())
    {
        std::cout << "\n------------------------------------------------\n";
        std::cout << "SPEEDUP FACTOR: " << (slowTime / fastTime) << "x faster\n";
        std::cout << "------------------------------------------------\n";

        // Verification check
        if (slowResults == fastResults)
        {
            std::cout << "SUCCESS: Both methods produced identical results!\n";
        }
        else
        {
            std::cout << "ERROR: Results do not match. Check your logic.\n";
        }
    }

    return 0;
}