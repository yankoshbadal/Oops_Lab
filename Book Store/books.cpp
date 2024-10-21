#include<iostream>
#include<string>
#include<string.h>
#include<vector>
using namespace std;

class Book{

private:
	string title;
	string author;
	string publisher;
	int price;
	int stock;
	string position;

public:	
	    
	    static vector<Book> self;
	
	Book(string t, string a, string p, int pc, int s, string pos){
		this -> title = t;
		this -> author = a;
		this -> publisher = p;
		this -> price = pc;
		this -> stock = s;
		this -> position = pos;
		self.push_back(*this);	
	}

    string getTitle(){
        return this->title;
    }
    string getAuthor(){
        return this->author;
    }
    int getStock(){
        return this->stock;
    }
    int getPrice(){
        return this->price;
    }

	void displayDetails(){
		cout<<"********BOOK DETAIL********"<<endl;
		cout<<"Title: "<<title<<endl;
		cout<<"Author: "<<author<<endl;
		cout<<"Publisher: "<<publisher<<endl;
		cout<<"Price: "<<price<<endl;
		cout<<"Stock: "<<stock<<endl;
		cout<<"Self Position: "<<position<<endl;
	}
}; vector<Book> Book::self; 
// correctly declared a static vector self inside the Book class, 
// but static member variables need to be defined outside the class.

int main()
{
	
	Book b1("Understanding Calculus","Yankosh Badal","Badal Publications",599,90,"C32");
    Book b2("Introduction to HTML","Badal Kumar","Star Publications",349,10,"A27");
    Book b3("Handy Guide to Self Praise","Priyanshu Bharadwaj","Yankosh Publications",250,12,"C67");
	//b1.displayDetails();
    
    
    string temp_book1;
    string temp_auth1;
    cout << "Enter the name of the book"<<endl;
    getline(cin,temp_book1);

    bool found = false;

    for (auto book : Book::self) {
       
        string temp_book2 = book.getTitle();
        string temp_auth2 = book.getAuthor();
       
        if (temp_book2 == temp_book1) {

            cout<<"Plese enter name of the author"<<endl;
            getline(cin,temp_auth1);

            if (temp_auth1==temp_auth2){
            	 found = true;

                 cout<<"\n=======BOOK AVAILABLE======="<<endl;
                 book.displayDetails();

                 int stock1;
                 cout<<"\nPLEAS ENTER THE NO. OF BOOKS"<<endl;
                 cin>>stock1;

                 int stock2 = book.getStock();
            
            
            if (stock1>stock2){
                cout<<"OUT OF STOCK\n"<<endl;
                  }else{
                    cout<<"======ORDER PLACED======"<<endl;
                    cout<<"Total Cost: Rs " <<(book.getPrice()*stock1)<<"\n*****************************\n"<<endl;
                    
                  }
              };
         }
    }
    if (!found){
        cout<<"BOOK NOT AVAILABLE\n"<<endl;
    }
	return 0;
}