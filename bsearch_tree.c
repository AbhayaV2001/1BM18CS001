#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
};
typedef struct node* NODE;
NODE getnode(int item)
{
	NODE p;
	p=malloc(sizeof(struct node));
	p->data=item;
	p->lchild=NULL;
	p->rchild=NULL;
	return p;
} 
NODE insert(NODE root,int item)
{
	if(root==NULL)
		return getnode(item);
	if(item< root->data)
		root->lchild=insert(root->lchild,item);
	else if(item> root->data)
		root->rchild=insert(root->rchild,item);
	return root;
}
void inorder(NODE root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->lchild); 
        printf("%d ", root->data); 
        inorder(root->rchild); 
    } 
} 
void postorder(NODE p) 
{ 
     if (p == NULL) 
        return; 
  
     // first recur on left subtree 
     postorder(p->lchild); 
  
     // then recur on right subtree 
     postorder(p->rchild); 
  
     // now deal with the node 
     printf("%d ", p->data); 
}
void preorder(NODE p) 
{ 
     if (p == NULL) 
          return; 
  
     /* first print data of node */
     printf("%d ", p->data);   
  
     /* then recur on left sutree */
     preorder(p->lchild);   
  
     /* now recur on right subtree */
     preorder(p->rchild); 
}
int main()
{
	NODE root=NULL;
	int ele,choice,val;
	while(1)
	{
		printf("\n1.insert\n2.inorder\n3.postorder\n4.preorder\n5.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the element:");
				scanf("%d",&val);
				root=insert(root,val);
				break;
			case 2:inorder(root);
				break;
			case 3:postorder(root);
				break;
			case 4:preorder(root);
				break;
			case 5:return 0;
				break;
			default:printf("Invalid choice, try again!");
				break;
		}
	}
}
				
