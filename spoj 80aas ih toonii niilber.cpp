#include <iostream>
using namespace std;

int main()
{
int n1, n2, i = 2;
cin >> n1 >> n2;

do
{
if(n1 % i == 0 && n2 % i == 0)
{
n1 /= i;
n2 /= i;
}
else i++;
} while (n1 > i || n2 > i);

cout << n1 << "/" << n2;

return 0;
}
