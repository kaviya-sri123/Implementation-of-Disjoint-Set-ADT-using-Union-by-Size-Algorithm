#include <iostream>
using namespace std;
class Set
{
    public:
        int set[9];
        void createSet();
        void setUnion(int s[], int root1, int root2);
        int find(int s[], int x);
        void display();
};