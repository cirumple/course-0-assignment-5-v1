#include <iostream>
// The code prompts the user to enter a number. 
int input_1() {
    std::cout << "Enter any number: ";
    int input_1;
    std::cin >> input_1;
    return input_1;  
}
// Allows the user to enter any of the operators. 
char operators() {
  std::cout << "Enter (+ - * / %):" << std:: endl;
  char input_operator;
  std::cin >> input_operator;
  return input_operator;
}

// This section prompts the user to enter a number. 
int main() {                                                             // 
  std::cout << "Enter a max of 5 numbers and 4 operators. " << std::endl;
  int first_input_1 = input_1();

  char user_input_operator;
  user_input_operator = operators();

 int second_input_1 = input_1(); 

int answer;

  // First and second numbers. 
  if (user_input_operator == '+') {
    answer = first_input_1 + second_input_1;
  }
  if (user_input_operator == '-') {
    answer = first_input_1 - second_input_1;
  }
  if (user_input_operator == '*') {
    answer = first_input_1 * second_input_1;
  }
  if (user_input_operator == '/') {
    answer = first_input_1 / second_input_1;
  }
  if (user_input_operator == '%') {
    answer = first_input_1 % second_input_1;
  }
  if (user_input_operator == '=')
    

  std :: cout << answer << std :: endl;

  // Second and third numbers. 

  char operator_2;
  operator_2 = operators();
  int input_3 = input_1();

  if (operator_2 == '+') {
    answer = answer + input_3;
  }
  if (operator_2 == '-') {
    answer = answer - input_3;
  }
  if (operator_2 == '*') {
    answer = answer * input_3;
  }
  if (operator_2 == '/') {
    answer = answer / input_3;
  }
  if (operator_2 == '%') {
    answer = answer % input_3;
  }

  std :: cout << answer << std :: endl;

  
  char operator_3;
  operator_3 = operators();
  int input_4 = input_1();

  if (operator_3 == '+') {
    answer = answer + input_4;
  }
  if (operator_3 == '-') {
    answer = answer - input_4;
  }
  if (operator_3 == '*') {
    answer = answer * input_4;
  }
  if (operator_3 == '/') {
    answer = answer / input_4;
  }
  if (operator_3 == '%') {
    answer = answer % input_4;
  }

  std :: cout << answer << std :: endl;

   
  // The final fourth and fifth inputs. 
  
  char user_input_operator_4;
  user_input_operator_4 = operators();
  int input_5 = input_1();

  if (user_input_operator_4 == '+') {
    answer = answer + input_5;
  }
  if (user_input_operator_4 == '-') {
    answer = answer - input_5;
  }
  if (user_input_operator_4 == '*') {
    answer = answer * input_5;
  }
  if (user_input_operator_4 == '/') {
    answer = answer / input_5;
  }
  if (user_input_operator_4 == '%') {
    answer = answer % input_5;
  }
  std :: cout << answer << std:: endl; 
  
}