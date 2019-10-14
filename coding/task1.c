#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
}*head=NULL;

int main(){
	create_list();
	display_list(head);
	return 0;
}

void display_list(struct node* t){
	while(t!=NULL){
		printf("%d\t",t->data);
		t=t->next;
	}

}

void create_list(){
	int n,val;
	struct node *p,*temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		p=malloc(sizeof(struct node));
		scanf("%d",&val);
		p->data=val;
		p->next=NULL;
		if(i==0){
			head=p;
		}else{
			temp=head;
			while(temp->next!=NULL)temp=temp->next;
			temp->next=p;
		}
	}
}

