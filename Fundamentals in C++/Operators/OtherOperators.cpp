So far we explored all the major operators in C++. There are some more additional C++ operators that need our attention.

These operators include:

(i) sizeof operator

sizeof is a unary operator that is used extensively in C and C++. Sizeof returns the size of its operand. The return value is usually an unsigned integral type denoted by ‘size_t’.

Sizeof operator has many uses in C and C++ languages. It can be used to find out the size of the variables, arrays or expressions and even to allocate the blocks of memory.

(ii) Conditional Ternary Operator

The conditional operator in C++ can be used as a replacement for if-else statement.

The general syntax for the conditional operator is:

Condition? expression1:expression2;

If the condition is true, expression 1 will be evaluated. If the condition is false, then expression2 will be evaluated.

Please note that expression1 and expression2 need to be of the same data types in order to avoid potential errors.

Suggested read => Ternary operator in C#

(iii) Comma Operator

Comma operator that is represented as a token ‘,’ can be used as an operator as well as a separator.

As an operator, a comma is used when there is more than one expression to be evaluated. Only the rightmost expression is assigned to LHS.

For Example, consider the following expression.

x = (y=4, y+1);

In this expression, we have two expressions on the right-side separated with a comma. Here comma acts as an operator. First, the expression, y=4 will be evaluated. Then the next expression y+1 will be evaluated by using the result of the first expression i.e. y=4. Thus the value of y+1 will be 5 and this value will be assigned to x.

As a separator, a comma can be used anywhere to separate definitions, parameter list, etc.

(iv) Member Access Operator

There are two operators that are used to access the individual members of classes, structures or unions in C++. These are the dot operator (.) and arrow (->) operator. We will learn these operators in detail when we learn object-oriented programming in C++.

The below Example demonstrates the usage of sizeof, Comma and Conditional Operator.

#include <iostream>
#include <string>
using namespace std;
  
int main()
{
  int x,y;
  
  x = (y=3,y+4);
  cout<<"Value of x = "<<x;
  
  y = (x<5)?0:1;
  if(y == 0)
    cout<<"\nVariable x is less than 5"<<endl;
  else
    cout<<"\nVariable x is greater than 5"<<endl;
  
    cout<<"sizeof(x): "<<sizeof(x)<<"\t"<<"sizeof(y): "<<sizeof(y);
  
  return 0;
 
}
Output:

Value of x = 7
Variable x is greater than 5
sizeof(x): 4 sizeof(y): 4

The screenshot for the same is given below.

Member access operator

As shown in the above program, first we have two variables declared and separated by a comma. (comma as a separator). Next, we have a comma operator with two expressions. As we can see from the output, the rightmost expression’s value is assigned to variable x. Next, we demonstrate the conditional operator to evaluate if x is less than 5.

Finally, we demonstrate the usage of the sizeof operator. Here we use the sizeof operator to get the size of the variables x and y. As both are integer variables, the size returned is 4 bytes.

(v) Operator Precedence and Associativity

We have already seen almost all the C++ operators and we know that they can be used in expressions to carry out specific operations. But the expressions we have seen in examples are simple and straightforward. However, depending on our requirements, expressions tend to become more and more complex.

Such complex expressions will have more than one operator and many operands. In such a situation, we need to evaluate which operator is to be evaluated first.

For Example, consider the following expression.

x = 4 + 5 / 3;

Here we have + and / operators and we need to decide which expression will be evaluated first. In mathematical terms, we know that division will be carried out before addition. Thus the expression will become x = 4 + (5/3) = 5.

But when the compiler is faced with such a situation, we also need to have a similar mechanism to decide the order of operations, so that it can properly evaluate the expression.

This order in which the operators in a compound expression are evaluated is called the “Precedence” of the operator. C++ has defined precedence for all the operators and the operators with higher precedence are evaluated first.

What happens when we have two operators side by side in an expression with the same precedence? This is where the associativity of an operator comes into the picture.

Associativity tells the compiler whether to evaluate an expression in left to right sequence or right to left sequence. Thus using precedence and associativity of an operator we can effectively evaluate an expression and get the desired result.

C++ provides a table consisting of precedence and associativity of various operators it uses.