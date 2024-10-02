#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;

class book
{
private:
    char *author, *title, *publisher;
    int price;
    int stock;

public:
    book(const char *author, const char *title, int price, const char *publisher, int stock)
    {
        this->author = new char[strlen(author) + 1];
        strcpy(this->author, author);

        this->title = new char[strlen(title) + 1];
        strcpy(this->title, title);

        this->price = price;

        this->publisher = new char[strlen(publisher) + 1];
        strcpy(this->publisher, publisher);

        this->stock = stock;
    }

    char* get_author()
    {
        return this->author;
    }
    char* get_title()
    {
        return this->title;
    }
    int get_price()
    {
        return this->price;
    }
    char* get_publisher()
    {
        return this->publisher;
    }
    int get_stock()
    {
        return this->stock;
    }

    void set_stock(int stock) {
        this->stock = stock;
    }

    void show_details()
    {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Price: " << price << "\n";
        cout << "Publisher: " << publisher << "\n";
    }

    ~book()
    {
        delete[] author;
        delete[] title;
        delete[] publisher;
    }
};

class BookInventory
{
private:
    vector<book *> books;

public:
    BookInventory()
    {
        book *b1 = new book("balaguruswamy","oop in c++", 250, "balaji", 10);
        book *b2 = new book("cormen", "introduction to algorithms", 900, "mit", 5);
        book *b3 = new book("yashwant kanitkar", "let us c", 350, "laxmi", 20);
        add(b1);
        add(b2);
        add(b3);
    }

    void add(book *b)
    {
        books.push_back(b);
    }

    void search()
    {
        char *author = new char[100];
        char *title = new char[100];
        cout << "Title: ";
        cin.getline(title, 100);
        cout << "Author: ";
        cin.getline(author, 100);

        if (is_available(author, title))
        {
            cout << "\n***Book is Available***\n\n";
            book *b = get_book(author, title);
            b->show_details();
            int required_copies;
            cout << "Required Copies: ";
            cin >> required_copies;
            if (is_in_stock(b, required_copies))
            {
                int total = total_price(b, required_copies);
                cout <<"Total price: " << total << endl;
                b->set_stock(b->get_stock() - required_copies);
            }
            else {
                cout << "The required copies not in stock\n";
            }
        }
        else
        {
            cout << "Book is Not Available" << endl;
        }

        delete[] author;
        delete[] title;
        cin.ignore();
    }

    book *get_book(const char *author, const char *title)
    {
        for (auto book : books)
        {
            if (strcmp(book->get_author(),author) == 0 && strcmp(book->get_title(), title) == 0)
            {
                return book;
            }
        }
        return NULL;
    }

    bool is_available(const char *author, const char *title)
    {
        for (auto book : books)
        {
            if (strcmp(book->get_author(),author) == 0 && strcmp(book->get_title(), title) == 0)
            {
                return true;
            }
        }
        return false;
    }

    bool is_in_stock(book *b, int required_copies)
    {
        return required_copies <= b->get_stock();
    }

    int total_price(book *b, int copies)
    {
        return b->get_price() * copies;
    }

    void get_books()
    {
        for (auto &book : books)
        {
            cout << "Author: " << book->get_author() << " and Title: " << book->get_title() << endl;
        }
    }

    ~BookInventory()
    {
        for (auto book : books)
        {
            delete book;
        }
    }
};

int main()
{
    BookInventory inventory;
    inventory.search();

    return 0;
}