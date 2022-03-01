typedef struct{
	char id[10];
	char name[100];
	double price;
	int quantity;
}Product;

typedef struct{
	Product product[10];
	int n;  //0
}Products;

void addNewProduct(Products *p,Product prod);
void displayProducts(Products p);
int searchProduct(Products p,char name[]); //-1 not existing , if existing display the product
	

