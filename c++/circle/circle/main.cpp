//
//  main.cpp
//  circle
// Defines and calls the function circle().
//  Created by Mahamed Hassan on 1/27/21.
//Exercide:  write a void type function called circle() to calculate the circumference and area of a circle. The radius and two variables are passwd to a function, which therefore haas three parameters:
// Parameters: A read-only reference to double for the radius and two references to double that function uses to store the area and circumfrence of circle,
// Given a circle with radius r:
// Area = Pi * r * r and circumfrence = 2 * Pi *r where pi=3.415926536

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//prototype of circle():
void circle(const double& rad, double& um, double& fl);

const double startRadius = 0.5; // Start,  end and
const double endRadius = 0.0; //step width od
const double step = 0.5;   //the table

string header = "\n ****** Computing Circles ******\n",
line(50, '-');

int main()
{
    double rad, circuit, plane;
    cout << header <<endl;
    cout << setw(10) << "Radius"
        << setw(20) << "Circumference"
    << setw(20) << " Area\n" << line <<endl;
    
    cout << fixed;       //Floating poin presentation
    for (rad = startRadius; rad < endRadius + step / 2; rad += step)
    {
        circle(rad, circuit, plane);
        cout<< setprecision(1)<<setw(8) << rad
            << setprecision(5)<<setw(22) << circuit
                            << setw(20)<<plane << endl;
    }
   
    return 0;
    
}

    // Function circle(): compute circumference and area.
void circle( const double& r, double& u, double& f)
{
    const double pi = 3.1415926536;
    u = 2 * pi * r;
    f = pi * r * r;
    
}

