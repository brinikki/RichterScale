#include <iostream>
using namespace std;
#include <cmath>
int main() {

float magnitude = 0;
float e = 0;
const double E0 = pow(10, 4.40);

cout << "  " << endl;
  
cout << " Energy released by the earthquake (joules)" << endl;
cin >> e;

  magnitude = 2.0 / 3.0 * log10(e / E0);

cout << "  " << endl;
cout << "  " << endl;
  
cout << "Magnitude on the Richter Scale : " << magnitude << endl;
  
if (magnitude < 4.5)
{
  cout << "Small" << endl;
}

  if (magnitude >= 4.5 && magnitude < 5.5)  
{  
 cout << "Moderate" << endl; 
} 

if (magnitude >= 5.5 && magnitude < 6.5)  
{  
 cout << "Large" << endl;  
} 
  
if (magnitude >= 6.5 && magnitude < 7.5)  
{  
 cout << "Major" << endl;  
} 

if (magnitude >= 7.5)  
{  
 cout << "Greatest" << endl;  
} 

  return 0;
}