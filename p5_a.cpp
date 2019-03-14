#include <iostream>
#include <math.h>
// Basic COCOMO
//Sahil Malik
using namespace std;
double table[3][4]={2.4,1.05,2.5,0.38,
                    3.0,1.12,2.5,0.35,
                    3.6,1.20,2.5,0.32};

int main(){
    double effort,Time,staff,productivity;
    int size=0;
    int model=0;
    cout<<"Enter KLOC: ";
    cin>>size;
    if(size>=2 && size <=50)
        model=0;
    else if(size>50 && size<=300)
        model=1;
    else if(size>300)
        model=2;
    effort=table[model][0]*pow(size,table[model][1]);
    Time=table[model][2]*pow(effort,table[model][3]);
    staff=effort/Time;
    productivity=size/effort;
    cout<<"\nEffort ="<<effort<<" Person-Month";
    cout<<"\n\nDevelopment Time ="<<Time<<" Months";
    cout<<"\n\nAverage Staff Required ="<<staff<<" Persons";;
    cout<<"\n\nProductivity ="<<productivity<<" KLOC/Person-Month";
    return 0;
}