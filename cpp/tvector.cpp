#include<iostream>
using namespace std;

template<class T>
class vector{
	T* arr;
	int capacity;
	int size;
public:
	vector(){
		arr = new T[capacity=1];
		size=0;
	}

	void push(T data){
		if(size==capacity){
			T* temp = new T[2*capacity];
			for(int i=0;i<size;i++)
				temp[i]=arr[i];
			delete[] arr;
			capacity*=2;
			arr=temp;
		}
		arr[size]=data;
		size++;
	}

	void push(int index,T data){
		if(index==size){
			push(data);
		}else if(index>size){
			cout<<"can't push beyond size!!"<<endl;
		}else{
			arr[index]=data;
		}
	}

	void pop(){
		size--;
	}

	void print(){
		for(int i=0;i<size;i++){
			cout<<arr[i]<<"\t";
			
		}cout<<endl;
	}

	T operator*(vector &y){
		T sum = 0;
		for(int i=0;i<size;i++)
			sum+=this->arr[i] * y.arr[i];

		return sum;
	}
	
};

int main(){
	vector<int> v1;
	v1.push(1);
	v1.push(2);
	v1.push(3);

	vector<int> v2;
	v2.push(4);
	v2.push(5);
	v2.push(6);

	int R = v1*v2;
	cout<<R<<endl;
}
