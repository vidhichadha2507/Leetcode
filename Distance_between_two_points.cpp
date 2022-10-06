#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float x1,x2,y1,y2,distance;
    cout<<"Enter x1,x2 :\n";
    cin>>x1>>x2;

    cout<<"Enter y1,y2 :\n";
    cin>>y1>>y2;

    distance = sqrt((x2-x1)+(y2-y1));

    cout<<"Distance between two points is : "<<distance<<endl;

    return 0;


}
