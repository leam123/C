typedef struct{
	char id[10];
	char name[100];
	double price;
	int quantity;
}Product;

void assign(Product *prod, char id[],char name[],double price,int quantity);

int checkQuantity(int qty);// 1 value 0 invalid
int checkPrice(double p);// 1 value 0 invalid

void display(Product prod);

void setQuantity(Product *prod,int quantity);
void setPrice(Product *prod,double price);



