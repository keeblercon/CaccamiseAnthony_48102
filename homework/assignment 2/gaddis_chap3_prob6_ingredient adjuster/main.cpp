/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float sgr = 1.5,//the amount cups of sugar for 48 cookies
    bttr = 1, //the amount of butter for 48 cookies
    flr = 2.75, //the amount of flour for  48 cookies
    stnd = 48;  //standard amount of cookies made
    int cookies; 
    float nsgr, nbtter,nflr; // the new amounts for sugar, butter, and flour      
    //Input or initialize values Here
    cout<<" please enter the number of cookies you want to bake"<<endl;
    cin>>cookies;
    //Process/Calculations Here
    nbtter=(bttr * cookies)/stnd;
    nflr=(flr * cookies)/stnd;
    nsgr=(sgr * cookies)/stnd;
            
    //Output Located Here
    cout<<setprecision(2) <<fixed;
    cout<<nsgr<<"cups of sugar"<<endl;
    cout<<nbtter<<"cups of butter"<<endl;
    cout<<nflr<<"cups of flour"<<endl;

    //Exit
    return 0;
}

