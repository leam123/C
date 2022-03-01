struct node{
	int data;
	struct node *next;
};

typedef struct{
	int age;
	char name;
} Person;

struct node *insertEnd(struct node *head, int data);
void reverse(struct node *head);
void display(struct node *head);
int max(struct node *head, int data);
int min(struct node *head, int data);
int location(struct node *head, int data);
struct node *insertPos(struct node *head, int data, int pos);
struct node *insertFront(struct node *head, int data);
//void iSort(struct node *head);
//void bSort(struct node *head);
void sSort(struct node *head);
void threeHighest(struct node *head, int data);
void threeLowest(struct node *head, int data);
int count(struct node *head);
int sum(struct node *head);
float average(struct node *head);
struct node *deleteEnd(struct node *head);
struct node *deletePos(struct node *head, int pos);
struct node *deleteBegin(struct node *head);

