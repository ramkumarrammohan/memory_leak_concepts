# memory_leak_concepts
###### Deep understanding and real time examples of memory leak with c++

Here are the list of some memory leaks that everyone needs to take care while developing applications using cpp

###### Memory leak with inheritance
Everyone needs to cross inheritance anywhere in their projects. While dealing with inheritance we need to make sure both base and derived objects should not create any memory leaks. The main problem starts with base class destructor part.
Whenever we are assigning some derived instance to base pointers we should take care to destruct both base and derived instances fully.

```
class BaseClass
{
        BaseClass();
    BaseClass(); // Destructor with mistake
    // virtual BaseClass(); // Correct way
}

class DerivedClass : public BaseClass
{
        DerivedClass();
    ~DerivedClass(); // Destructor
}

void main()
{
        BaseClass *ptr = new DerivedClass();
        // some operations with ptr
        delete ptr; // this will call the destructor ~Base() and NOT ~Derived()
}
```
In above case the deletion of ptr only deletes base instance alone. It wont take care of its own to delete derived instance. So your DerivedClass instance still occupy the heap.<kbd><kbd>

To avoid this problem make your base destructor to be a virtual(`virtual ~BaseClass();`) one so that at runtime while deleting the base instance`delete ptr` automatically deletes the derived instances.

Full Example Here goes here: [Memory leak with Inheritance](https://github.com/ramkumarrammohan/memory_leak_concepts/tree/master/memory_leak_inheritance)

To play with example follow steps mentioned here [Tips to check behaviour (README)](https://github.com/ramkumarrammohan/memory_leak_concepts/tree/master/memory_leak_inheritance)
