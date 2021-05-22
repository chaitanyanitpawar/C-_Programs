#include<iostream>
using namespace std;
class date{
	private:
		int day,month,year;
	public:
		date(int p){
			day=15;
			month=8;
			year=p;
			}
		void show(){
		cout<<"The Date Of Independance Day is: "<<day<<"/"<<month<<"/"<<year;
		};
};
int main(){
	date d1(2022);
	d1.show();
	return 0;
};
