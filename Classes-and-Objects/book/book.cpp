#include "book.h"
#include <iostream>

using namespace std;

Book::Book(string author, string title, string genre, int numPages)
{
    this->author = author;
    this->title = title;
    this->genre = genre;
    this->numPages = numPages;
}

string Book::getAuthor() const
{
    return author;
}

string Book::getTitle() const
{
    return title;
}

string Book::getGenre() const
{
    return genre;
}

int Book::getNumPages() const
{
    return numPages;
}

void Book::printBookDetails() const
{
    cout << "These are the details about the book you picked. The author is ";
    cout << author << ", the title is " << title ;
    cout << " and its a part of the " << genre << " genre. ";
    cout << "It currently has " << numPages << " pages." << endl;
}