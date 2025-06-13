#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
   char op;
   char exit;
   double num1;
   double num2;
   double result;

   std::cout << "***********************************\n";
   std::cout << "              CALCULATOR           \n";
   std::cout << "***********************************\n";

   std::cout << "+ :- Addition\n- :- Subtraction\n* :- Multiplication\n/ :- Division\n^ :-Powers\n\n";

   std::cout << "Enter one of the given operators: ";
   cin >> op;

   if(op == '^'){
      std::cout << "Enter the first number: ";
      cin >> num1;
      std::cout << "Enter the power: ";
      cin >> num2;
   }else{
      std::cout << "Enter the first number: ";
      cin >> num1;

      std::cout << "Enter the second number: ";
      cin >> num2;
   }

   switch(op){
      case '+':
         result = num1 + num2;
         std::cout << "The result is " << result;
         break;
      case '-':
         result = num1 - num2;
         std::cout << "The result is " << result;
         break;
      case '*':
         result = num1 * num2;
         std::cout << "The result is " << result;
         break;
      case '/':
         result = num1 / num2;
         std::cout << "The result is " << result;
         break;
      case '^':
         result = pow(num1, num2);
         std::cout << "The result is " << result;
         break;
      default:
         std::cout << "Please enter a valid operator next time.";
         break;
   }

   std::cout << '\n';
   system("pause");

   return 0;
}
