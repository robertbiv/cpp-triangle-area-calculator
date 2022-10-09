//----------------------------------------------------------
//  Name: Robert Bennethum
//  E-mail Address: rmb6287@psu.edu
//  Class: CMPSC 121
//  Project #homework 2
//  Due Date: 9/24/21
//  Brief Project Description: Take points of a triange and return the area
//----------------------------------------------------------

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	//Define Variables
	double x1, y1, x2, y2, x3, y3, s, s1, s2, s3, area;
	
	//Get Data
	cout << "Enter three points" << endl;
	cout << "Enter the first point x1 and y1 seperated by a space: ";
	cin >> x1 >> y1;
	cin.ignore();
	cout << "Enter the second point x2 and y2 seperated by a space: ";
	cin >> x2 >> y2;
	cin.ignore();
	cout << "Enter the thrid point x3 and y3 seperated by a space: ";
	cin >> x3 >> y3;


	//Find side length
	s1 = sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2)));
	s2 = sqrt((pow((x2 - x3), 2) + pow((y2 - y3), 2)));
	s3 = sqrt((pow((x3 - x1), 2) + pow((y3 - y1), 2)));

	//Find and Print Area
	s = (s1 + s2 + s3) / 2;
	area = sqrt((s)*(s - s1)*(s - s2)*(s - s3));
	cout << "The area of the triangle is " << setprecision(2) << fixed << area << " units." << endl;



	return 0;
}