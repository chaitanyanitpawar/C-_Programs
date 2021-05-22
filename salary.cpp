#include<iostream>
using namespace std;
class salary{
	private:
		int basic,ta,da,hra,total;
	public:
		salary(int b,int t){
			basic=b;
			ta=t;
			da=1000;
			hra=1500;
		}
		salary(int b,int t,int d,int h){
			basic=b;
			ta=t;
			da=d;
			hra=h;
		}
		void calc(){
			total=da+basic+ta+hra;
		};
		void show(){
			cout<<"Your Total Salary is "<<total<<endl;	
		};
};
int main(){
	salary s1(20000,1000),s2(20000,1000,1250,1750);
	s1.calc();
	s1.show();
	s2.calc();
	s2.show();
	return 0;};
