#include<iostream>
using namespace std;
class publisher{
	protected:
		int to;
		string name;
	public:
		void ip(){
			cout<<"Enter The Name Of publisher";
			cin>>name;
			cout<<"Enter The turn over Of publisher";
			cin>>to;
		}
//		void show(){
//			cout<<"The name of student is :"<<name;
//			cout<<"The Roll No. Of Student is :"<<roll;
//		}
};
class branch:public publisher{
	protected:
		string city;
		int employees;
	public:
		void get(){
			cout<<"Enter city is";
			cin>>city;
			cout<<"Enter The number of employees";
			cin>>employees;
//			cout<<"Enter The Marks Of english";
//			cin>>e;
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
class author: public branch{
	protected:
		string aname;
	public:
		void input(){
			cout<<"enter The name of author";
			cin>>aname;
		}
		void output(){
			cout<<"Publisher name is "<<name;
			cout<<"TO Of pub is "<<to;
			cout<<"city of pub is"<<city;
			cout<<"number of employees is"<<employees;
			cout<<"Author Name is"<<aname;
		}			 
};
int main(){
	author a1;
	a1.ip();
	a1.get();
	a1.input();
	a1.output();
	return 0;
}
