#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

struct Review
{
    std::string title;
    int rating;
    double price;
};

bool operator<(const shared_ptr<Review> rp1, const shared_ptr<Review> rp2);
bool worseThan(const shared_ptr<Review> rp1, const shared_ptr<Review> rp2);
bool cheaperThan(const shared_ptr<Review> rp1, const shared_ptr<Review> rp2);
bool FillReview(Review &rr);
void ShowReview(const shared_ptr<Review> &rp);
void ShowMenu();
int main()
{
    vector<Review> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(temp);

    if (books.size() > 0)
    {
        ShowMenu();
        char choice;
        while (cin >> choice && choice != 'q')
        {
            vector<shared_ptr<Review>> books2(0);
            shared_ptr<Review> tmp;
            for (auto &book : books)
            {
                Review *rp = new Review;
                rp->title = book.title;
                rp->rating = book.rating;
                rp->price = book.price;
                tmp = shared_ptr<Review>(rp);
                books2.push_back(tmp);
            }

            switch (choice)
            {
            case '1':
                cout << "Original order:" << endl;
                cout << "Price\tRating\tBook\n";
                for_each(books2.begin(), books2.end(), ShowReview);
                break;
            case '2':
                cout << "Alphabet order:" << endl;
                cout << "Price\tRating\tBook\n";
                sort(books2.begin(), books2.end());
                for_each(books2.begin(), books2.end(), ShowReview);
                break;
            case '3':
                cout << "Rating ascending:" << endl;
                cout << "Price\tRating\tBook\n";
                sort(books2.begin(), books2.end(), worseThan);
                for_each(books2.begin(), books2.end(), ShowReview);
                break;
            case '4':
                cout << "Rating descending:" << endl;
                cout << "Price\tRating\tBook\n";
                sort(books2.rbegin(), books2.rend(), worseThan);
                for_each(books2.begin(), books2.end(), ShowReview);
                break;
            case '5':
                cout << "Price ascending:" << endl;
                cout << "Price\tRating\tBook\n";
                sort(books2.begin(), books2.end(), cheaperThan);
                for_each(books2.begin(), books2.end(), ShowReview);
                break;
            case '6':
                cout << "Price descending:" << endl;
                cout << "Price\tRating\tBook\n";
                sort(books2.rbegin(), books2.rend(), cheaperThan);
                for_each(books2.begin(), books2.end(), ShowReview);
                break;
            case 'q':
                break;
            default:
                continue;
            }
        }
    }
    else
        cout << "No entries. ";
    cout << "Bye.\n";
    // cin.get();
    return 0;
}

bool operator<(const shared_ptr<Review> rp1, const shared_ptr<Review> rp2)
{
    if (rp1->title < rp2->title)
        return true;
    else if (rp1->title == rp2->title && rp1->rating < rp2->rating)
        return true;
    else
        return false;
}

bool worseThan(const shared_ptr<Review> rp1, const shared_ptr<Review> rp2)
{
    if (rp1->rating < rp2->rating)
        return true;
    else
        return false;
}

bool cheaperThan(const shared_ptr<Review> rp1, const shared_ptr<Review> rp2)
{
    if (rp1->price < rp2->price)
        return true;
    else
        return false;
}

bool FillReview(Review &rr)
{
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin, rr.title);
    if (rr.title == "quit")
        return false;
    std::cout << "Enter book rating: ";
    std::cin >> rr.rating;
    if (!std::cin)
        return false;
    std::cout << "Enter book price: ";
    std::cin >> rr.price;
    if (!std::cin)
        return false;
    // get rid of rest of input line
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const shared_ptr<Review> &rp)
{
    std::cout << (*rp).price << "\t" << (*rp).rating << "\t" << (*rp).title << std::endl;
}

void ShowMenu()
{
    cout << "1) original order     2) alphabet order    3) rating ascending" << endl;
    cout << "4) rating descending  5) price ascending   6) price descending  q) quit" << endl;
    cout << "Your choice: ";
}