#include <bits/stdc++.h>

using namespace std;
class QuickFind
{
public:
    vector<int> ids;
    void makeUnion(int p, int q)
    {
        int idToChange = ids[p];
        for (int i = 0; i < ids.size(); i++)
        {
            if (idToChange == ids[i])
                ids[i] = ids[q];
        }
    }
    bool connected(int p, int q)
    {
        return ids[p] == ids[q] ? true : false;
    }
    QuickFind(int n)
    {
        for (int i = 0; i < n; i++)
        {
            ids.push_back(i);
        }
    }
};
class QuickUnion
{
public:
    vector<int> ids;
    QuickUnion(int N)
    {
        for (int i = 0; i < N; i++)
            ids.push_back(i);
    }
    void makeUnion(int p, int q)
    {
        int i = root(p);
        int j = root(q);
        ids[i] = j;
    }
    int root(int i)
    {
        while (i != ids[i])
            i = ids[i];
        return i;
    }
    bool connected(int p, int q)
    {
        return root(p) == root(q);
    }
};
class WeightedQuickUnion
{
public:
    vector<int> ids;
    vector<int> szs;
    WeightedQuickUnion(int N)
    {
        for (int i = 0; i < N; i++)
        {
            ids.push_back(i);
            szs.push_back(0);
        }
    }
    int root(int i)
    {
        while (i != ids[i])
        {
            ids[i] = ids[ids[i]];
            i = ids[i];
        }
        return i;
    }
    bool connected(int p, int q)
    {
        return root(p) == root(q);
    }
    void makeUnion(int p, int q)
    {
        int i = root(p);
        int j = root(q);
        if (i == j)
            return;
        if (szs[i] < szs[j])
        {
            ids[i] = j;
            szs[j] += szs[j];
        }
        else
        {
            ids[j] = i;
            szs[i] += szs[j];
        }
    }
};
void client()
{
    QuickFind f(10);
    WeightedQuickUnion u(10);
    f.makeUnion(1, 2);
    f.makeUnion(2, 3);
    f.makeUnion(5, 6);
    cout << f.connected(1, 3) << " " << f.connected(2, 4);
    u.makeUnion(4, 6);
    u.makeUnion(1, 6);
    cout << '\n'
         << u.connected(1, 4) << ' ' << u.connected(4, 7);
}
int main()
{
    client();
    return 0;
}