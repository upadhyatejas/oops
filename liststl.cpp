#include <iostream>
#include <list>
using namespace std;
int main() //Main function
{
int choice, a,b;
list<int> A; list<int> B; //Declaration of the lists
//Inserting values into list B
B.push_back(10);
B.push_back(20);
B.push_back(30);
// Iterator from front to end of the list
list<int>::iterator i=A.begin();
do {
//Menu
cout<<"\nOperations on list"<<endl;

cout<<"1-Insert an element at front and end \n";
cout<<"2-Delete an element from front and end \n";
cout<<"3-Size of list\n";
cout<<"4-Remove element withspecific values and duplicate values \n ";
cout<<"5-Reverse the list\n ";
cout<<"6-Merge and sort the list \n ";
cout<<"7-Display the list\n 8-Exit\n";
cout<<"Enter your choice: ";
cin>>choice;
cout<<endl;
switch(choice)
{
// To insert values at front and end of list
case 1: cout<<"Element to be inserted at front: ";
cin>>a;
cout<<"Element to be inserted at end :";
cin>>b;
A.push_front(a);
A.push_back(b);
break;

case 2: A.pop_front(); //To delete values from front and end
A.pop_back();
cout<<"Elements deleted from front and back"<<endl;
break;
//To find sizeof the list
case 3: cout<<"Size of the listis: "<<A.size()<<endl;
break;
//To delete a specific value and repeated values from the list
case 4: cout<<"Enter the value to be deleted: ";
cin>>a;
A.remove(a);
A.unique();
cout<<"Value deleted"<<endl;
break;
//To reverse the list
case 5: cout<<"The reversed listis:"<<endl;
A.reverse();
for (i =A.begin(); i!= A.end(); i++)
cout<<endl;
break;

//To merge two listsand sort it
case 6: //Display list A cout<<"ListA:";
for (i =A.begin(); i!= A.end(); i++)
cout<<endl;
//Display list B cout<<"ListB:";
for (i =B.begin(); i!= B.end(); i++)
cout<<*i<<"\t";
cout<<*i<<"\t";
cout<<*i<<"\t";
cout<<endl<<endl;
A.merge(B);
A.sort();
//Display merged and sorted list
cout<<"Merged and sorted list:"<<endl;
for (i =A.begin(); i!= A.end(); i++)
cout<<*i<<"\t"; cout<<endl;
break;
//To display the list
case 7: cout<<"The listis:\n";
for (i =A.begin(); i!= A.end(); i++)

cout<<*i<<"\t";
cout<<endl;
break;
//Case exit
case 8: break;
//Invalid choice
default: cout<<"Invalid choice"<<endl;
}
}//End of switch
while (choice !=8); // End of do while
} //End of main
