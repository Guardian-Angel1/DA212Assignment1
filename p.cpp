#include <bits/stdc++.h>
using namespace std;

//defining struct
struct node{
		int data;
		struct node *next;	
	   }
	   
	   struct node *first;
	   struct node *last;
	   

	   //Function to count the total number of Nodes
	   int Count()
	   {
	   	int c=0;
		struct node *p=first;
		while(p->next!=NULL)
		{
			c++;
			p=p->next;
		}
		c=c+1;
		return(c);
	   }

	  
	  //Inserting element in beginning
	   void Insert_At_First(int a)
	   {
	   	struct node t=(struct node*)malloc(sizeof(struct node));
	   	t->data=a;
	   	t->next=first;
	   	first=t;
	   }


	 //Inserting Element
	 void Insert_At_Last(int a)
			
   	  {
	       struct node t=(struct node*)malloc(sizeof(struct node));
                t->data=a;
                t->next=NULL;
                last->next=t;
		last=t;	
	  }

		
	//Inserting Element in middle 
	void Insert_At_Middle(int a)
 	 {
		int total=Count();
		int mid=total/2;	
	 }

	//Inserting at a given index
	void Insert_At_Index(int a,int pos)
	{
		
	}



//Main Function
int main()
{
		int c=0;//Variable to store the total number of nodes while making linked list for the first time 


		//Making a Linked List Initially
		while(1)
		{
			int a;
			scanf("%d",&a);
			c++;
			//Creating First Node
			if(c==1)
			{
				struct node t=(struct node*)malloc(sizeof(struct node));
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


}
