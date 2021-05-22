#include<iostream>
using namespace std;
class fraction{
	private:
		int numerator,denominator;
	public:
		fraction(int num,int den){
			numerator=num;
			denominator=den;
			}
		void show(){
		cout<<"The Fraction is: "<<numerator<<"/"<<denominator;
		};
};
int main(){
	int numerator,denominator;
	cout<<"Enter The Numerator::";
	cin>>numerator;
	cout<<"Enter The Denominator::";
	cin>>denominator;
	fraction f1(numerator,denominator);
	f1.show();
	return 0;
};
