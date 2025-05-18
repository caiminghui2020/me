#include<cstdio>
#include<set>
using namespace std;
set<int>t;
int main()
{
    t.insert(1);
    t.insert(2);
    t.insert(3);
    t.insert(4);
    t.insert(5);
    printf("%d\n",*t.lower_bound(3));
    printf("%d",*t.upper_bound(3));
}