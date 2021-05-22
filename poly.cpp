#include<iostream>
using namespace std;
class polynomial{
	private:
		int coeff[10];
		int expo[10];
		int order;
		string poly;
	public:
		polynomial(){
			poly="";
		}
		void get(){
			cout<<"Enter The Order Of Polynomial: ";
			cin>>order;
			for (int i=0;i<order;i++){
				cout<<"Enter The Coefficient"<<i+1;
				cin>>coeff[i];
				cout<<"Enter The Exponent"<<i+1;
				cin>>expo[i];
			}
		};
		void show(){
			for (int i=0;i<order;i++){
				
			  cout<<coeff[i]<<"x^"<<expo[i]<<"+";
			}};
		polynomial add(polynomial p2,polynomial &p3){
			p3.order=order;
			for (int i=0;i<order;i++){
				p3.coeff[i]=p2.coeff[i]+coeff[i];
			}
			return p3;}
	};

int main(){
	polynomial p1,p2,p3;
	p1.get();
	p1.show();
	p2.get();
	p2.show();
	p3=p1.add(p2,p3);
	p3.show();
	return 0;
};
