#include<iostream>
using namespace std;
class student{
	private:
		string name,trade;
		int roll;
	public:
		void get(){
			cout<<"Enter The Name Of Student:";
			cin>>name;
			cout<<"Enter The Trade:";
			cin>>trade;
			cout<<"Enter The Roll No:";
			cin>>roll;
		}
		void put(){
			cout<<"Student Name Is:"<<name<<endl;
			cout<<"Trade Is:"<<trade<<endl;
			cout<<"Roll No. Is:"<<roll<<endl;
		}
};
class book{
	private:
		string bname;
		int code;
		float price;
	public:
		void get(){
			cout<<"Enter The Name Of Book:";
			cin>>bname;
			cout<<"Enter The Book Code:";
			cin>>code;
			cout<<"Enter The Price:";
			cin>>price;
		}
		void put(){
			cout<<"Name Is:"<<bname<<endl;
			cout<<"Code Is:"<<code<<endl;
			cout<<"Price Is:"<<price<<endl;
		}
};
class library{
	private:
		string date;
		int num;
		book b1;
		student s1;
	public:
		void gettrans(){
			cout<<"Enter The Date:";
			cin>>date;
			cout<<"Enter The Transaction Number:";
			cin>>num;
			b1.get();
			s1.get();
		}
		void show(){
			cout<<"Date Is:"<<date<<endl;
			cout<<"Transaction Number Is:"<<num<<endl;
			b1.put();
			s1.put();
		}
};
int main(){
	library l1;
	l1.gettrans();
	l1.show();
	return 0;};
