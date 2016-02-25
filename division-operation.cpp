#include <vector>

using namespace std;

float DivisionOperation(vector<int>& items);

float DivisionOperation(vector<int>& items) {
  string error = "You can't divide by 0";
  float result = 0;
  if (items[1] == 0) {
    cout << error << endl;
  } else {
    result = items[0] / items[1];
  }
  return result;
}
