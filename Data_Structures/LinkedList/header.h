struct node{
	int data;  //Person p;
	struct node *next;
};

typedef struct{
	char name[100];
	int age;
}Person;

struct node* insertRear(struct node *head, int data);
struct node* insertFront(struct node *head, int data);
struct node* insertPos(struct node *head, int data, int pos);
int contains(struct node *head, int num);
int count(struct node *head);
void display(struct node *head);
