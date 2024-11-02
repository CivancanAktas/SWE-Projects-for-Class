#include <iostream>
using namespace std;

int radius;
float PI = 3.14159;
int main()
{
	cout << "enter the radius of the circle that you want to calculate the area of it ";
	cin >> radius;


	 float area = radius * radius * PI ;

	  cout <<"the area of the circle is "<< area;
	  

}