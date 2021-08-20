/* Logical Operators
Logical operators are used for evaluating a combination of conditions/constraints to get a resultant value. 
The result of the evaluation of a Boolean expression is Boolean which is either true or false.

C++ supports the following logical operators:

Operator	Description
&&	Logical AND: returns true if both conditions are true otherwise returns false.
||	Logical OR: returns true if one of the conditions is true. Returns false when both conditions are false.
!	Logical NOT: negates the condition.

C++ employs a short circuit method to evaluate logical expressions. 
In this, C++ has to evaluate only the first expression/operand of the logical expression to provide the result. 
For Example, for logical AND (&&) operator, C++ evaluates only the first expression. 
If it’s false then the result will be false even if the second condition is true.

Similarly, for logical OR (||), it evaluates only the first expression. 
If the first expression is true, then the result will be true so it need not evaluate the second expression.

*/

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int a=10, b=8,c=12,d=14;
 
  if(!(a==0))
     cout<<"a is not zero"<<endl;
  else
    cout<<"a is zero"<<endl; if((a>b)&&(c<d))
        cout<<"Logical AND is true"<<endl;
  else
       cout<<"Logical AND is false"<<endl;
 
 if((a<c)||(b<d))
     cout<<"Logical OR is true"<<endl;
 else
     cout<<"Logical OR is false"<<endl;
}
/*
Output:

a is not zero
Logical AND is true
Logical OR is true

In the above program, we have made use of all the three logical operators in order to evaluate expressions and print the results.
*/