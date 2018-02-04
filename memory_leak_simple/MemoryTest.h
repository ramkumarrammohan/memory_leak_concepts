#ifndef MEMORYTEST_H
#define MEMORYTEST_H

#include <iostream>
#include <string>

using namespace std;

class MemoryTestPrivate
{
public:
    MemoryTestPrivate();
    ~MemoryTestPrivate();
};

class MemoryTest
{
public:
    MemoryTest(const string name);
    ~MemoryTest();

private:
    const string m_name;
    MemoryTestPrivate *m_memoryTestPrivate;
};

#endif // MEMORYTEST_H
