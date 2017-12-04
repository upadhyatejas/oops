#include<iostream>
using namespace std;
const int stmax = 5;
class element
{
 public:
 int key;
}
element stack[stmax];
int top = -1;
void push(int a)
{
 if(top==-2) top++;
 stack[++top].key = a;
}
element pop()
{
 try
 {
  if(top==-1) throw(top);
  return stack[top--];
}
catch(int &x)
{
cout<<”Exception thrown: Stack overflow\n”;
}
element temp;
temp.key = -1
return temp;
}
int  main()
{
 int choice,value;
 element temp;
 for(;;)
 {
  cout<<endl;
  cout<<”Enter operation to be performed\n”;
  cout<<”1.Push\n”<<”2.Pop\n”<<”3.Exit\n”;
  cin>>choice;
  switch(choice)
  {
   case 1:
    try
    {
     if((top+1)==stmax) throw(top);
      cout<<”Enter the value\n”;
     cin>>value;
     push(value);
    }
   catch(int &max)
   {
    cout<<”Exception thrown: Stack overflow\n”;
   }
   break;
   case 2:
temp =pop();
if(top==-1 && temp.key==-1)
{
  cout<<”stack empty”<<endl;
  break; 
}
else cout<<”popped element”<<temp.key<<endl;
break;
default:
case 3:
cout<<”End of program\n”
return 0;
}
}
} 
