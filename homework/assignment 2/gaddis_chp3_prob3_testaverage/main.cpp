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
    float ts,a,b,c,d,e,f;
            

    //Input or initialize values Here
    cout<< "enter 5 test scores here"<<endl;
    cin>>a>>b>>c>>d>>e;
    //Process/Calculations Here
    f=(a+b+c+d+e)/5;
   
    //calculate adjustments
   cout << setprecision(1) << fixed;
    cout<<f<<endl;
    
    //output
    
    //Exit
    return 0;
}

