#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double x1,y1,x2,y2,l;
    int d=2,z;
    cin>>x1>>y1;
    cin>>x2>>y2;
    l=pow((x2-x1),d)+pow((y2-y1),d);
    cout<<fixed<<setprecision(3)<<sqrt(l);
}

