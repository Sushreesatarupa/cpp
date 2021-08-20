/* Operator	Binary/unary	Description
+	Binary	Addition of two operands
-	Binary	Subtraction of two operands
*	Binary	Multiplication of two operands
/	Binary	Division of two operands
%	Binary	Modulus operator – the result is the remainder of the division
++	Unary	Increment operator – increases the value of operand by 1
--	Unary	Decrement operator – decreases the value of operand by 1
The below Example demonstrates the first five arithmetic operators in C++
*/

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
 int op1=3,op2=4; //defines operands first
 float op3=10.1,op4=5.4;
 cout<<"Operands are op1 = "<<op1<<" op2 = "<<op2;
 cout<<" op3 = "<<op3<<" op4 = "<<op4;
 cout<<endl;
 //performs arithmetic operations on these operands. 
 cout<<"op1 + op2 = "<<op1+op2<<endl;
 cout<<"op1 - op2 = "<<op1-op2<<endl;
 cout<<"op3 * op4 = "<<op3*op4<<endl;
 cout<<"op3 / op4 = "<<op3/op4<<endl;
 cout<<"op2 % op1 = "<<op2%op1<<endl;
}

/*
Output:

Operands are op1 = 3 op2 = 4 op3 = 10.1 op4 = 5.4
op1 + op2 = 7
op1 – op2 = -1
op3 * op4 = 54.54
op3 / op4 = 1.87037
op2 % op1 = 1
*/


The next arithmetic operators that we are going to discuss are ++ and –. 
These are called increment and decrement operators respectively. 
The increment operator increases the value of the operand by 1 
while the decrement operator decreases the value of the operand by 1.

