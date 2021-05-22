#include<iostream>
using namespace std;
class date{
	private :
		int day,month,year;
	public:
		date(int yy){
			day=15;
			month=8;
			year=yy;
		}
		date(date &obj){
			day=obj.day;
			month=obj.month;
			year=obj.year;
		}
		void show(){
		cout<<"The Date Of Independance Day is: "<<day<<"/"<<month<<"/"<<year<<endl;
		};
};
int main(){
	date d1(2022),d2(d1);
	d1.show();
	d2.show();
	return 0;
};
