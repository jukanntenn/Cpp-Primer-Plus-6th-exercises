#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main()
{
    std::srand(std::time(0));

    vector<int> vi0(1000000);
    for (long long i = 0; i < 1000000; i++)
    {
        vi0[i] = rand();
    }

    vector<int> vi(vi0);
    list<int> li(vi0.begin(), vi0.end());

    clock_t start = clock();
    sort(vi.begin(), vi.end());
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Sorting vector took " << elapsed << " seconds.\n";
    // Sorting vector took 0.073301 seconds.

    start = clock();
    li.sort();
    end = clock();
    elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Sorting list took " << elapsed << " seconds.\n";
    // Sorting list took 0.754037 seconds.

    start = clock();
    copy(vi0.begin(), vi0.end(), li.begin());
    copy(li.begin(), li.end(), vi.begin());
    sort(vi.begin(), vi.end());
    copy(vi.begin(), vi.end(), li.begin());
    end = clock();
    elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Combinded operations took " << elapsed << " seconds.\n";
    // Combinded operations took 0.386456 seconds.

    return 0;
}