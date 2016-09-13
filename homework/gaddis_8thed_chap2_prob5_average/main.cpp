/* 
 * File:   main.cpp
 * Author: Caccamise, Anthony
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  calculate average /mean and standard deviation
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int x1,x2,x3,x4,x5;
    float avg,stdev;
    //Input or initialize values Here
    cout<<" this program calculates the mean and standard deviation"<<endl;
    cout<<"input 5 values"<<endl;
    cin>>x1>>x2>>x3>>x4>>x5;
    
    //Process/Calculations Here
    avg=(x1+x2+x3+x4+x5)/5;
    stdev=pow(((x1-avg)*(x1-avg)+(x2-avg)*(x2-avg)+(x3-avg)*(x4-avg)+(x4-avg)*(5-avg)+(5-avg))/4,0.5);
    //Output Located Here
    
    /// display output
    cout<<"the input values = "<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<endl;
    cout<<"the mean = "<<avg<<endl;
    cout<<"the standard deviation = "<<stdev<<endl;
    //Exit
    return 0;
}

