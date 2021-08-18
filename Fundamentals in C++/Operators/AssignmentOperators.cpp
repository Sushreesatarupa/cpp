Assignment operator “=” is used to assigning a value to a variable. The LHS of the assignment operator is a variable and RHS is the value that is to be assigned to the variable. The value on the right side must be of the same type as that of the variable on the left-hand side.

Note the difference between ‘=’ and ‘==’ operators. The former is the assignment operator and the later is the equality operator.

Assignment operation takes place from right to left. Apart from the assignment operator ‘=’, there are other variations of assignment operator which are known as ‘compound assignment operators”. These operators perform an operation in addition to the assignment.

The below table gives us a description of these assignment operators.

Operator	Description
=	Assigns the value of RHS operand to LHS operand
+=	Adds RHS operand to LHS operand and assigns the result in LHS operand.
-=	Subtracts RHS operand to LHS operand and assigns the result to LHS operand
*=	multiplies RHS operand to LHS operand and assigns the result to LHS operand
/=	divides RHS operand to LHS operand and assigns the result to LHS operand
As shown in the above table, If x and y are operands, x+=y is equivalent to x = x+y.

Similarly,

x -=y is equivalent to x = x-y.

x *= y is equivalent to x = x*y.

x /= y is equivalent to x = x/y.

The below programming Example demonstrates these Assignment Operators.

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int x,y;
  cout<<"Enter input variable y: "; cin>>y;
  x = y;
  cout<<"\nValue of x = "<<x<<endl;
   
  int a = 3,b = 5,c = 8;
  a += b;
  c -= b;
  cout<<"\na += b: "<<a;
  cout<<"\nc -= b: "<<c;
   
  a *= b;
  b /= c;
  cout<<"\na *= b: "<<a;
  cout<<"\nb /= c: "<<b;
   
  return 0;
  }
Output:

Enter input variable y: 4

Value of x = 4

a += b: 8
c -= b: 3
a *= b: 40
b /= c: 1

Assignment Operator

In the above example, we have demonstrated assignment as well as compound assignment operators.

Note: We can also combine the other binary operators like %, <<, >>, &, |, ^, etc. into compound assignment statements in addition to the ones that are already demonstrated.

