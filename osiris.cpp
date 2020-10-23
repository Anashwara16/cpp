#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        
        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string atitle, string aauthor, int apages){
            title = atitle;
            author = aauthor;
            pages = apages;
        }
};


int main(){
    
    Book book1 ("A Short History of Nearly Everything", "Bill Bryson", 500);

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;
    
    Book book2 ("Lord of the Rings", "Tolkein", 750);

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;
    
    Book book3;

    cout << book3.title << endl;
    cout << book3.author << endl;
    cout << book3.pages << endl;
return 0;
}
