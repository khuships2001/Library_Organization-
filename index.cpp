#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void addbok();
void dipbok();
void bokaut();
void count();
void listacc();
void assacc();
struct lib
{
	int acno;
	float no_p;
	char booknam[30];
	char auther[20],flag[5];
}c[100];
int cont;
void main()
{
	int a;
	cout<<"\n\t----------------------------------------------------------------------\n";
	cout<<"\t         L i b r a r y     M a n a g e m e n t     S y s t e m\n";
	cout<<"\t----------------------------------------------------------------------\n";
	while(1)
	{
		cout<<"\n============================================================\n";
		cout<<"Press 1 for Add book information:\n";
		cout<<"Press 2 for Display book information:\n";
		cout<<"Press 3 for List all books of given author:\n";
		cout<<"Press 4 for List the count of books in the library:\n";
		cout<<"Press 5 for List the title of specified book:\n";
		cout<<"Press 6 for List the books in the order of accession number:\n";
		cout<<"Press 7 for Exit:\n";
		cin>>a;
		switch(a)
		{
		case 1:
			addbok();
			getch();
			break;
		case 2:
			dipbok();
			getch();
			break;
		case 3:
			bokaut();
			getch();
			break;
		case 4:
			count();
			getch();
			break;
		case 5:
			listacc();
			getch();
			break;
		case 6:
			assacc();
			getch();
			break;
		case 7:
			exit(0);
			break;
		default:
			cout<<"Invalid Entry.";
			break;
		}
	}

	getch();
}
void addbok()
{
	if(cont==9)
	{
		cout<<"\n No space\n";
		return;
	}
	cout<<"Add book information\n";
	cout<<"Enter Accession Number of book: ";
	cin>>c[cont].acno;
	cin.ignore();
	cout<<"Enter the book title: ";
	gets(c[cont].booknam);
	cout<<"Enter the Name of author: ";
	gets(c[cont].auther);
	cout<<"Enter Price of the Book: ";
	cin>>c[cont].no_p;
	cout<<"Book Issued (yes or not): ";
	cin>>c[cont].flag;
	cont++;
}
void dipbok()
{
	cout<<"\nDisplay book information\n";
	for(int i=0;i<cont;i++)
	{
		cout<<"\n=========================================";
		cout<<"\nAccession Number of book is: "<<c[i].acno;
		cout<<"\nTitle of book is: "<<c[i].booknam;
		cout<<"\nName of Author is: "<<c[i].auther;
		cout<<"\nPrice of book is: "<<c[i].no_p;
		cout<<"\nBook Issued (yes or not): "<<c[i].flag;
	}
}
void bokaut()
{
	int cnt=0,i;
	char nam[20];
	cin.ignore();
	cout<<"Enter the Author Name: ";
	gets(nam);
	for(i=0;i<cont;i++)
	{
		if(strcmp(nam,c[i].auther)==0)
		{
			cnt++;
			cout<<"\n=========================================";
			cout<<"\nAccession Number of book is: "<<c[i].acno;
			cout<<"\nTitle of book is: "<<c[i].booknam;
			cout<<"\nName of Author is: "<<c[i].auther;
			cout<<"\nPrice of book is: "<<c[i].no_p;
			cout<<"\nBook Issued (yes or not): "<<c[i].flag;
		}
	}
	if(cnt==0)
	{
		cout<<"\n Author Not found.\n";
	}
	
}
void count()
{
	cout<<"Total no of book in library: "<<cont;
}
void listacc()
{
	int cnt=0,i;
	char nam[20];
	cin.ignore();
	cout<<"Enter the Book Name: ";
	gets(nam);
	for(i=0;i<cont;i++)
	{
		if(strcmp(nam,c[i].booknam)==0)
		{
			cnt++;
			cout<<"\n=========================================";
			cout<<"\nAccession Number of book is: "<<c[i].acno;
			cout<<"\nTitle of book is: "<<c[i].booknam;
			cout<<"\nName of Author is: "<<c[i].auther;
			cout<<"\nPrice of book is: "<<c[i].no_p;
			cout<<"\nBook Issued (yes or not): "<<c[i].flag;
		}
	}
	if(cnt==0)
	{
		cout<<"\n Book Not found.\n";
	}
}
void assacc()
{
	int i,j,temp;
	for(i=0;i<cont;i++)
	{
		for(j=0;j<cont-1;j++)
		{
			if(c[i].acno>c[j+1].acno)
			{
				temp=c[i].acno;
				c[i].acno=c[j+1].acno;
				c[j+1].acno=temp;
			}
		}
	}
	for(j=0;j<cont;j++)
	{
		cout<<"\nAccession Number is: "<<c[j].acno;
		cout<<"\nTitle of book is: "<<c[j].booknam;
		cout<<"\nName of Author is: "<<c[j].auther;
		cout<<"\nPrice of book is: "<<c[j].no_p;
		cout<<"\nBook Issued (yes or not): "<<c[j].flag;
	}
}
