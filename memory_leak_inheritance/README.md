# Memory leak with inheritance
To see the example in real time jus follow below steps then you come to know about its real time behaviour.

###### To create memory leak
1. Go to file Vehicle.h which is our base class
2. Uncomment the line `~Vehicle()`
3. And do comment the line `virtual ~Vehicle()`
4. Now run the prog
5. Only the base class destructor gets called

###### To solve memory leak
1. Go to same file as mentioned above
2. Reverse the comment and uncomments
3. Now run you can feel the original behaviour.
