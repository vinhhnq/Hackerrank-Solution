#include <iostream>  
using namespace std;  
int main ()  
{  
int arr1[4]  = { 0, 1, 2, 3 };  
int arr2[5] = { 1, 2, 3, 4, 5 };  
// use nested range based for loop  
for ( int x : arr1 )  {  
// declare nested loop  
    for ( int y : arr2 )  
    {  
      cout << " x = " << x << " and j = " << y << endl;  
    }  
  }  
  return 0;  
}  