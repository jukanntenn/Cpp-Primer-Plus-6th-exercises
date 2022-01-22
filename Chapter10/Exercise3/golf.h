const int Len = 40;

class golf
{
private:
    char fullname[Len];
    int handicap;

public:
    golf(){};
    golf(const char *name, int hc);
    int setgolf();
    void setHandicap(int hc);
    void showgolf() const;
};