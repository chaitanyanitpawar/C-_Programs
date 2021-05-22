#include<iostream>
using namespace std;
class vehicle{
	protected:
		int wheel,passenger;
	public:
		void ip(){
			cout<<"Enter The No. of wheels";
			cin>>wheel;
			cout<<"Enter The No. of passenger";
			cin>>passenger;
		}
//		void show(){
//			cout<<"The name of student is :"<<name;
//			cout<<"The Roll No. Of Student is :"<<roll;
//		}
};
class heavyvehicle:public vehicle{
	protected:
		float load;
		string fuel;
	public:
		void get(){
			cout<<"Enter The load capacity";
			cin>>load;
			cout<<"Enter The type of fuel";
			cin>>fuel;
		}
//		void calc(){
//			total=m+s+e;
//			percentage=total/3;
//		}
//		void op(){
//			cout<<"The name of student is :"<<name;
//			cout<<"The Roll No. Of Student is :"<<roll;
//			cout<<"The Marks of maths is :"<<m;
//			cout<<"The Marks of science is :"<<s;
//			cout<<"The Marks of english is :"<<e;
//			cout<<"The total marks is :"<<total;
//			cout<<"The percentage is :"<<percentage;
//		}
};
class bus:public heavyvehicle{
	protected:
		string make;
	public:
		void input(){
			cout<<"Enter The company name";
			cin>>make;
		}
		void show(){
			cout<<"The number of wheels is"<<wheel;
			cout<<"The number of passenger is"<<passenger;
			cout<<"The type of fuel is"<<fuel;
			cout<<"The load capacity is"<<load;
			cout<<"The company is"<<make;
//			cout<<"The number of wheels is"<<wheel;
			
		}
		};

int main(){
	bus e1;
	e1.ip();
	e1.get();
	e1.input();
	e1.show();
	return 0;
}
