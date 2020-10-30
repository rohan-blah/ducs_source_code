/* THIS IS A PROGRAM SHOWING IMPLEMENTATION FOR TWO SEARCH TECHNIQUES, ON INTEGER LISTS.
**NAMELY LINEAR SEARCH AND BINARY SEARCH.
**WRITTEN BY :- YASHRAJ JANGIR				DATE :- 21/AUGUST/2020
*/



//Necessary header files

#include<iostream>
#include<list>
#include<iterator>
#include<cmath>

using namespace std;

//function declarations.

void showlist(list <int> ls); 	//function for printing list.
int mainMenu(); 	//function for main menu.
int linearS(list<int> ls,int search_element); 	//function for linear search.
void binaryS(list<int> ls,int search_element); 	//function for binary search.Declared as void because this function just tells
												//if element is present in list or not.
//starting of main function.

int main(){
	cout<<"************************************************************"<<endl;
	cout<<"*    THIS IS A SEARCH PROGRAM WITH LIST IMPLEMENTATION.    *"<<endl;
	cout<<"************************************************************"<<endl;
	cout<<"               Enter initial size of list : ";
	int inSize;
	cin>>inSize;
	cout<<"               Enter elements for the list : "<<endl;
	list<int> lst;
	int ele;
	cout<<"                           ";
	cin>>ele;
	lst.assign(1,ele);
	while(inSize>1){
		
		cout<<"   		           ";
		cin>>ele;
		lst.push_back(ele);
		inSize--;
	}

	cout<<"               List is : ";
	showlist(lst);

	cout<<"************************************************************"<<endl;
	cout<<"*                    Select your choice                    *"<<endl;
	cout<<"************************************************************"<<endl;
	int ch=0;

	do{ 													//Code for driving main menu and performing actions.
		ch=mainMenu();
		
		if(ch==1){
			int flag = 1;
			do{
				int el;
				cout<<"                Enter new element : ";
				cin>>el;
				lst.push_back(el);
				cout<<"                Want to add More ? ('y' or 'n') ";
				char fl;
				cin>>fl;
				if(fl=='y') 
					;
				else if(fl=='n') 
					flag=0;
								
			}while(flag==1);
			cout<<"                List is : ";
			showlist(lst);
		}
		else if(ch==2){
			cout<<"               Enter element for search : ";
			int element;
			cin>>element;
			int index = linearS(lst,element);
			if(index==-1){
				cout<<"              Element not in list ";
			}else{
				cout<<"              Element "<<element<<" found at index "<<index<<endl;
			}
		}
		else if(ch==3){
			cout<<"              Enter element for search : ";
			int element1;
			cin>>element1;
			binaryS(lst,element1);
		}
		else if(ch==4){
			cout<<"                 GOOD BYE :) "<<endl;
		}	
		else{ 
			cout<<"              Enter correct choice!!!!!";
		}
	}while(ch!=4);	
}

void showlist(list<int> g){ 										//Function definition for showlist.
	for(list<int>::iterator it = g.begin(); it != g.end(); ++it)
		cout<<*it<<", ";
	cout<<endl; 
}

int mainMenu(){ 													//Function definition for mainMenu.
	cout<<"************************************************************"<<endl;
	cout<<"*                1.) Enter more elements                   *"<<endl;
	cout<<"*                2.) Linear Search                         *"<<endl;
	cout<<"*                3.) Binary Search                         *"<<endl;
	cout<<"*                4.) QUIT                                  *"<<endl;
	cout<<"************************************************************"<<endl;
	int choice;
	cin>>choice;
	return choice;
}

int linearS(list<int> g,int s){ 									//function definition for linear search.
	int index=0;

	list<int>::iterator it;
	for(it=g.begin();it!=g.end();it++){
		if(*it==s){
			return index;
		}
		else{
			index++;
		}
	}

	return -1;

}

void binaryS(list<int> g,int s){ 									//function definition for binary search.
	g.sort();
	cout<<"Sorted list : ";
	showlist(g);
	int midEle(list<int> l);
	list<int> :: iterator S;
	do{
		S = g.begin();
		advance(S,midEle(g)-1);
		if(*S>s){
			do{
				int e_m=*S;
				for(list<int> ::iterator itr=g.begin();itr!=g.end();itr++){
					if( *itr > e_m ){
						g.remove(*itr);
					}
				}
				cout<<"now the list to be searched in : ";
				showlist(g);

				S=g.begin();
				advance(S,midEle(g)-1);
			}while(*S!=s);
		}else if(*S<s){
			do{
				int e_m=*S;
				for(list<int> ::iterator itr=g.begin();itr!=g.end();itr++){
					if(*itr<e_m){
						g.remove(*itr);
					}
				}
				cout<<"now the list to be searched in : ";
				showlist(g);

				S=g.begin();
				advance(S,midEle(g)-1);
			}while(*S!=s);
		}else if(*S==s){
			cout<<"Element is in list"<<endl;
		}else{

			cout<<"Element not in list!!!!";
			break;
		}
		
	}while(*S!=s);
}

int midEle(list<int> l){ 									//This is a function to get the index of middle element.
	double size = l.size();
	int middle = ceil(size/2);

	return middle;
}