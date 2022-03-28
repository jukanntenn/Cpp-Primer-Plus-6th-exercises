#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using std::copy;
using std::shuffle;
using std::vector;

vector<int> Lotto(int spots, int select);

int main()
{
    std::srand(std::time(0)); //  random initializing of rand()

    vector<int> winners = Lotto(51, 6);
    std::cout << "The winners are: \n";
    for (int i = 0; i < winners.size(); i++)
    {
        std::cout << winners[i] << " ";
    }
    std::cout << "\n";
    return 0;
}

vector<int> Lotto(int spots, int select)
{
    vector<int> spot_vec = vector<int>(spots);
    for (int i = 0; i < spots; i++)
    {
        spot_vec[i] = i + 1;
    }
    for (int i = 0; i < spot_vec.size(); i++)
    {
        std::cout << spot_vec[i] << " ";
    }
    std::cout << "\n";
    random_shuffle(spot_vec.begin(), spot_vec.end(), [](int n)
                   { return rand() % n; });
    vector<int> winners = vector<int>(select);
    return vector<int>(spot_vec.begin(), spot_vec.begin() + select);
}