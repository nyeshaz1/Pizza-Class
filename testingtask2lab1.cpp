#include<iostream>
using namespace std;
class Circle{
	private:
		float radius ;
		const float pi=3.1416;
	public:
		
		float rset(float r){ // this is setter function
			if (r>0){
				radius = r;
			}
			else {
			
			    radius=0;	
			}
			
			
		}
		float rget(){ // this is getter function
			return radius;		
		}
		//Circumference member  function 
		float circumference(){
			return 2*pi*radius;
		}
		//Area member function 
		float area(){
			return pi*radius*radius;
		}
		
		
	
};

int main(){
	Circle c1;
	float r ;
	cout<<"Enter the radius of Cicle : ";
	cin>>r;
	c1.rset(r);
	cout<<"The radius of Circle is : "<<c1.rget()<<endl;
	cout<<"The Circumference if Circle is : "<<c1.circumference()<<endl;
	cout<<"The area of Circle is : "<<c1.area()<<endl;
	return 0;
}