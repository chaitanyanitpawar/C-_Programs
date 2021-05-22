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
		fraction(fraction &obj){
			numerator=obj.numerator;
			denominator=obj.denominator;
			}
		void show(){
		cout<<"The Fraction is: "<<numerator<<"/"<<denominator<<endl;
		};
};
int main(){
	int numerator,denominator;
	cout<<"Enter The Numerator::";
	cin>>numerator;
	cout<<"Enter The Denominator::";
	cin>>denominator;
	fraction f1(numerator,denominator),f2(f1);
	f1.show();
	f2.show();
	return 0;
};
