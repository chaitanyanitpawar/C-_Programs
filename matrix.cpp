#include<iostream>
using namespace std;
class matrix{
	private:
		int rows,columns;
		int element[100][100];
	public:
		matrix(int m,int n){
			rows=m;
			columns=n;
		};
		matrix(){
			rows=3;
			columns=3;
		};
		void get(){
			for (int i=0;i<rows;i++)
				for (int j=0;j<columns;j++){
					cout<<"\nEnter The Element "<<i+1<<j+1<<" : ";
					cin>>element[i][j];
				}
		};
		void show(){
			cout<<"The Matrix Is: "<<endl;
			for (int i=0;i<rows;i++)
				for(int j=0;j<columns;j++){
					cout<<element[i][j]<<" ";
					if (j==columns-1){
						cout<<endl;
					}
				}
		};
		matrix add(matrix m1,matrix m2){
			if (rows==m1.rows && columns==m1.columns){
				m2.rows=rows;
				m2.columns=columns;
			for (int i=0;i<m2.rows;i++)
				for(int j=0;j<m2.columns;j++){
					m2.element[i][j]=element[i][j]+m1.element[i][j];
			}
			return m2;	
		}
		else{
			cout<<"Cannot Add Two Asymmetric Matrices"<<endl;
		}
		};
		matrix multiply(matrix m1,matrix m2){
			if (columns==m1.rows){
				m2.rows=rows;
				m2.columns=m1.columns;
				for(int i = 0; i < rows;i++)
        		for(int j = 0; j < m1.columns;j++)
        		{
            	m2.element[i][j]=0;
        		}
				for (int i=0;i<rows;i++)
				for (int j=0;j<m1.columns;j++)
				for (int k=0;k<columns;k++){
					m2.element[i][j]+=element[i][k]*m1.element[k][j];
					}
			return m2;
		}
		else{
			cout<<"Columns Of First Matrix Doesn't Match With Rows Of Second Matrix";
		}
};
};
int main(){
	matrix m1,m2,m3;
	m1.get();
	m1.show();
	m2.get();
	m2.show();
	m3=m1.multiply(m2,m3);
	m3.show();
	return 0;
}
