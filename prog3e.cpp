/*
Author: Phillip Chen
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: Lab 3 task e

Ask for one input (diameter). Using the circle formula. if you subtract
the center point with the x and y axis you will get negative numbers
but that wouldnt matter because the circle formula square these numbers
making them positive; x*x + y*y < r*r
the code says greater than because that line put in the empty spaces
outside of the circle
*/

#include <iostream>
using namespace std;

int main(){

double d = 0;
do{
	cout<<"Input diameter: ";
	cin>>d;}while(d<=0);

double r = d/2;			//radius
double c = (d-1)/2;		//center of circle; given in lab notes

for(double y=0; y<d;y++){
	for(double x=0; x<d;x++){	//left to right x axis
		if((y-c)*(y-c)+(x-c)*(x-c)>r*r){
					cout<<" ";
					/*cout<<"rounded"<<rounded;
					cout<<"x"<<x<<endl;*/
							
				}
				else{
				cout<<"*";
				}				
			}cout<<endl;
		
		}

}
			
