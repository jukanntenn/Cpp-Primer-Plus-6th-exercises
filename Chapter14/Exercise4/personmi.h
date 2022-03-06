#ifndef PERSONMI_H_
#define PERSONMI_H_

#include <string>

using std::string;

class Person
{
private:
    string first_name;
    string last_name;

protected:
    virtual void Data() const;
    virtual void Get();

public:
    Person(char *fn = "unset", char *ln = "unset") : first_name(fn), last_name(ln) {}
    virtual ~Person() = 0;
    virtual void Set() = 0;
    virtual void Show() const = 0;
};

class Gunslinger : virtual public Person
{
private:
    double draw_time;
    int notches;

protected:
    void Data() const;
    void Get();

public:
    Gunslinger(char *fn = "unset", char *ln = "unset", double d = 0.0, int n = 0) : Person(fn, ln), draw_time(d), notches(n) {}
    void Set();
    double Draw() const { return draw_time; };
    void Show() const;
};

class PokerPlayer : virtual public Person
{
protected:
    class Card
    {
    public:
        enum FACE
        {
            SPADES,
            CLUBES,
            HEARTS,
            DIAMONDS
        };

    private:
        FACE face;
        char suit;

    public:
        Card(FACE f, char s) : face(f), suit(s) {}
        void Show() const;
    };

public:
    PokerPlayer(char *fn = "unset", char *ln = "unset") : Person(fn, ln) {}
    void Show() const { Person::Data(); }
    void Set() { Person::Get(); }
    Card Draw() const;
};

class BadDude : public Gunslinger, public PokerPlayer
{
public:
    BadDude(){};
    double Gdraw()
    {
        return Gunslinger::Draw();
    }
    Card Cdraw() const
    {
        return PokerPlayer::Draw();
    }
    void Set();
    void Show() const;
};

#endif