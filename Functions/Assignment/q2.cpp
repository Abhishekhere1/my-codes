/*Write a function to take the radius of a circle as an argument and return its area.*/
#include<iostream>
using namespace std;
float areaOfCircle(float radius){
    float area = 3.1415*radius*radius;
    return area;
}
int main(){
    float r;
    cout<<"Enter radius : ";
    cin>>r;
    cout<<areaOfCircle(r);

}