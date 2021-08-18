Relational or comparison operators are used to compare two operands. The result of the evaluation is either true or false.

C++ supports the following Relational Operators:

Operator	Description
!ERROR! unexpected operator '='	Evaluates whether two operands are equal. Returns true if equal else returns false.
!=(not equal to)	Complements ‘equal to’ operator. Returns true if operands are not equal. False otherwise.
<(less than)	Returns true if the first operand is less than second. False otherwise.
<=(less than equal to)	Returns true if the first operand is less than or equal to the second operand. False otherwise.
>(greater than)	Returns true if the first operand is greater than second. False otherwise.
>=(greater than equal to)	Returns true if the first operand is greater than equal to the second. False otherwise.
See the below Example program to understand the Relational Operators.

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int a=10, b=8,c=12,d=14;
 
  if(a==b)
     cout<<"a is equal to b"<<endl;
  else
    cout<<"a is not equal to b"<<endl;
 
  if(c!=d)
     cout<<"c is not equal to d"<<endl;
  else
    cout<<"c is equal to d"<<endl;
 
  if((a+b) <= (c+d))
      cout<<" (a+b) less than/equal to (c+d)"<<endl; if((a-b)>=(d-c))
     cout<<"(a-b) greater than/equal to (d-c)"<<endl;
 
}
Output:

a is not equal to b
c is not equal to d
(a+b) less than/equal to (c+d)
(a-b) greater than/equal to (d-c)

In the above program, we see the usage of relational operators and the way in which they evaluate the expressions provided.

Note that we can provide not only values but also variables and expressions in the conditional statements.