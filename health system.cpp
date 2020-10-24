
#include <iostream>
#include<stdlib.h>
using namespace std;

class health {
private:
    int hp;
    int store;
    int daimage;
public:
    health(int h) {
        hp = h;
        store = 0;
        daimage = 0;
    }
    void damage() 
    {
        int i;
        int num;

        for (i = 1; i <= 1; i++)
        {
            num = rand() % 100;
            cout << "\nyou got damage! \n\n" << num;
            store = num;
        }
        DepleatHealth();
    }
    void DepleatHealth()
    {
        daimage = hp + store - 100;
        hp = hp - store;
        display();
    }
    void display() {
        cout << "\nyour current hp :\n" << hp;
        cout << "\ndaimage taken :\n" << daimage;
    }

};

int main()
{
    health h(100);
    h.damage();
    return 0;
}
