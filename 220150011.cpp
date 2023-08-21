#include <bits/stdc++.h>
using namespace std;


//SINGLE LINKED LIST

//defining struct
struct nodesl
       {
		int data;
		struct nodesl *next;	
	   };
	   
	   struct nodesl *first;
	   struct nodesl *last;

       

	   //Function to count the total number of nodes
	   int Count()
	   {
	   	int c=0;
		struct nodesl *p=first;
		while(p->next!=NULL)
		{
			c++; 
            p=p->next;
		}
		c=c+1;
		return(c);
	   }



	  //Insertion
    


	  //Inserting element in beginning
	   void Insert_At_First(int a)
	   {
        struct nodesl *p=first;
	   	struct nodesl *t=(struct nodesl*)malloc(sizeof(struct nodesl));
	   	t->data=a;
	   	t->next=first;
	   	first=t;
	   }

    
	 //Inserting Element at the end
	 void Insert_At_Last(int a)
			
   	  {
	       struct nodesl *t=(struct nodesl*)malloc(sizeof(struct nodesl));
                t->data=a;
                t->next=NULL;
                last->next=t;
		        last=t;	
	  }

		
	//Inserting Element in middle 
	void Insert_At_Middle(int a)
 	 {
		int total=Count();
		int mid=(total/2)+1;
        Insert_At_Index(a,mid);
	 }

	//Inserting at a given index
	void Insert_At_Index(int a,int pos)
	{
		int c=2;
        struct nodesl *p=first;
        //To take the pointer to the node previous to the position at which we have to insert a node
        while(c<pos)
        {
            c++;
            p=p->next; 
        }
         struct nodesl *t=(struct nodesl*)malloc(sizeof(struct nodesl));
                t->data=a;
                t->next=p->next;
                p->next=t;
		        p=p->next;	
	}


        //Updation


        //Updation at Beginning
        void Updation_At_Beginning(int a)
        {
            struct nodesl *p=first;
            p->data=a;
        }
        //Updating at End
        void Updation_At_End(int a)
        {
            struct nodesl *p=last;
            p->data=a;
        }
        //Updating at Middle
         void Updation_At_Middle(int a)
         {
            int total=Count();
            if(total%2==0)
            {
                int mid=total/2;
                Updation_At_Index(a,mid);
            }
            else
            {
                int mid = (total+1)/2 ;
                Updation_At_Index(a,mid);
            }
         }

        //Updation at Index
         void Updation_At_Index(int a,int pos)
         {
            int c=1;
            struct nodesl *p=first;
            //To take the pointer to the node at which we have to update the node value
            while(c<pos)
             {
                    c++;
                    p=p->next; 
             }
             p->data=a;
         }
         


         //Deletion


        //Deletion At Beginning
         void Deletion_At_Beginning()
            {
                first=first->next;
            }

        //Deletion At End
        void Deletion_At_End()
            {
		    struct nodesl *p=first;
		    while(p->next!=last)
		        {
			        p=p->next;
		        }
                p->next=NULL;
                last=p;

            }

        //Deletion at middle
        void Deletion_At_Middle()
            {
             int total=Count();
            if(total%2==0)
            {
                int mid=total/2;
                Deletion_At_Index(mid);
            }
            else
            {
                int mid = (total+1)/2 ;
                Deletion_At_Index(mid);
            }       
            }
        
        //Deletion at given index
        void Deletion_At_Index(int pos)
        {
            int c=2;
            struct nodesl *p=first;
            //To take the pointer to the previous node at which we have to delete the node 
            while(c<pos)
             {
                    c++;
                    p=p->next; 
             }
             p->next=(p->next)->next;
        }


     //Funtion to implement all actions with respect to Single Linked List
       void Single()
       {
         cout<<"Start making a linked List"<<endl;
        //Variable to store the total number of nodes while making linked list for the first time 
		int c=0;

		//Making a Linked List Initially
		while(1)
		{
            cout<<"Enter value for the next nodesl."<<endl;
            cout<<"Press -1 to exit"<<endl;
			int a;//Taking input
			scanf("%d",&a);
            if(a==-1)
            break;
			c++;
			
            //Creating First node
			if(c==1) 
			{
				struct nodesl *t=(struct nodesl*)malloc(sizeof(struct nodesl));
               				 t->data=a;
               				 t->next=NULL;
               				 first=t;
               				 last=t;
			}
			//Creating other nodes
			else
			{
				Insert_At_Last(a);
			}
		}

        cout<<"You have constructed a linked list with "<<c<<" elements."<<endl;
        cout<<"Action you want to perform:"<<endl;
        cout<<"Press 1 for Inserting an element in the list:"<<endl;
        cout<<"Press 2 for Updating an element in the list:"<<endl;
        cout<<"Press 3 for Deleting an element in the list:"<<endl;
        cout<<"Press 4 for Searching an element in the list:"<<endl;
        int choice;
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                cout<<"Action you want to perform:"<<endl;
                cout<<"Press 11 for Inserting an element in the beginning:"<<endl;
                cout<<"Press 12 for Inserting an element in the end:"<<endl;
                cout<<"Press 13 for Inserting an element in the middle:"<<endl;
                cout<<"Press 14 for Inserting an element at a given position:"<<endl;
                int ins_ch;
                scanf("%d",&ins_ch);
                if(ins_ch==11)
                {
                    cout<<"Enter the value to be entered in the beginning of the linked list"<<endl;
                    int val;
                    cin>>val;
                    Insert_At_First(val);
                    cout<<"Value Inserted at the beginning of the linked list"<<endl;
                }

                else if(ins_ch==12)
                {
                    cout<<"Enter the value to be entered at the end of the linked list"<<endl;
                    int val;
                    cin>>val;
                    Insert_At_Last(val);
                    cout<<"Value Inserted at the end of the linked list"<<endl;
                }

                else if(ins_ch==13)
                {
                    cout<<"Enter the value to be entered in the middle of the linked list"<<endl;
                    int val;
                    cin>>val; 
                    Insert_At_Middle(val);
                    cout<<"Value Inserted in the middle of the linked list"<<endl;
                }

                else if(ins_ch==14)
                {
                    cout<<"Enter the position at which value has to be entered"<<endl;
                    int pos;
                    cin>>pos;
                    cout<<"Enter the value to be entered at the given position of the linked list"<<endl;
                    int val;
                    cin>>val;
                    Insert_At_Index(val,pos);
                    cout<<"Value Inserted at the given position of the linked list"<<endl;
                }
                //Insertion code ends
            }
            break;
            case 2:
            {
                cout<<"Action you want to perform:"<<endl;
                cout<<"Press 21 for Updating an element in the beginning:"<<endl;
                cout<<"Press 22 for Updating an element in the end:"<<endl;
                cout<<"Press 23 for Updating an element in the middle:"<<endl;
                cout<<"Press 24 for Updating an element at a given position:"<<endl;
                int upd_ch;
                scanf("%d",&upd_ch);
                if(upd_ch==21)
                {
                    cout<<"Enter the value to be updated in the beginning of the linked list"<<endl;
                    int val;
                    cin>>val;
                    Updation_At_Beginning(val);
                    cout<<"Value Updated at the beginning of the linked list"<<endl;
                }
                 else if(upd_ch==22)
                {
                    cout<<"Enter the value to be updated at the end of the linked list"<<endl;
                    int val;
                    cin>>val;
                    Updation_At_End(val);
                    cout<<"Value Updated at the end of the linked list"<<endl;
                }
                else if(upd_ch==23)
                {
                    cout<<"Enter the value to be updated at the middle position of the linked list"<<endl;
                    int val;
                    cin>>val;
                    Updation_At_End(val);
                    cout<<"Value Updated at the middle of the linked list"<<endl;
                }
                else if(upd_ch==14)
                {
                    cout<<"Enter the position at which value has to be updated"<<endl;
                    int pos;
                    cin>>pos;
                    cout<<"Enter the value to be updated at the given position of the linked list"<<endl;
                    int val;
                    cin>>val;
                    Updation_At_Index(val,pos);
                    cout<<"Value Updated at the given position of the linked list"<<endl;
                }
                //Updation Code Ends

            }
            break;
            case 3:
            {
              cout<<"Action you want to perform:"<<endl;
                cout<<"Press 31 for Deleting an element in the beginning:"<<endl;
                cout<<"Press 32 for Deleting an element in the end:"<<endl;
                cout<<"Press 33 for Deleting an element in the middle:"<<endl;
                cout<<"Press 34 for Deleting an element at a given position:"<<endl;
                int del_ch;
                scanf("%d",&del_ch);
                if(del_ch==31)
                {
                    Deletion_At_Beginning();
                    cout<<"Node Deleted at the beginning of the linked list"<<endl;
                }  
                else if(del_ch==32)
                {
                    Deletion_At_End();
                    cout<<"Node Deleted at the end of the linked list"<<endl;
                }
                else if(del_ch==33)
                {
                    Deletion_At_Middle();
                    cout<<"Node Deleted at the middle of the linked list"<<endl;
                }
                else if(del_ch==34)
                {
                    cout<<"Enter the position at which value has to be deleted"<<endl;
                    int pos;
                    cin>>pos;
                    Deletion_At_Index(pos);
                    cout<<"Node Deleted at the given index of the linked list"<<endl;
                }
                //Deletion Ends
            }
            break;
            case 4:
            {
                    cout<<"Enter the element you want to search"<<endl;
                    int ele;
                    cin>>ele;
                    struct nodesl *p=first;
                    int c=0;
                    int pos=0;
		            while(p->next!=NULL)
		                {
                            pos++;
                            if(p->data==ele)
                            {
                                c=1;
                                break;
                            }
                            p=p->next;
		                }
                        cout<<"Yay!,Element Found at index "<<pos<<endl;
                        //Searching Ends
            }
            break;
            default:
            {
                cout<<"Invalid Input"<<endl;
            }
            break;
        }

       }




       //DOUBLE LINKED LIST





//Main Function
int main()
{
      

}