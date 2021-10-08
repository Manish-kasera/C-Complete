#include <iostream>
using namespace std;

class BankDeposit
{
    int principalAmount;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(){};// Default constructor bnnana jaruri hai 
    //(agar p,y r/R ki value nhi bhi dege tb bhi mera code chalega)
    
    BankDeposit(int p, int y, float r); // r can be value like 0.04
    BankDeposit(int p, int y, int r);   // r can be value like 14
    void show(void);
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principalAmount = p;
    years = y;
    interestRate = r;

    returnValue = principalAmount;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principalAmount = p;
    years = y;
    interestRate = float(r) / 100;

    returnValue = principalAmount;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit::show(void)
{
    cout << endl
         << "Principal amount was :" << principalAmount
         << " years was: " << years << " returnValue is " << returnValue << endl<<endl;;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p, y and r:"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of p, y and R:"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p,y,R);
    bd2.show();
    return 0;
}