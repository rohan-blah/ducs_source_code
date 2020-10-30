#include<iostream>

using namespace std;

int main(){
	int a[10]={4,2,6,1,7};

	void printArray(int[]); 			// declaration of function to print array 
		
	printArray(a);

	int min=a[0];
	cout<<"SORTING NOW"<<endl;
	//SORTING STARTS NOW.
	int counter=1;
	for(int i=0;i<5-1;i++){   		//LOOP1 :- i=0										LOOP2 :- i=0 and j=2
		for(int j=i+1;j<5;j++){    //		   j=1 												 a[i]=2 and a[j]=6
			if(a[j]<a[i]){ 			// 	   	   now a[j]=a[1]=2 and a[i]=a[0]=4 					 since a[j]>a[i] so no swaping
				min=a[j]; 			// 		   clearly a[j]<a[i] ,so values are swapped. 		 array is {2,4,6,1,7}
				a[j]=a[i]; 			// 		   hence new array is {2,4,6,1,7}
				a[i]=min;
			}
			cout<<"pass "<<counter<<" ";
			printArray(a);
			counter++;
		}
	}

	cout<<"After sort ";          //LOOP FOR ARRAY OUTPUT.
	printArray(a);
}

void printArray(int arr[]){
	cout<<"array is : ";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<"  ";
	}cout<<endl;
}
