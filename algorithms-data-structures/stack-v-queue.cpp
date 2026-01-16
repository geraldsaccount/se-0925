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

// TODO: Simulate an "Undo" button using a Stack
// Input: A list of actions (strings).
// Output: The state of the document after 1 "Undo".
void simulateEditor(const std::vector<std::string> &actions)
{
    std::stack<std::string> history;

    // 1. Push all actions onto the stack
    // YOUR CODE HERE (Loop through actions, history.push(...))

    // 2. Simulate typing
    if (!history.empty())
    {
        std::cout << "Current State: Typed '" << history.top() << "'\n";
    }

    // 3. User hits Undo!
    // YOUR CODE HERE (history.pop())

    // 4. Show what remains
    if (!history.empty())
    {
        std::cout << "After Undo: Last action is now '" << history.top() << "'\n";
    }
    else
    {
        std::cout << "After Undo: Document is empty.\n";
    }
}

// TODO: Simulate a Printer Queue
// Input: A list of documents (strings).
// Output: Print them in the order they arrived.
void simulatePrinter(const std::vector<std::string> &docs)
{
    std::queue<std::string> printJob;

    // 1. Add all docs
    // YOUR CODE HERE (Loop through docs, printJob.push(...))

    std::cout << "Printing...\n";

    // 2. Process the no docs
    // Hint: use printJob.empty(), printJob.front(), and printJob.pop()
    while (!printJob.empty())
    {
        // YOUR CODE HERE (Print the front, then pop it)
    }
}

int main()
{
    Timer timer;

    std::cout << "--- STACKS VS QUEUES ---\n";

    std::vector<std::string> actions = {"Type Hello", "Bold Text", "Add Image"};
    simulateEditor(actions);

    std::cout << "\n";

    std::vector<std::string> jobs = {"Thesis.pdf", "Meme.png", "TaxForm.docx"};
    simulatePrinter(jobs);
    return 0;
}