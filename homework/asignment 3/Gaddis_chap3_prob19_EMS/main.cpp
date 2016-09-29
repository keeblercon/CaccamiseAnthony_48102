/* 
 * File:   main.cpp
 * Author: caccamise,anthony
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float wavelen;
   
    //Input or initialize values Here
   cout<<"input wave length of radiation in meters"<<endl;
   cout<<"this program determines the band of radiation"<<endl;
   cin>>wavelen;
    //Process/Calculations Here
   if (wavelen>1e-2f)cout<<"radio band"<<endl;
   else if(wavelen>1e-3f)cout<<"micro wave band"<<endl;
   else if (wavelen>7e-7f)cout<<"infra-red band"<<endl;
   else if (wavelen>4e-7f)cout<<"visible band"<<endl;
   else if (wavelen>1e-8f)cout<<"ultra-violet band"<<endl;
   else if (wavelen>1e-11f)cout<<"x-ray band"<<endl;
   else                    cout<<"gama-ray band"<<endl;
           //Output Located Here
 
    //Exit
    return 0;
}