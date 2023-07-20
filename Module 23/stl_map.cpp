#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> mp;
    mp["sakib al hasan"] = 79;
    // mp["akib"] = 101;

    // mp.insert({"sakib al hasan", 75});
    mp.insert({"tamim iqbal", 19});
    mp.insert({"rahat", 100});
    // mp.insert({"akib", 0});
    mp.insert({"Shamim", 79});

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // cout << mp["Shamim"] << endl;
    // cout << mp["shamim"] << endl;
    // cout << mp["akib"] << endl;

    if (mp.count("akib"))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}