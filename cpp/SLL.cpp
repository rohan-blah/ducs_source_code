
#include<iostream>
#include<string.h>
#include<cstddef>
using namespace std;

class StringNode{
private:
  string elem;
  StringNode* next;

  friend class StringLinkedList;
};

class StringLinkedList{
public:
  StringLinkedList();
  ~StringLinkedList();
  bool empty() const;
  const string& front() const;
  void addFront(const string& e);
  void removeFront();
  void showlist();
private:
  StringNode* head;
};

StringLinkedList::StringLinkedList(){
  head=NULL;
}

StringLinkedList::~StringLinkedList(){
  while (!empty()) {
    removeFront();
  }
}

bool StringLinkedList::empty() const{
  return head==NULL;
}

const string& StringLinkedList::front() const{
  return head->elem;
}

void StringLinkedList::addFront(const string& e){
  StringNode* v=new StringNode;
  v->elem = e;
  v->next = NULL;
  if(head==NULL){
    head=v;
  }else{
    v->next=head;
    head=v;
  }
}

void StringLinkedList::removeFront(){
  StringNode* old = head;
  head=old->next;
  delete old;
}

void StringLinkedList::showlist(){
  StringNode* p = head;
  if(!p){
    cout<<"NO NODE !!! list empty !! returning...";
    return;
  }
  cout<<"head";
  while(p->next!=NULL){
    cout<<" -> "<<p->elem;
    p=p->next;
  }
  cout<<" -> "<<p->elem;
}

int main(){
  cout<<"Lnked list initialisation....."<<endl;
  StringLinkedList list;
  cout<<"Enter value for head : ";
  string ele;
  cin>>ele;
  list.addFront(ele);
  int choice;
  while(choice!=4){
    cout<<"\n1.) add element in list"<<endl;
    cout<<"2.) remove element from list"<<endl;
    cout<<"3.) show list"<<endl;
    cout<<"4.) quit"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch (choice) {
      case 1:
        cout<<"Enter element : ";
        cin>>ele;
        list.addFront(ele);
        break;
      case 2:
        list.removeFront();
        break;
      case 3:
        list.showlist();
        break;
      case 4:
      	cout<<"Exit\n"; break;
      default:
        cout<<"Enter correct choice!!!!";
    }
  }


}
