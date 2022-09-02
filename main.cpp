#include<iostream>
using namespace std;
/******************************************************************************************************************
 Project Nmae : Stack using Singly Linked list
 Date 2 /sep/ 2022
*******************************************************************************************************************/
/******************************************************************************************************************
 Use Functions :          
                                      Push_Item();                    26 - 41
                                      Stack_Display();                45 - 61
                                      PoP_Element();                  65 - 78
*******************************************************************************************************************/

class Stack_Linked_List
{
  private:
    int data;
    Stack_Linked_List* Next;
  public:
    void Push_Item();
    void Stack_Display();
    void PoP_Element();
}*Head=NULL;

/****************************************************************************************************************
 Function Name : Push_Item 
 
*****************************************************************************************************************/
void Stack_Linked_List::Push_Item()
{
    Stack_Linked_List *insertNode=new Stack_Linked_List();
    cout<<"Enter the Item : "<<endl;
    cin>>insertNode->data;
    insertNode->Next=NULL;
    if(Head==NULL)
    {
        Head=insertNode;
    }
    else
    {
        insertNode->Next=Head;
        Head=insertNode;
    }
}
/****************************************************************************************************************
 Function Name : Stack_Display
****************************************************************************************************************/
void Stack_Linked_List::Stack_Display()
{
    Stack_Linked_List *tempDisplay;
    tempDisplay=Head;
    if(Head==NULL)
    {
        cout<<"Stack Is Empty";
    }
    while(tempDisplay!=NULL)
    {
        cout<<tempDisplay->data<<" ";
        tempDisplay=tempDisplay->Next;
    }
}
/****************************************************************************************************************
 Function Name : PoP_Element()
*****************************************************************************************************************/
void Stack_Linked_List::PoP_Element()
{
    Stack_Linked_List *tempPOP;
    tempPOP=Head;
    if(Head==NULL)
    {
        cout<<"Stack Is Empty ";
    }
    else
    {
       Head=tempPOP->Next;
       cout<<endl<<"PoP Element : "<<tempPOP->data<<endl;
       delete(tempPOP);
    }
}
/****************************************************************************************************************
 Function Name Main 
*****************************************************************************************************************/

int main()
{
    Stack_Linked_List obj;
    obj.Push_Item();
      obj.Push_Item();
        obj.Push_Item();
          obj.Push_Item();
    obj.Stack_Display();
    obj.PoP_Element();
    obj.Stack_Display();
}