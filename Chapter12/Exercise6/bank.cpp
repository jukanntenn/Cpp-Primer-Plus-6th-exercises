#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    // setting things up
    std::srand(std::time(0)); //  random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue1: ";
    int qs;
    cin >> qs;
    Queue line1(qs); // line queue holds up to qs people

    cout << "Enter maximum size of queue2: ";
    cin >> qs;
    Queue line2(qs); // line queue holds up to qs people

    cout << "Enter the number of simulation hours: ";
    int hours; //  hours of simulation
    cin >> hours;
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles

    cout << "Enter the average number of customers per hour: ";
    double perhour; //  average # of arrival per hour
    cin >> perhour;
    double min_per_cust; //  average time between arrivals
    min_per_cust = MIN_PER_HR / perhour;

    Item temp1;         //  new customer data
    Item temp2;         //  new customer data
    long turnaways = 0; //  turned away by full queue
    long customers = 0; //  joined the queue
    long served = 0;    //  served during the simulation
    long sum_line = 0;  //  cumulative line length
    int wait_time1 = 0; //  time until autoteller is free
    int wait_time2 = 0; //  time until autoteller is free
    long line_wait = 0; //  cumulative time in line

    // running the simulation
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust)) // have newcomer
        {
            if (line1.isfull() && line2.isfull())
                turnaways++;
            else if (line2.isfull() || line1.queuecount() <= line2.queuecount())
            {
                customers++;
                temp1.set(cycle);     // cycle = time of arrival
                line1.enqueue(temp1); // add newcomer to line
            }
            else if (line1.isfull() || line2.queuecount() <= line1.queuecount())
            {
                customers++;
                temp2.set(cycle);     // cycle = time of arrival
                line2.enqueue(temp2); // add newcomer to line
            }
            else
            {
                cout << "Unhandled case";
            }
        }
        if (wait_time1 <= 0 && !line1.isempty())
        {
            line1.dequeue(temp1);       // attend next customer
            wait_time1 = temp1.ptime(); // for wait_time minutes
            line_wait += cycle - temp1.when();
            served++;
        }
        if (wait_time1 > 0)
            wait_time1--;

        if (wait_time2 <= 0 && !line2.isempty())
        {
            line2.dequeue(temp2);       // attend next customer
            wait_time2 = temp2.ptime(); // for wait_time minutes
            line_wait += cycle - temp2.when();
            served++;
        }
        if (wait_time2 > 0)
            wait_time2--;

        sum_line += line1.queuecount() + line2.queuecount();
    }

    /*
        Case Study: Bank of Heather Automatic Teller
        Enter maximum size of queue1: 20
        Enter maximum size of queue2: 20
        Enter the number of simulation hours: 100
        Enter the average number of customers per hour: 51
        customers accepted: 5119
        customers served: 5118
                turnaways: 0
        average queue size: 0.86
        average wait time: 1.01 minutes
        Done!
    */
    // reporting results
    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double)sum_line / cyclelimit << endl;
        cout << " average wait time: "
             << (double)line_wait / served << " minutes\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";
    return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}