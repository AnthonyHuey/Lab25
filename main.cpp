// Anthony Huey - 9/18/2026 - COMSC 210 - Lab25 DATA Structures Race
// race between, vector, list, set, to see who is fastest.
// READING, SORTING, INSERTING, DELETING.

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <string>
#include <chrono>
using namespace std;
using namespace std::chrono;

void nanoOutput(long long count) { cout << "\t| " << count << " |"; }

int main() 
{
    vector<string> myVector;
    list<string> myList;
    set<string> mySet;

// Read in the codes.txt into each and time it

// Sort each of them, and time it. Set is exempt it gets -1

// insert "TESTCODE" into the middle of each, and time it.

// Delete the middle-ish element of each and time it

// Start timing
    auto start = high_resolution_clock::now();

    // Example loop to measure
    vector<int> numbers;
    for(int i = 0; i < 1000000; ++i) {
        numbers.push_back(i);
    }

    // End timing
    auto end = high_resolution_clock::now();

    // Calculate duration
    auto duration = duration_cast<nanoseconds>(end - start);

    // Output the duration in nanoseconds
    cout << "Time taken: " << duration.count() << " nanoseconds\n";
    nanoOutput(duration.count());

// ok either store each value in a vector to output later
// or output it just as i get it. hmm
// Output results, like so.
//              VECTOR  -  LIST -  SET
//  READ    - 
//  SORT    - 
//  INSERT  -
//  DELETE  -

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/

/* just putting this here
using namespace std::chrono;

int main() {
    // Start timing
    auto start = high_resolution_clock::now();

    // Example loop to measure
    vector<int> numbers;
    for(int i = 0; i < 1000000; ++i) {
        numbers.push_back(i);
    }

    // End timing
    auto end = high_resolution_clock::now();

    // Calculate duration
    auto duration = duration_cast<nanoseconds>(end - start);

    // Output the duration in nanoseconds
    cout << "Time taken: " << duration.count() << " nanoseconds\n";

    return 0;
}*/