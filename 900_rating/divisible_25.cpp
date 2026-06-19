#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using vpii = vector<pair<int, int>>;

#define f(i, n) for (int i = 0; i < (n); i++)
#define fr(i, n) for (int i = (n - 1); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vi digits;// storing digits in reverse order
        while (n > 0LL) // breaking the number into digits
        {
            int digit = n % 10;
            digits.push_back(digit);
            n /= 10;
        }
        int count = 0;
        bool zero = false; // ending with 50 or 00
        bool five = false; // ending with 25 or 75
        n = digits.size(); 
        f(i, n)
        {
            // last digit will be 0
            if (zero == false && five == false)
            {
                if (digits[i] == 0)
                    zero = true;
                else if (digits[i] == 5)
                    five = true;
                else
                    count++;
            }
            // if last digit is 5 second last will be 2 or 7
            else if (five == true && zero == false)
            {
                if(digits[i] == 2) break;
                else if(digits[i] == 7) break;
                // checking whether 00/50 occures first or 25/75
                else if(digits[i] == 0){
                    i++; // moving to the next index
                    int j = i; // temp variable
                    count++; // either 0 or 5 will be removed
                    int b = 0;
                    // counts for 25 or 75 to occur
                    while(j <n) {if(digits[j] == 2 || digits[j] == 7) break;else b++;j++;}
                    j =i;
                    int a =0;
                    // counts for 00 and 50 to occur
                    while(j < n){ if(digits[j] == 5 || digits[j] == 0) break;else a++;j++;}
                    // need the minimum moves
                count += min(a,b);
                break;
                }
                count++;
            }
            // if last digit is 0 second last will be 5 or 0
            else{
                if(digits[i] == 5) break;
                else if (digits[i] == 0)break; 
                count++;
            }
        }
        cout << count << nl;
    }

    return 0;
}