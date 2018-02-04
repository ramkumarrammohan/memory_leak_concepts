#include "MemoryTest.h"

MemoryTest::MemoryTest(const string name) :
    m_name(name)
{
    m_memoryTestPrivate = new MemoryTestPrivate();
    cout << m_name << " constructed" << endl;
}

MemoryTest::~MemoryTest()
{
    // In general delete the members of the class on destructor call
    // Otherwise that may leads to mem leak

    // Comment the below delete call for member 'm_memoryTestPrivate'
    // So that the private obj gets initiate but failed to kill after been used
    // That leads to mem leak

    delete m_memoryTestPrivate;
    cout << m_name <<" destructed" << endl;
}


MemoryTestPrivate::MemoryTestPrivate()
{
    cout << "\nMemoryTest Private constructed" << endl;
}

MemoryTestPrivate::~MemoryTestPrivate()
{
    cout << "\nMemoryTest Private destructed" << endl;
}
