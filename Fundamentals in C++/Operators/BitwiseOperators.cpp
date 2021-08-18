Bitwise operators in C++ operate on bits of the operands provided. Bitwise operators are applied only to integral types like integer, character, etc., and not on data types like float, double, etc.

Following are the bitwise operators supported by C++:

Operators	Description
&( Binary AND)	Performs AND operation on bits of operand 1 and operand 2.
|( Binary OR)	Performs OR operation on bits of operand 1 and operand 2.
^( Binary XOR)	Performs XOR operation on bits of operand 1 and operand 2.
~( Binary one's complement)	Takes one operand and inverts its bits.
<<( Binary left shift operator)	Shifts bits of the first operand to the left to a number of bits specified by the second operand.
>>( Binary right shift operator)	Shifts bits of the first operand to the right to a number of places specified by the second operand.
These bitwise operators operate on operands in a bit-by-bit manner. The truth tables for AND, OR and XOR operations are given below.

Consider a and b as two bits on which AND, OR and XOR operations are to be carried out.

The truth tables for the same are as given below:

a	b	a&b	a|b	a^b
0	0	0	0	0
1	0	0	1	1
0	1	0	1	1
1	1	1	1	0
Let’s taken an Example to understand Bitwise Operations.

Let a=8 and b=4

The binary representation of a and b is as follows:

a=8 1000
a=4 0100

a&b 0000 = 0
a|b 1100 = 12
a^b 1100 = 12

In the above example, we see that the bitwise AND of 8 and 4 is 0. Bitwise OR of 8 and 4 is 12 and bitwise XOR of 8 and 4 is as well 12.

This is the way in which bitwise operations are performed by the bitwise operators.

An Example demonstrating the Bitwise Operators.

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int a=8,b=4,c;
   
  c = a&b;
  cout<<"Result of & : "<<c<<endl;
  c = a|b;
  cout<<"Result of | : "<<c<<endl;
  c = a^b;
  cout<<"Result of ^ : "<<c<<endl;
   
  c = a<<2;
  cout<<"Result of << by 2 bits : "<<c<<endl; c = b>>2;
  cout<<"Result of >> by 2 bits : "<<c<<endl;
   
  c = ~3;
  cout<<"Result of ~ : "<<c<<endl;
}
Output:

Result of & : 0
Result of | : 12
Result of ^ : 12
Result of << by 2 bits: 32
Result of >> by 2 bits: 1
Result of ~ : -4

In the above program, we demonstrated the usage of bitwise operators and also printed the output of each of the operation.