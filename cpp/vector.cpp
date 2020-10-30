#include<stdio.h>
#include<iostream>
using namespace std;

class vectorClass{
  int* arr;
  int capacity;
  int current;
public:
  vectorClass(){
    arr = new int[1];
    capacity=1;
    current=0;
  }
  void push(int data){
      if(current==capacity){
        int* temp = new int[2*capacity];
        for(int i=0;i<current;i++)
          temp[i]=arr[i];
        delete[] arr;
        capacity*=2;
        arr=temp;
      }
      arr[current]=data;
      current++;
  }

  void push(int data,int index){
    if(index==capacity)
      push(data);
    else
      arr[index]=data;
  }

  int get(int index){
    if(index<current)
      return arr[index];
  }

  void pop(){
    current--;
  }

  int size(){
    return current;
  }

  int getcapacity(){
    return capacity;
  }

  void print(){
    //cout<<"Total elements : "<<current<<endl;
    for(int i=0;i<current;i++){
      cout<<arr[i]<<"  ";
    }cout<<endl;
  }

};
  int menu(){
  cout<<"\n1 > insert element"<<endl;
  cout<<"2 > insert element at index"<<endl;
  cout<<"3 > remove element from back"<<endl;
  cout<<"4 > show vector"<<endl;
  cout<<"5 > Exit"<<endl;
  cout<<"\n\nEnter your choice : ";
  int ch;
  cin>>ch;
  return ch;

}

void action(int choice,vectorClass& ob){
  int ele;
  switch(choice){
    case 1:
      cout<<"Enter element to push : ";
      cin>>ele;
      ob.push(ele);
      break;
    case 2:
      cout<<"Enter index to change element : ";
      int index;
      cin>>index;
      cout<<"Enter element to push : ";
      cin>>ele;
      ob.push(ele,index);
      break;
    case 3:
      cout<<"popping...from back\n";
      ob.pop();
      break;
    case 4:
      cout<<"the vector is : ";
      ob.print();
      break;
    case 5:
      cout<<"Exit...\n";
      system("clear");
      break;
    default:
      cout<<"Enter correct choice...\n";
  }
}
int main(){
  vectorClass v;
  int d=0;
  do{
    system("clear");
    cout<<"Vector is : ";v.print();
    d=menu();
    action(d,v);
  }while(d!=5);

}
