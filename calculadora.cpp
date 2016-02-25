#include <iostream>
#include <string>
#include <vector>
#include "add-operation.cpp"
#include "substraction-operation.cpp"
#include "division-operation.cpp"
#include "multiplication-operation.cpp"

using namespace std;


int main() {

  // values
  float result = 0;
  int num_one = 0;
  int num_two = 0;
  int selection = 0;
  bool app = true;

  vector<string> operation_messages = {
    "Add Operation",
    "Substraction Operation",
    "Division Operation",
    "Multiplication Operation"
  };

  vector<int> args;

  while (app) {
    cout << "Choose an operation to do: \n" << endl;
    for (size_t i = 0; i < operation_messages.size(); i++) {
      cout << operation_messages[i] << " -> " << i << " \n" << endl;
    }
    cin >> selection;
    if (selection < 4) {
      app = false;
      cout << "Your choice was: " << selection <<endl;
      cout << operation_messages[selection] << endl;
      cout << "Choose your numbers for make the operation: " << endl;
      cout << "First number: " << endl;
      cin >> num_one;
      cout << "Second number: " << endl;
      cin >> num_two;
      cout << "processing... " << endl;
      if (selection == 0) {
        result = AddOperation(num_one, num_two);
      } else if (selection == 1) {
        result = SubstractionOperation(num_one, num_two);
      } else if (selection == 2) {
        args.push_back(num_one);
        args.push_back(num_two);
        result = DivisionOperation(args);
      } else if (selection == 3) {
        result = MultiplicationOperation(num_one, num_two);
      }
    } else {
      cout << "You don't choose an available option." << endl;
    }
  }
  cout << "This is your result: " << result << endl;
  return 0;

}
