typedef struct{
	char fname[50];
	char mname[50];
	char lname[50];
} author;

typedef struct{
	char accessionNo[50];
	author name;
	char title[50];
	int issued;
} book;

void displayAllBooks(book books[],int n);
void displayBooks(book books[], int n, char lastname[]);
void displayBook(book books[], int n, char title[]);
void addNewBook(book books[],author name, char title[],int issued, int *n);
void replaceAuthor(book books[],author *author, char fname[],char mname[],char lname[], int n);
void displayNumberOfBooks(book books[], char title[], int n);
void displayTotalBooks(book books[], int n);
int issueBook(book books[], char title[], int *n, int type);
void menu();
