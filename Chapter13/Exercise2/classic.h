#include "cd.h"

class Classic : public Cd
{
private:
    char *primary_work;

public:
    Classic(char *s1, char *s2, char *pw, int n, double x);
    Classic(const Classic &c);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    Classic &operator=(const Classic &c);
};