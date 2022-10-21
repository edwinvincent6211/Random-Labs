/******************************************************************************
 *
 *                               Online C++ Compiler.
 *                                              Code, Compile, Run and Debug C++ program online.
 *                                              Write your code in this editor and press "Run" button to compile and execute it.
 *
 *                                              *******************************************************************************/

#include <iostream>

using namespace std;

class A
{
public:
  A(){};
  int a() { return 0; }
};

class B : public A
{
};

// function
int function(int a, int b)
{
  return a + b;
}

// template
// template <typename T>
// struct AA
// {
//   some_func(T::value);
// };

// struct BB
// {
//   static const bool value = false;
// };

int main()
{
  // variables
  int var_4 = 0;

  int var_0 = 5;

  double var_1 = 2;

  string var_2 = "0";

  string var_3[1] = {"0"};

  // test
  cout << &var_4 << endl;

  cout << "Hello World" << endl;

  cout << var_2.length();

  cout << (var_0 == 1) << endl;

  cout << var_3[0] << endl;

  cout << function(2, 1) << endl;

  cout << max(2, 1) << endl;

  cout << (20 * 1) << endl;

  A *a = new A();

  B *b = new B();

  b->a();

  a->a();

  if (0 > 1)
  {
    return 2;
  }

  // while (true)
  // {
  //   cout << 123 << endl;
  // }

  // inner_func();
  char aa = '0';

  char* bb = &aa;

  cout << (bb);
  cout << (char *)(bb) << endl;

  (bb) += 1;
  (bb) -= 1;

  cout << (bb);
  cout << (char *)(bb) << endl;

  cout << (char *)0x7ffdef906664 << endl;

  return 0;
}

int inner_func(){ return 0; };