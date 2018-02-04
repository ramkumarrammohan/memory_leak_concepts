#include <iostream>
#include "MemoryTest.h"

using namespace std;

void testWithMemoryLeak()
{
    cout << "\ntest with memory leak" << endl;

    /**
     * While instatiating objects on heap, user has to
     * take the responsible to kill those instances after
     * its been used
     */
    MemoryTest *memObjectOne = new MemoryTest("memObjectOne");

    // User has to make an explicit call to delete the obj
    delete memObjectOne;
}

void testWithoutMemoryLeak()
{
    cout << "\ntest without memory leak" << endl;

    /**
     *  When instantiate objects on stack memory, it ill take
     * care of destructing objects that's been creted
     *
     * Below we instantiate on stack so it ill gets auto deleted after
     * its usage that's after this function call.
     */
    MemoryTest memObjectTwo("memObjectTwo");
}

int main()
{
    cout << "Welcome to memory leak simple! Uncomment any of below func"
            "to check the behaviour.." << endl;

    /**
     * @brief testWithoutMemoryLeak - Uncomment the below func
     * to check the behaviour instantiating objects on heap
     */
    testWithMemoryLeak();

    /**
     * @brief testWithoutMemoryLeak - Uncomment the below func
     * to check the behaviour instantiating objects on stack
     */
//    testWithoutMemoryLeak();

    return 0;
}
