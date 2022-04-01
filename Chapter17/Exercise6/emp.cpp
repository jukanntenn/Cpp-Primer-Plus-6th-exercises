#include <iostream>
#include <fstream>
#include "emp.h"

using std::cin;
using std::cout;
using std::endl;

abstr_emp::abstr_emp() {}
abstr_emp::abstr_emp(
    const std::string &fn,
    const std::string &ln,
    const std::string &j) : fname(fn), lname(ln), job(j)
{
}

void abstr_emp::ShowAll() const
{
    cout << "First name: " << fname << endl;
    cout << "Last name: " << lname << endl;
    cout << "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
    cout << "Enter first name: ";
    getline(cin, fname);

    cout << "Enter last name: ";
    getline(cin, lname);

    cout << "Enter job: ";
    getline(cin, job);
}

void abstr_emp::WriteAll(std::ofstream &fout)
{
    fout << fname << std::endl;
    fout << lname << std::endl;
    fout << job << std::endl;
}

void abstr_emp::GetAll(std::ifstream &fin)
{
    getline(fin, fname);
    getline(fin, lname);
    getline(fin, job);
}

std::ostream &operator<<(std::ostream &os, const abstr_emp &e)
{
    os << e.fname << " " << e.lname;
    return os;
}

abstr_emp::~abstr_emp() {}

employee::employee() : abstr_emp()
{
}

employee::employee(const std::string &fn,
                   const std::string &ln,
                   const std::string &j) : abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << endl;
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

void employee::WriteAll(std::ofstream &fout)
{
    fout << classkind::Employee << std::endl;
    abstr_emp::WriteAll(fout);
}

void employee::GetAll(std::ifstream &fin)
{
    abstr_emp::GetAll(fin);
}

manager::manager() : abstr_emp()
{
}

manager::manager(const std::string &fn, const std::string &ln,
                 const std::string &j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico)
{
}

manager::manager(const abstr_emp &e, int ico) : abstr_emp(e), inchargeof(ico)
{
}

manager::manager(const manager &m) : abstr_emp(m)
{
    inchargeof = m.InChargeOf();
}

void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "In charge of: " << inchargeof << endl
         << endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter in charge of: ";
    cin >> inchargeof;
}

void manager::WriteAll(std::ofstream &fout)
{
    fout << classkind::Manager << std::endl;
    abstr_emp::WriteAll(fout);
    fout << inchargeof << std::endl;
}

void manager::GetAll(std::ifstream &fin)
{
    abstr_emp::GetAll(fin);
    (fin >> inchargeof).get();
}

fink::fink() : abstr_emp()
{
}

fink::fink(const std::string &fn, const std::string ln,
           const std::string &j, const std::string rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{
}

fink::fink(const abstr_emp &e, const std::string &rpo) : abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink &f) : abstr_emp(f)
{
    reportsto = f.reportsto;
}

void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "Reports to: " << reportsto << endl
         << endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter reports to: ";
    getline(cin, reportsto);
}

void fink::WriteAll(std::ofstream &fout)
{
    fout << classkind::Fink << std::endl;
    abstr_emp::WriteAll(fout);
    fout << reportsto << std::endl;
}

void fink::GetAll(std::ifstream &fin)
{
    abstr_emp::GetAll(fin);
    getline(fin, reportsto);
}

highfink::highfink() : abstr_emp(), manager(), fink()
{
}

highfink::highfink(const std::string &fn, const std::string &ln,
                   const std::string &j, const std::string &rpo,
                   int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}

highfink::highfink(const abstr_emp &e, const std::string rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}

highfink::highfink(const fink &f, int ico) : abstr_emp(f), manager(f, ico), fink(f)
{
}

highfink::highfink(const manager &m, const std::string rpo) : abstr_emp(m), manager(m)
{
    ReportsTo() = rpo;
}

highfink::highfink(const highfink &h) : abstr_emp(h), manager(h), fink(h)
{
}

void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "In charge of: " << InChargeOf() << endl;
    cout << "Reports to: " << ReportsTo() << endl
         << endl;
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter in charge of: ";
    int tmp;
    cin >> InChargeOf();
    cin.get();
    cout << "Enter reports to: ";
    getline(cin, ReportsTo());
}

void highfink::WriteAll(std::ofstream &fout)
{
    fout << classkind::Highfink << std::endl;
    abstr_emp::WriteAll(fout);
    fout << InChargeOf() << std::endl;
    fout << ReportsTo() << std::endl;
}

void highfink::GetAll(std::ifstream &fin)
{
    abstr_emp::GetAll(fin);
    (fin >> InChargeOf()).get();
    getline(fin, ReportsTo());
}