// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using std::cout;
using std::endl;

bool myfunction (int i,int j) { return (i<j); }

int main () {
  int myints[] = {32,71,12,45,26,80,53,33};
  std::vector<int> myvector (myints, myints+8);               
  // 32 71 12 45 26 80 53 33
    for (unsigned int i = 0; i < myvector.size( ); i++)
        cout << myvector[i] << " ";
    cout << endl;

  // using default comparison (operator <):
  std::sort (myvector.begin(), myvector.begin()+4);           
  //(12 32 45 71)26 80 53 33
    for (unsigned int i = 0; i < myvector.size( ); i++)
        cout << myvector[i] << " ";
    cout << endl;

  // using function as comp
  std::sort (myvector.begin()+4, myvector.end(), myfunction); 
  // 12 32 45 71(26 33 53 80)
    for (unsigned int i = 0; i < myvector.size( ); i++)
        cout << myvector[i] << " ";
    cout << endl;
}