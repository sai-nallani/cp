#include <iostream>
using namespace std;

struct Cow
{
    int x, y;
    int distanceMoved = 0;
    bool stop = false;
    char dir;
    void move()
    {
        if (dir == 'E')
            y++; // north
        else if (dir == 'N')
            x++; // east
    }
};
int main()
{
    int sl = 100;
    bool field[sl][sl];
    int n;
    cin >> n;
    char d;
    int x, y;
    Cow cows[n];
    for (int i = 0; i < n; i++)
    {
        cin >> d >> x >> y;
        Cow c;
        c.x = x;
        c.y = y;
        c.dir = d;
        cows[i] = c;
    }
    int outputs[n];
    int t = 0;
    while (t <= 1000000)
    {
        for (int i = 0; i < n; i++)
        {
            Cow cow = cows[i];
            if (cow.stop)
                break;
            field[cow.x][cow.y] = true;
            cow.move();
            cow.distanceMoved++;
            if (field[cow.x][cow.y])
            {
                cow.stop = true;
                outputs[i] = cow.distanceMoved;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        Cow cow = cows[i];
        if (!cow.stop)
            outputs[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        int opt = outputs[i];
        if (opt == -1)
            cout << "Infinity\n";
        else
            cout << n;
    }
}
