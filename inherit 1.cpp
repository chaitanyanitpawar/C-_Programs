#include<iostream>
using namespace std;
class student{
	protected:
		int roll;
		string name;
	public:
		void ip(){
			cout<<"Enter The Name Of Student";
			cin>>name;
			cout<<"Enter The Roll No. Of Student";
			cin>>roll;
		}
		void show(){
			cout<<"The name of student is :"<<name;
			cout<<"The Roll No. Of Student is :"<<roll;
		}
};
class exam:public student{
	private:
		int m,s,e;
		float percentage,total;
	public:
		void get(){
			cout<<"Enter The Marks of maths";
			cin>>m;
			cout<<"Enter The Marks of science";
			cin>>s;
			cout<<"Enter The Marks Of english";
			cin>>e;
		}
		void calc(){
			total=m+s+e;
			percentage=total/3;
		}
		void op(){
			cout<<"The name of student is :"<<name;
			cout<<"The Roll No. Of Student is :"<<roll;
			cout<<"The Marks of maths is :"<<m;
			cout<<"The Marks of science is :"<<s;
			cout<<"The Marks of english is :"<<e;
			cout<<"The total marks is :"<<total;
			cout<<"The percentage is :"<<percentage;
		}
};
int main(){
	exam e1;
	e1.ip();
	e1.get();
	e1.calc();
	e1.op();
	return 0;
}
