/*
Make a program where you enter the height of a pyramid
and the program will print out that pyramid.

For example, if I was to type 5, it would show
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 

If I was to type 3 it would show
   *
  * *
 * * *

*/
#include <iostream>

using namespace std;
int main () {
  int height;
  cout << "How Tall? ";
  cin >> height;
  
  for (int i = 0; i < height; i++){
    for (int space = 0; space <= (height - i); space ++){
      cout << " ";
    }
    for (int star = 0; star <= i; star++){
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}