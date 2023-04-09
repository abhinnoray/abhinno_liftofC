//What is the size of a C structure? How the size of a C structure is calculated?

The size of a C structure is detrmined by the total size of its individual members, along with any padding that the compiler may add to ensure proper
memory alignment. To calculate the size of a C structure, we add up the size of its members and also the padding in them.
The size of a C structure can be calculated using the size of operator. 