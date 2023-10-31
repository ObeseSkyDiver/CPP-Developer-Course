#include <iostream>
#include <string>
#include "book.h"

using namespace std;

void printBookDetails(const Book& book);


int main()
{
 
    Book gameOfThrones("George Martin","Game of Thrones", "Fantasy",899);
    Book mathBook("James Stewart", "Calculus", "Math", 1392);

    Book cppBook("Bjarne Stroustrup", "C++ book","Education", 1000);

    // printBookDetails(gameOfThrones);
    // printBookDetails(mathBook);
    // printBookDetails(cppBook);

    gameOfThrones.printBookDetails();
    mathBook.printBookDetails();
    cppBook.printBookDetails();

    return 0;
}

void printBookDetails(const Book& book)
{
    cout << "These are the details about the book you picked. The author is ";
    cout << book.getAuthor() << ", the title is " << book.getTitle();
    cout << " and its a part of the " << book.getGenre() << " genre. ";
    cout << "It currently has " << book.getNumPages() << " pages." << endl;
}