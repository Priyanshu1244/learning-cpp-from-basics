#include <iostream>
using namespace std;

// function prototypes
int fac(int n, int r);
int ncr(int nfac, int rfac, int nrfac);

int main()
{
    // declearing variables and getting input from user
    int n, r;
    cout << "enter n : ";
    cin >> n;
    cout << "enter r : ";
    cin >> r;

    // getting answer and storing it in a variable
    int ans = fac(n, r);

    // printing answer
    cout << "the answer is : " << ans << endl;

    return 0;
}

int fac(int n, int r)
{ // function to calculate individual factorials

    int nfac, rfac, nrfac;
    nfac = rfac = nrfac = 1;

    int i = 1;
    while (i <= n)
    {
        nfac *= i;
        i++;
    }

    i = 1;
    while (i <= r)
    {
        rfac *= i;
        i++;
    }

    int nr = n - r;
    i = 1;
    while (i <= nr)
    {
        nrfac *= i;
        i++;
    }

    int ans = ncr(nfac, rfac, nrfac); // indirect call to ncr funtion to put the values in binomial formula and get the final answer

    return ans; // returning answer to main
}

int ncr(int nfac, int rfac, int nrfac)
{
    // calculating final answer and returing it the fac function so that fac can return answer to main
    int ans;
    ans = (nfac) / (rfac * nrfac);
    return ans;
}