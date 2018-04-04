/*-----------------------------------------
 * methods and iterators of vector
 * (c)Written by DoubleCheese Burger, 2018
-----------------------------------------*/

#include <iostream>
#include <string>
#include <vector>

struct Review{
    std::string title;
    int rating;
};
bool FillReview(Review & rr);
void ShowReview(const Review & rr);

int main()
{
    using std::cout;
    using std::vector;
    vector<Review> books;
    Review temp;
    while (FillReview(temp))
      books.push_back(temp);
    int num = books.size;
    if (num > 0)
    {
        cout << "Thank you. You entered the following:\n"
            << "Rating\tBook\n";
        for (int i = 0; i < num; i++)
          ShowReview(books[i]);
        cout << "Reprising:\n"
            << "Rating\tBook\n";
        vector<Review>::iterator pr;
        for (pr = books.begin(); pr != books.end(); pr++)
          ShowReview(*pr);
        vector <Review> oldlist(books);
        if (num > 3)
        {
            // remove 2 items
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "After erasure:\n";
            










