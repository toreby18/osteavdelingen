#include <iostream>
using namespace std;

int main()
{

char b1='_';
char b2='_';
char b3='_';
cout<< b1;
cout<< b2;
cout<< b3;
char a1='.';  
char a2='.';
char a3='.';
while (b1=='_' && b2=='_')
{
for (int i=0; i<11; i++)
{
cin >> a1;
if (a1=='B')
{b1=a1;
break;}
else if (a1=='I')
{b2=a1;
break;}
else if (a1=='L')
{b3=a1;
break;}

}
cout<< b1;
cout<< b2;
cout<< b3;


for (int u=0; u<11; u++)
{
cin >> a2;
if (a2=='B')
{b1=a2;
break;}
else if (a2=='I')
{b2=a2;
break;}
else if (a2=='L')
{b3=a2;
break;}
}
cout<< b1;
cout<< b2;
cout<< b3;
}
for (int r=0; r<11; r++)
{
cin >> a3;
if (a3=='B')
{b1=a3;
break;}
else if (a3=='I')
{b2=a3;
break;}
else if (a3=='L')
{b3=a3;
break;}
}

cout<< b1;
cout<< b2;
cout<< b3;

cout<< "\n bra jobba brusjan";


return 0;

}
