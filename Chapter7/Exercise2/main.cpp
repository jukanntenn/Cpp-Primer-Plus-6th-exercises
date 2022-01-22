#include <iostream>

using namespace std;

const int ArSize = 10;

void input(double scores[], int n);
double cal_avg(const double scores[], int n);
void display(const double scores[], int n);

int main()
{
    using namespace std;

    double scores[ArSize];
    input(scores, ArSize);
    double avg = cal_avg(scores, ArSize);
    display(scores, ArSize);
    cout << "Average: " << avg << endl;
}

void input(double scores[], int n)
{
    double score;
    cout << "Enter golf scores, enter -1 to exit\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter socre #" << i + 1 << ": ";
        cin >> score;
        scores[i] = score;
        if (score == -1)
        {
            break;
        }
    }
}

double cal_avg(const double scores[], int n)
{
    double sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (scores[i] == -1)
        {
            break;
        }
        sum += scores[i];
    }
    if (sum == 0)
    {
        return 0;
    }
    else
    {
        return sum / i;
    }
}

void display(const double scores[], int n)
{
    cout << "Socres: ";
    for (int i = 0; i < n; i++)
    {
        if (scores[i] != -1)
        {
            cout << scores[i] << " ";
        }
        else
        {
            break;
        }
    }
    cout << endl;
}