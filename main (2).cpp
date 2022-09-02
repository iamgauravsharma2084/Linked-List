#include<iostream>
using namespace std;
/*******************************************************************************************
  Project Name : Singly Linked List in c++
  
********************************************************************************************/
/*******************************************************************************************
 Use Functions  :-     Function Name                                   start - End                                 
                       void Insert_Node_Head();                        53 - 79
                       void Insert_Node_position();                    76 - 101
                       void Insert_Node_End();                         106 - 125
                       void Delete_Node_Head();                        131 - 145 
                       void Delete_Node_position();                    150 - 167
                       void Delete_Node_End();                         169 - 191
                       void PeekElement_Head_End();                    196 - 216
                       void Linked_List_Reverse();                     221 - 235
                       void Linked_List_Display();                     240 - 248
                       void Linked_List_Search();                      254 - 290
                       void Linked_List_Count_duplicates_Element();    294 - 327
                       void Linked_List_Remove_duplicates_Element();   333 - 359
                       void Linked_List_Find_the_Middle_Element();     365 - 396
********************************************************************************************/
/*******************************************************************************************
  Date : 1 /September/ 2022
  Day :  Thursday
 *******************************************************************************************/
//***********************************************************************************************
class Singly_Linked_List
{
    private:
     int data; 
     class Singly_Linked_List *Link;

  public:
     void Insert_Node_Head();
     void Linked_List_Display();
     void Insert_Node_position();
     void Insert_Node_End();
     void Delete_Node_Head();
     void Delete_Node_position();
     void Delete_Node_End();
	 void PeekElement_Head_End(); 
	 void Linked_List_Reverse();
	 void Linked_List_Search();
	 void Linked_List_Count_duplicates_Element();
	 void Linked_List_Remove_duplicates_Element();
	 void Linked_List_Find_the_Middle_Element();
}*Head=NULL;

/***********************************************************************************************
Function Name : Insert_Node_Head
Parameter : void

/***********************************************************************************************/
void Singly_Linked_List::Insert_Node_Head()
{
    Singly_Linked_List *tempHead= new Singly_Linked_List();
    cout<<"Enter the Item : ";
    cin>>tempHead->data;
    tempHead->Link=NULL;
    
    if(Head==NULL)
    {
        Head=tempHead;
    }
    else
    {
       tempHead->Link=Head;
       Head=tempHead;
    }
    
}
/***********************************************************************************************
Function Name : Insert_Node_position
Parameter : void

/***********************************************************************************************/
void Singly_Linked_List::Insert_Node_position()
{
    int position,count=0;
    Singly_Linked_List *tempNew=new Singly_Linked_List();
    Singly_Linked_List *tempHead=Head;
    cout<<"Enter the New Item : ";
    cin>>tempNew->data;
    tempNew->Link-NULL;
    cout<<"Enter the position :";
    cin>>position;
    if(Head==NULL)
    {
        cout<<"List Is Empty "<<endl;
    }
    else
    {
        while(count < position-1)
        {
            tempHead=tempHead->Link;
            count++;
        }
       tempNew->Link=tempHead->Link;
       tempHead->Link=tempNew;
        
    }
}
/*********************************************************************************************
 Function Name : Insert_Node_End
 Parameter : void
**********************************************************************************************/
void Singly_Linked_List::Insert_Node_End()
{
    Singly_Linked_List *tempNew=new Singly_Linked_List();
    Singly_Linked_List *tempHead=Head;
    cout<<"Enter the New End Item :";
    cin>>tempNew->data;
    tempNew->Link=NULL;
    if(Head==NULL)
    {
        cout<<"List Is Empty ";
    }
    else
    {
        while(tempHead->Link!=NULL)
        {
            tempHead=tempHead->Link;
        }
        tempHead->Link=tempNew;
    }
}

/*********************************************************************************************
Function Name : Delete_Node_Head
Parameter : void
**********************************************************************************************/
void Singly_Linked_List::Delete_Node_Head()
{
    Singly_Linked_List *Delete_node_Head=Head;
    if(Head==NULL)
    {
        cout<<"List Is Empty ";
    }
    else
    {
        Head=Delete_node_Head->Link;
        delete (Delete_node_Head);
    }
    
    
}
/*********************************************************************************************
Function Name : Delete_Node_position
Parameter : void
**********************************************************************************************/
void Singly_Linked_List::Delete_Node_position()
{
    int position,count=0;
    Singly_Linked_List *Delete_node_position;
     Singly_Linked_List *Delete_node_temp;
    Delete_node_position=Head;
    cout<<"Enter the Delete position : ";
    cin>>position;
    while(count < position-1)
    {
        Delete_node_position=Delete_node_position->Link;
        count++;
    }
    Delete_node_temp=Delete_node_position->Link;
    Delete_node_position->Link=Delete_node_temp->Link;
    Delete_node_temp->Link=NULL;
    delete(Delete_node_temp);
}
/*********************************************************************************************
Function Name : Delete_Node_End
Parameter : void
**********************************************************************************************/
void Singly_Linked_List::Delete_Node_End()
{
    Singly_Linked_List *Delete_node_End;
    Singly_Linked_List *Delete_node_EndTemp;
    Delete_node_End=Head;
    if(Head==NULL)
    {
        cout<<"List Is Empty ";
    }
    else
    {
        while(Delete_node_End->Link!=NULL)
        {
            Delete_node_EndTemp=Delete_node_End;
            Delete_node_End=Delete_node_End->Link;
        }
        Delete_node_EndTemp->Link=NULL;
        delete(Delete_node_End);
    }
}
/*********************************************************************************************
Function Name : PeekElement_Head_End
Parameter : void
**********************************************************************************************/
void Singly_Linked_List::PeekElement_Head_End()
{
    Singly_Linked_List *PeekElement_Head;
    Singly_Linked_List *PeekElement_End;
    Singly_Linked_List *Delete_node_EndTemp;
    PeekElement_Head=Head;
    PeekElement_End=Head;
    if(Head==NULL)
    {
        cout<<"List Is Empty ";
    }
    else
    {
        cout<<endl<<"Head Item : "<<PeekElement_Head->data<<endl;
        while(PeekElement_End->Link!=NULL)
        {
            PeekElement_End=PeekElement_End->Link;
        }
        cout<<endl<<"End Item :"<<PeekElement_End->data<<endl;
    }
}
/*********************************************************************************************
 Function Name : Linked_List_Reverse
 Parameter : void
**********************************************************************************************/
void Singly_Linked_List:: Linked_List_Reverse()
{
    Singly_Linked_List *reversetemp=Head;
    Singly_Linked_List *temp=NULL;
    Singly_Linked_List *prev=NULL;
    cout<<endl<<"Linked List Reverse"<<endl;
    while(reversetemp!=NULL)
    {
        temp=reversetemp->Link;
        reversetemp->Link=prev;
        prev=reversetemp;
        reversetemp=temp;
    }
    Head=prev;
}
/*********************************************************************************************
Function Name : Linked_List_Display
Parameter : void
**********************************************************************************************/
void Singly_Linked_List::Linked_List_Display()
{
  Singly_Linked_List *tempHead;
  tempHead=Head;
  while(tempHead!=NULL)
  {
    cout<<tempHead->data<<" ";
    tempHead=tempHead->Link;
  }
}
/*********************************************************************************************
Function Name : Linked_List_Search
Parameter : void
**********************************************************************************************/
void Singly_Linked_List::Linked_List_Search()
{
    int Search,flag=0,position=0;
    Singly_Linked_List *tempHead;
    tempHead=Head;
    cout<<"Enter the Search ";
    cin>>Search;
    if(Head==NULL)
    {
        cout<<"List Is Empty ";
    }
    else
    {
        while(tempHead!=NULL)
        {
            if(tempHead->data==Search)
            {
               cout<<"This Element Present in Input Linked List : "<<tempHead->data<<endl;
               cout<<"Address : "<<tempHead<<endl;
              flag=1;
              break;
            }
            tempHead=tempHead->Link;
            position++;
        }
    }
    
    if(flag==1)
    {
         cout<<"This Element Present in position : "<<position+1<<endl;
    }
    else
    {
        cout<<endl<<"This Element Not Present in Input Linked List  "<<endl;
    }
    
}
/********************************************************************************************
  Function Name : Linked List Count Duplicates Element 
*********************************************************************************************/
void Singly_Linked_List::Linked_List_Count_duplicates_Element()
{
    int count=0;
    Singly_Linked_List *tempCount;
    Singly_Linked_List *temp;
    tempCount=Head;
    if(Head==NULL)
    {
        cout<<"List Is Empty ";
    }
    else 
    {
        while(tempCount->Link!=NULL)
        {
            temp=tempCount->Link;
            while(temp!=NULL)
            {
                if(tempCount->data==temp->data)
                {
                  count++;
                  break;
                }
                temp=temp->Link;
            }
            tempCount=tempCount->Link;
        }
        
        cout<<"Count of duplicate nodes : "<<count;
        
        
        
        
    }
}
/********************************************************************************************
  Function Name : Linked_List_Remove_duplicates_Element
  Function Return Type : void 
  
*********************************************************************************************/
void Singly_Linked_List::Linked_List_Remove_duplicates_Element()
{
    Singly_Linked_List *tempRemove;
    Singly_Linked_List *tempNext;
    tempRemove=Head;
    if(Head==NULL)
    {
        cout<<"List Is Empty ";
    }
    else
    {
        
        while(tempRemove->Link!=NULL)
        {
            if(tempRemove->data==tempRemove->Link->data)
            {
                tempNext=tempRemove->Link->Link;
                delete(tempRemove->Link);
                tempRemove->Link=tempNext;
            }
            else
            {
               tempRemove=tempRemove->Link; 
            }
        }
    }
}
/********************************************************************************************
 Function Name : Linked List Find the Middle Element 
*********************************************************************************************/
void Singly_Linked_List::Linked_List_Find_the_Middle_Element()
{
    int len=0,mid;
    Singly_Linked_List *tempMiddle;
     Singly_Linked_List *temp=Head;
    tempMiddle=Head;
    if(Head==NULL)
    {
        cout<<"List Is Empty ";
    }
    else
    {
     //Utility  find length of linked list
       while(tempMiddle->Link!=NULL)
       {
           len++;
           tempMiddle=tempMiddle->Link;
       }
       
       cout<<"Length  :"<<len;
       mid=len/2;
       while(mid--)
       {
           temp=temp->Link;
       }
       
       cout<<endl<<"The middle element is "<<temp->data;
       
       
       
    }
}
/********************************************************************************************
  Function Name : CallFunction
  
*********************************************************************************************/

void CallFunction()
{
 while(1)
 {
    int choice;
    Singly_Linked_List obj;
    cout<<endl;
    cout<<"No 01 : Insert Node Head"<<endl;
    cout<<"No 02 : Insert Node End "<<endl;
    cout<<"No 03 : Insert Node position "<<endl;
    cout<<"No 04 : Delete Node Head "<<endl;
    cout<<"No 05 : Delete Node End "<<endl;
    cout<<"No 06 : Delete Node position "<<endl;
    cout<<"No 07 : Linked List Reverse "<<endl;
    cout<<"No 08 : Linked List Display "<<endl;
    cout<<"No 09 : Linked List Search "<<endl;
    cout<<"No 10 : Linked List Count Duplicates Element "<<endl;
    cout<<"No 11 : Linked List Remove Duplicates Element "<<endl;
    cout<<"No 12 : Linked List Find the Middle Element "<<endl;
	cout<<"No 13 : Exit Linked List "<<endl;
    cout<<"Enter the Choice :";
    cin>>choice;
    if(choice==1)
    {
      obj.Insert_Node_Head();
    }
    else if(choice==2)
    {
      obj.Insert_Node_End();
    }
    else if(choice==3)
    {
      obj.Insert_Node_position(); 
    }
    else if(choice==4)
    {
      obj.Delete_Node_Head();
    }
    else if(choice==5)
    {
      obj.Delete_Node_End();  
    }
    else if(choice==6)
    {
       obj.Delete_Node_position();
    }
    else if(choice==7)
    {
       obj.Linked_List_Reverse();
    }
    else if(choice==8)
    {
       obj.Linked_List_Display(); 
    }
    else if(choice==9)
    {
       obj.Linked_List_Search();
    }
    else if(choice==10)
    {
        obj.Linked_List_Count_duplicates_Element();
    }
    else if(choice==11)
    {
        obj.Linked_List_Remove_duplicates_Element();
    }
    else if(choice==12)
    {
        obj.Linked_List_Find_the_Middle_Element();
    }
    else if(choice==13)
    {
        cout<<"Thank You ";
        exit(0);
    }
    else 
    {
        cout<<"Sorry ";
    }
 }
    
}


//*******************************************************************************************
int main()
{
	int ch;
   CallFunction();
   cin>>ch;
}