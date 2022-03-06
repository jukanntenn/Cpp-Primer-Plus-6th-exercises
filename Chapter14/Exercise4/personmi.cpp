#include <iostream>
#include <cstdlib>
#include "personmi.h"

using std::cin;
using std::cout;
using std::endl;

Person::~Person() {}

void Person::Data() const
{
    cout << "First name: " << first_name << endl;
    cout << "Last name: " << last_name << endl;
}

void Person::Get()
{
    cout << "Enter first name: ";
    getline(cin, first_name);
    cout << "Enter last name: ";
    getline(cin, last_name);
}

void Gunslinger::Data() const
{
    cout << "Draw time: " << draw_time << endl;
    cout << "Notches: " << notches << endl;
}

void Gunslinger::Get()
{
    cout << "Enter draw time: ";
    cin >> draw_time;

    cout << "Enter notches: ";
    cin >> notches;
}

void Gunslinger::Set()
{
    Person::Get();
    Get();
}

void Gunslinger::Show() const
{
    Person::Data();
    Data();
}

PokerPlayer::Card PokerPlayer::Draw() const
{
    srand(time(0));
    int choice = rand() % 4;
    PokerPlayer::Card::FACE face;
    switch (choice)
    {
    case 0:
        face = PokerPlayer::Card::FACE::SPADES;
        break;
    case 1:
        face = PokerPlayer::Card::FACE::CLUBES;
        break;
    case 2:
        face = PokerPlayer::Card::FACE::HEARTS;
        break;
    case 3:
        face = PokerPlayer::Card::FACE::DIAMONDS;
        break;
    default:
        break;
    }
    int n = rand() % 12 + 1;
    char suit;
    if (n == 1)
    {
        suit = 'A';
    }
    else if (n > 1 && n <= 10)
    {
        suit = '0' + n;
    }
    else if (n == 11)
    {
        suit = 'J';
    }
    else if (n == 12)
    {
        suit = 'Q';
    }
    else
    {
        suit = 'K';
    }
    return PokerPlayer::Card(face, suit);
}

void PokerPlayer::Card::Show() const
{
    switch (face)
    {
    case FACE::SPADES:
        cout << "spades ";
        break;
    case FACE::CLUBES:
        cout << "clubes ";
        break;
    case FACE::HEARTS:
        cout << "hearts ";
        break;
    case FACE::DIAMONDS:
        cout << "diamonds ";
        break;
    default:
        break;
    }
    cout << suit << endl;
}

void BadDude::Set()
{
    Gunslinger::Set();
}

void BadDude::Show() const
{
    Gunslinger::Show();
    Cdraw().Show();
}