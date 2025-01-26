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
        string getName() {
            return name;
        }
};

int main() {
    const int numBooks = 3; // Number of books to be input
    Book books[numBooks];

    for (int i = 0; i < numBooks; ++i) {
        string name;
        int price, no_of_page;

        cout << "Enter name of book " << (i + 1) << ": ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter price of book " << (i + 1) << ": ";
        cin >> price;

        cout << "Enter number of pages of book " << (i + 1) << ": ";
        cin >> no_of_page;

        books[i].setName(name);
        books[i].setPrice(price);
        books[i].setNoOfPages(no_of_page);
    }

    cout << "You have entered the following books:" << endl;
    for (int i = 0; i < numBooks; ++i) {
        cout << "Book " << (i + 1) << ": " << books[i].getName() << endl;
    }

    return 0;
}
