#include<iostream>
#include<cstring> 
using namespace std;

class Book {
    private:
        string name;
        int price;
        int no_of_page;
    public:
        // setter
        void setName(string book_name) {
            name = book_name;
        }
        void setPrice(int bookPrice) {
            price = bookPrice;
        }
        void setNoOfPages(int NoOfPage) {
            no_of_page = NoOfPage;
        }

        // getter
        int getPrice() {
            return price;
        }
        int getNoOfPages() {
            return no_of_page;
        }
        string getName() {
            return name;
        }

        // count Book
        int countBooks(int book_price) {
            int count = 0;
            if (price < book_price) {
                count++;
            }
            return count;
        }

        // is book-present
        bool isBookPresent(string book) {
            return (name == book);
        }
};

int main() {
    Book book1, book2, book3;

    // Sample data
    book1.setName("Book One");
    book1.setPrice(150);
    book1.setNoOfPages(300);

    book2.setName("Book Two");
    book2.setPrice(250);
    book2.setNoOfPages(400);

    book3.setName("Book Three");
    book3.setPrice(100);
    book3.setNoOfPages(200);

    // Check if book is present
    string name_local = "Book Two";
    if (book1.isBookPresent(name_local)) {
        cout << "Book One is present." << endl;
    } else if (book2.isBookPresent(name_local)) {
        cout << "Book Two is present." << endl;
    } else if (book3.isBookPresent(name_local)) {
        cout << "Book Three is present." << endl;
    } else {
        cout << name_local << " is not present." << endl;
    }

    return 0;
}
