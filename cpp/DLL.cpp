#include<iostream>
#include<cstddef>

using namespace std;

typedef string Elem;

class DNode{
private:
  Elem elem;
  DNode* prev;
  DNode* next;
  friend class DLinkedList;
};

class DLinkedList{
public:
  DLinkedList();
  ~DLinkedList();
  bool empty() const;
  const Elem& front() const;
  const Elem& back() const;
  void addFront(const Elem& e);
  void addBack(const Elem& e);
  void removeFront();
  void removeBack();
  void showlist();
private:
  DNode* header;
  DNode* trailer;
protected:
  void add(DNode* v,const Elem& e);
  void remove(DNode* v);
};

DLinkedList::DLinkedList(){
  header = new DNode;
  trailer = new DNode;
  header->next = trailer;
  trailer->prev = header;
}

DLinkedList::~DLinkedList(){
  while(!empty()) removeFront();
  delete header;
  delete trailer;
}

bool DLinkedList::empty() const{
  return (header->next == trailer);
}

const Elem& DLinkedList::front() const{
  return header->next->elem;
}

const Elem& DLinkedList::back() const{
  return trailer->prev->elem;
}

void DLinkedList::add(DNode* v,const Elem& e){
  DNode* u = new DNode;
  u->elem = e;
  u->next = v;
  u->prev = v->prev;
  v->prev->next = u;
  v->prev = u;
}

void DLinkedList::addFront(const Elem& e){
  add(header->next,e);
}

void DLinkedList::addBack(const Elem& e){
  add(trailer,e);
}

void DLinkedList::remove(DNode* v){
  DNode* u = v->prev;
  DNode* w = v->next;
  u->next = w;
  w->prev = u;
  delete v;
}

void DLinkedList::removeFront(){
  remove(header->next);
}

void DLinkedList::removeBack(){
  remove(trailer->prev);
}

void DLinkedList::showlist(){
  DNode* p = new DNode;
  p=header->next;
  cout<<"\nheader";
  while(p->next!=NULL){
    cout<<" <=> "<<p->elem;
    p=p->next;
  }
  cout<<" <=> trailer\n"<<endl;

}

int main(){
  cout<<"initializing Doubly linked list...."<<endl;
  DLinkedList list;
  cout<<"enter first element : ";
  Elem ele;
  cin>>ele;
  list.addFront(ele);

  int choice;

  do{
    cout<<"1.) add element from front"<<endl;
    cout<<"2.) add element from back"<<endl;
    cout<<"3.) remove element from front"<<endl;
    cout<<"4.) remove element from back"<<endl;
    cout<<"5.) show list"<<endl;
    cout<<"6.) quit"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>choice;

    switch (choice) {
      case 1:
        cout<<"Enter element : ";
        cin>>ele;
        list.addFront(ele);
        break;
      case 2:
        cout<<"Enter element : ";
        cin>>ele;
        list.addBack(ele);
        break;
      case 3:
        list.removeFront();
        break;
      case 4:
        list.removeBack();
        break;
      case 5:
        list.showlist();
        break;
      cout<<"Enter Choice : ";

    }
  }while (choice!=6);

}
