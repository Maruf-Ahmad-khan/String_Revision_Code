// WAP to take input of faculty details
// (ID, name, post, qualification, address) and display it.
#include <bits/stdc++.h>
using namespace std;
class Details
{
     int ID;
     char name[30];
     char post[30];
     char qualification[30];
     char address[30];

public:
     void getdata(void);
     void display(void);
};

void Details ::getdata(void)
{
     cout << "Enter ID :" << endl;
     cin >> ID;
     cout << "Enter Name :" << endl;
     cin >> name;
     cout << "Enter Post: " << endl;
     cin >> post;
     cout << "Enter Qualification: " << endl;
     cin >> qualification;
     cout << "Enter Address: " << endl;
     cin >> address;
}

void Details ::display(void)
{
     cout << "Fuculty ID :" << ID << endl;
     cout << "Fuculty Name :" << name << endl;
     cout << "Fuculty Post :" << post << endl;
     cout << "Fuculty Qualfication :" << qualification << endl;
     cout << "Fuculty Address :" << address << endl;
}

int main()
{
     Details D;
     D.getdata();
     D.display();
     return 0;
}