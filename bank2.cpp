#include<iostream>
using namespace std;
class Ac{
	private:
		int number,amt;
		string name,type;
	public:
		Ac(string n,string t){
			name=n;
			type=t;
			number=12122;
			amt=0;
			}
		Ac(Ac &obj){
			name=obj.name;
			type=obj.type;
			number=obj.number;
			amt=obj.amt;
		}
		void deposit(){
			int dep;
			cout<<"Enter The Amount You Want To Deposit::"<<endl;
			cin>>dep;
			amt=amt+dep;
			cout<<"Rs. "<<dep<<" depositted successfully. Your Account Balance is "<<amt<<endl;
			};
		void withdraw(){
			int with;
			cout<<"Enter The Amount You Want To Withdraw::"<<endl;
			cin>>with;
			if (amt>with){
				amt=amt-with;
				cout<<"Rs. "<<with<<" removed successfully. Your Account Balance is "<<amt<<endl;
			}
			else{
				cout<<"Your Account Has Insufficient Balance"<<endl;
			}
		};
		void show(){
			cout<<"Account Name Is:"<<name<<endl;
			cout<<"Account Number Is:"<<number<<endl;
			cout<<"Account Type Is:"<<type<<endl;
			cout<<"Account Balance Is"<<amt<<endl;
		}
		};
int main(){
	string n,t;
	cout<<"Enter The Name Of Account Holder: "<<endl;
	cin>>n;
	cout<<"Enter The Type Of Account: "<<endl;
	cin>>t;
	Ac a1(n,t),a2(a1);
	a1.deposit();
	a1.withdraw();
	a2.show();
	return 0;
};
