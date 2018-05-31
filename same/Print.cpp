//============================================================================
// Name        : HW.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int f = 0;
  string str {"abcdefghi"};
  for (char c : str)
  {
  f++;
  cout << "[" << c << "]";
  cout << '\n';
if (f == 4){
	break;
}
	}




 return 0;
 }
