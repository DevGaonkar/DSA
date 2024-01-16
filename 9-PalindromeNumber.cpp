#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int revx = 0;
        int og = x;
        while(x != 0){
            int digit = x % 10;
            revx = revx*10 + digit;
            x = x/10;
        }
        if (og<0 || og!=revx)
        {
            return false;
        }
        else{
            return true;
        }
    }
};

int main(){
    int a;
    Solution sol;
    cout << "Enter a number: ";
    cin >> a;
    bool ret =sol.isPalindrome(a);
    cout << (ret ? "true" : "false");
    return 0;
}