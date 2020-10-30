#include<iostream>

using namespace std;

int main(){
	int sparse[4][4]={0};
	int row[]={0,1,3,2},col[]={1,0,2,3};
	int el[4]={2,3,1,7};
	for(int i=0;i<4;i++){
		sparse[row[i]][col[i]]=el[i];
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<sparse[i][j];
		}cout<<endl;
	}cout<<endl;
}
