#include<iostream>
using namespace std;
class le{
	private:
		int var[2];
	public:
		le(){
		}
		le(int v1,int v2){
			var[0]=v1;
			var[1]=v2;
		}
		le calc(le obj1,le obj2){
			obj2.var[0]=var[0]+obj1.var[0];
			obj2.var[1]=var[1]+obj1.var[1];
			return obj2;
		};
		void show(){
			cout<<"z="<<var[0]<<"x+"<<var[1]<<"y"<<endl;	
		};
};
int main(){
	le l3;
	le l1(5,6),l2(5,4);
	l3=l1.calc(l2,l3);
	l3.show();
	return 0;};
