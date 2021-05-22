#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class chain_WO{
	private:
		int a[10][2];
	public:
		chain_WO(){
			int i;
			for (i=0;i<10;i++){
				a[i][0]=-1;
				a[i][1]=-1;
			}
		}
		int create(int num){
			int key;
			key=num%10;
			return key;
		}
		void display(){
			int i;
			cout<<"\nThe Hash Table Is...\n";
			cout<<"\n"<<"Index"<<"\t"<<"Data"<<"\t"<<"Chain";
			for (i=0;i<10;i++){
				cout<<"\n "<<i<<"\t"<<a[i][0]<<"\t"<<a[i][1];
			}
		}
		void chain(int key,int num){
			int i,ch;
			int count=0;
			int flag=0;
			i=0;
			while (i<10){
				if (a[i][0]!=-1){
				count++;
				i++;
				}
			}
			if (count==10){
				cout<<"\nHash Table Is Full";
				display();
			}
			if (a[key][0]==-1){
				a[key][0]=num;
			}
			else{
				ch=a[key][1];
				if (ch==-1){
					for(i=key+1;i<10;i++){
						if (a[i][0]==-1){
						a[i][0]=num;
						a[key][1]=i;
						flag=1;
						break;
						}
					}
				}
				else{
					while((a[ch][0]!=-1)&&(a[ch][1]!=-1)){
						ch=a[ch][1];
						for (i=ch+1;i<10;i++){
							if (a[i][0]==-1){
								a[i][0]=num;
								a[ch][1]=i;
								flag=1;
								break;
							}
						}
					}
					if (flag!=1){
						if (ch==-1){
							for (i=0;i<key;i++){
								if (a[i][0]==-1){
								a[i][0]=num;
								a[key][1]=i;
								flag=1;
								break;
							}
							}
						}
						else{
							while((a[ch][0]!=-1)&&(a[ch][1]!=-1)){
						ch=a[ch][1];
						for (i=ch+1;i<key;i++){
							if (a[i][0]==-1){
								a[i][0]=num;
								a[ch][1]=i;
								flag=1;
								break;
							}
						}
						}
					}
				}
			}
		}
    }
};
int main(){
	chain_WO c1;
	int ele;
	int j,key;
	for (j=0;j<5;j++){
		cout<<"Enter The Number";
		cin>>ele;
		key=c1.create(ele);
		c1.chain(key,ele);
	}
	c1.display();
	return 0;
}
