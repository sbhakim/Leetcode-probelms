/*
In lexicographic order, the first element is compared to the first element of another element, 
and if they are different, the one with the smaller element comes first. If they are the same, 
the second elements are compared, and so on until a difference is found or all elements have 
been compared.
*/

#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;


void sortlexicographically(vector<string>& str)
{
    sort (str.begin(), str.end());
}


int main(){
    vector<string> words = {"newyork", "mountainview", "boston", "chicago"};
    sortlexicographically(words);

    for (const auto& word : words){
        cout << word << " ";
    }
    cout << endl;
    return 0;
}
