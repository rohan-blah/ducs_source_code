#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
	int checkSort(int[],int);
	
	int a[10];
	cout<<"Enter elements : "<<endl;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}

	cout<<"array is : ";
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	//sorting now

	int size = sizeof(a)/sizeof(a[0]);

	int key;
	int flag=0;
	int i=0;
	for(i=0;flag!=1;){
	
		int j=i;
		if(a[j]>a[j+1]){
			key=a[j];
			for(int k=j;k<10;k++){
				a[k]=a[k+1];
			}
			a[9]=key;

			continue;
		}
		if(i==8){
			i=0;
		}else i++;

		flag=checkSort(a,size);
	}

	

	cout<<"after sorting : ";
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int checkSort(int arr[],int size){
	int flag = 0;
	for(int i=0;i<size-1;i++){
		if(arr[i]<=arr[i+1]){
			flag=1;
		}else{
			flag=0;
			break;
		}
	}
	return flag;
}