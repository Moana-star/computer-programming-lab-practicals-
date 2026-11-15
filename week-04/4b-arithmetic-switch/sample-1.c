/*
 * PRACTICAL 4(b): Write a C program which takes two integer operands and one operator from the user, performs the operation and prints the result. Consider +,-,*,/,% and use Switch Statement.
 * AIM: To perform arithmetic operations using switch statement.
 * ALGORITHM: Read a,b; display menu options; read choice; use switch to perform addition, subtraction, multiplication, division or modulus; display result; default prints Invalid choice; repeat until exit.
 * FLOWCHART: Start -> Read operands -> Display menu -> Read choice -> Switch on choice -> Perform selected operation / invalid choice -> Repeat or exit.
 * SAMPLE INPUT: ENTER TWO VALUES FOR a & b: 20 16; choice: 1
 * EXPECTED OUTPUT: The addition of 20 and 16 is..36
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int main(void){double a,b;char op;printf("Enter number operator number: ");if(scanf("%lf %c %lf",&a,&op,&b)!=3)return 1;switch(op){case '+':printf("Result = %.2f\n",a+b);break;case '-':printf("Result = %.2f\n",a-b);break;case '*':printf("Result = %.2f\n",a*b);break;case '/':if(b==0)puts("Division by zero is not allowed.");else printf("Result = %.2f\n",a/b);break;default:puts("Invalid operator.");}return 0;}