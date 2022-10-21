/******************************************************************************
 *
 *                               Online C++ Compiler.
 *                                              Code, Compile, Run and Debug C++ program online.
 *                                              Write your code in this editor and press "Run" button to compile and execute it.
 *
 *                                              *******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  // printf("%f", ((float)1 / 2));
  int aa = 200;
  int8_t a = 200;
  uint8_t b = 100;

  cout << to_string(aa) << " " << to_string(b) << endl;

  if(a>b)
    cout << "greater";
  else
    cout << "less";

  return 0;
}