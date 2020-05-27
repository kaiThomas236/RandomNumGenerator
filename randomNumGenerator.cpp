#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <ctime>

using namespace std;


/*cd C:\Users\Kai Thomas\Documents\D&D*/
//g++ -std=c++11 randomNumGenerator.cpp -o rand && rand



int random(int n)
{
  int num = rand()%n;
  return num+1;
}



int main()
{
  srand(time(NULL));
  int num;
  cout << "Please insert the die size: ";
  cin >> num;
  int n = random(num);
  cout << n << endl;
}
