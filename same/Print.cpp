#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int r = 0;
	int f;
	string str = "";
	cout << "what do you want to see ";
	getline(cin, str);
	cout << "how many letters do you want to show ";
	cin >> f;

  for (char c : str)
  {

	  r++;
  cout << "[" << c << "]";
  cout << '\n';
if (r == f){
	break;
}
	}
 return 0;
 }
