#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    string result = "";
    if (s[8] == 'A')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            result += "00";
            result += s.substr(2, 6);
        }
        else
            result += s.substr(0, 8);
    }
    else
    {
        if (s[0] == '1' && s[1] == '2')
        {
            result += "12";
            result += s.substr(2, 6);
        }
        else
        {
            result += to_string(stoi(s.substr(0, 2)) + 12);
            result += s.substr(2, 6);
        }
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
