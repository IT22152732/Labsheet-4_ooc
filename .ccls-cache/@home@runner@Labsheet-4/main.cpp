#include<iostream>
#include<iomanip>

using namespace std;

float RecArea(float length, float width);
float SqrArea(float length);
float CircleArea(float radius);
float FenceCost(float &length, float &width);

struct circle
{
	float radius;
	
}circle1;

struct Rectangle
{
	float length;
	float width;
	
}rec1;

struct square
{
	float length;
	
}sqr1;

int main()
{
	float Carea,Rarea,Sarea,totobArea,length,width,	RemLarea, Larea,cost;
	
	cout<<"Enter radius of the cirle: ";
	cin>>circle1.radius;
	
	Carea=CircleArea(circle1.radius);
	cout<<"Area Of the Circle : "<<setiosflags(ios::fixed)<<setprecision(3)<<Carea;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Enter length of the Rectangle: ";
	cin>>rec1.length;
	cout<<"Enter Width of the Rectangle: ";
	cin>>rec1.width;
	
	Rarea=RecArea(rec1.length,rec1.width);
	cout<<"Area Of the Rectangle : "<<setiosflags(ios::fixed)<<setprecision(3)<<Rarea;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Enter length of the Square: ";
	cin>>sqr1.length;
	
	Sarea=SqrArea(sqr1.length);
	cout<<"Area Of the Square : "<<setiosflags(ios::fixed)<<setprecision(3)<<Sarea;
	
	cout<<endl;
	cout<<endl;
	
	totobArea=Sarea+Rarea+Carea;
	
	cout<<"Enter length of the Land: ";
	cin>>length;
	cout<<"Enter Width of the Land: ";
	cin>>width;
	
	Larea=length*width;
	
	RemLarea=Larea-totobArea;
	
	cout<<endl;
	cout<<"Area Of the Remaining Land : "<<setiosflags(ios::fixed)<<setprecision(3)<<RemLarea;
	
	cout<<endl;
	cost=FenceCost(length,width);
	cout<<"Price for Fence : Rs."<<setiosflags(ios::fixed)<<setprecision(3)<<cost;
}

float CircleArea(float radius)
{
	float Carea;
	
	Carea=(22.0/7)*radius*radius;
	
	return Carea;
}

float RecArea(float length, float width)
{
	float Rarea;
	
	Rarea=length*width;
	
	return Rarea;
}

float SqrArea(float length)
{
	float Sarea;
	
	Sarea=length*length;
	
	return Sarea;
}

float FenceCost(float &length, float &width)
{
	float cost;
	
	cost=(2*length)+(2*width);
	
	return cost;
}