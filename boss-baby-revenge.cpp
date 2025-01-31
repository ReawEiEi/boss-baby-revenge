#include <iostream>
#include <string>

using namespace std;

int main()
{
    string shots;
    int cnt = 0;

    // Input Shot Representation
    cout << "Shot Representation: ";
    cin >> shots;

    // Check if the first and last shot is 'S' and 'R' respectively
    if (shots.front() != 'S' || shots.back() != 'R')
    {
        cout << "Bad Boy\n";
        return 0;
    }

    // Check if the number of 'R' shots is ALWAYS greater than or equal to the number of 'S' shots
    for (int i = shots.length() - 1; i >= 0; i--)
    {
        // Increment or Decrement the count based on the shot
        if (shots[i] == 'R')
        {
            cnt++;
        }
        else
        {
            cnt--;
        }

        // Check if the count is less than 0 that means have 'R' more than 'S'
        if (cnt < 0)
        {
            cout << "Bad Boy\n";
            return 0;
        }
    }

    cout << "Good Boy\n";
    return 0;
}