#include<iostream>
using namespace std;
class terms{
	private:
		int coeff,expo;
	public:
		void inp(){
			cout<<"Enter The Coefficient"<<endl;
			cin>>coeff;
			cout<<"Enter The Exponent"<<endl;
			cin>>expo;
		}
		void show(){
			cout<<coeff<<"x^"<<expo<<" + ";
		}
		friend class poly;
};
class poly{
	private:
		terms t[10];
		int no;
	public:
		void getpoly(){
			cout<<"\nEnter The Number Of Terms"<<endl;
			cin>>no;
			for(int i=0;i<no;i++){
				t[i].inp();
			}
		}
		void showpoly(){
			for(int i=0;i<no;i++){
				t[i].show();
			}
			cout<<"\b\b ";
		};
		poly add(poly obj){
			poly temp;
			int i=0,j=0,k=0;
			while(i<no && j<=obj.no){
				if (t[i].expo ==obj.t[j].expo){
					temp.t[k].coeff=t[i].coeff+obj.t[j].coeff;
					temp.t[k].expo=t[i].expo;
					i++;
					j++;
					k++;
				}
				else if (t[i].expo<obj.t[j].expo){
					temp.t[k]=obj.t[j];
					k++;
					j++;				
				}
				else if (t[i].expo>obj.t[j].expo){
					temp.t[k]=t[i];
					k++;
					i++;				
				}
				}	
				while(j<obj.no){
						temp.t[k]=obj.t[j];
						j++;
						k++;
					}
					while(i<no)
					{
						temp.t[k]=t[i];
						i++;
						k++;
					}
			
			temp.no=k;
			return temp;
		}
};
int main(){
	poly p1,p2,p3;
	cout<<"\nFor First Polynomial"<<endl;
	p1.getpoly();
	p1.showpoly();
	cout<<"\nFor Second Polynomial"<<endl;
	p2.getpoly();
	p2.showpoly();
	p3=p1.add(p2);
	cout<<"\nThe Summation Of Two Polynomial Is::"<<endl;
	p3.showpoly();
	return 0;
}
