#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int f = 0;
  string str {"abcdefg"};
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
