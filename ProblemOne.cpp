#include <iterator>
#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

void Multiples(int n,int k, int j){
//number of multiples less than n, multiples of k, multiples of j
    int x,r=0;
    int i=0;
    int b=0;
    int sum=0;
    vector<int> vec1;
    vector<int> vec2;


    do{ //loop to find multiples of k
        i++;
        x=k*i;

        if(x<n){
            vec1.push_back(x);}
    }
    while(x<n);

    do{//loop to find multiples of j
        r++;
        b=j*r;

        if(b<n){
            vec1.push_back(b);}
    }
    while(b<n);

    sort(vec1.begin(), vec1.end()); //sort list of multiples from least to greatest

    std::vector<int>::iterator ptr; //declaring iterator
    for(ptr = vec1.begin(); ptr < vec1.end(); ptr++) {
        //if statement for finding duplicates
        if (*ptr == *(ptr + 1)) {
           vec1.erase(ptr);
        }
        cout << *ptr <<endl;
        sum=sum + *ptr;
    }

    cout << "The sum is : " << sum << endl;
}


int main () {

    int a,b,c;
    cin >> a >> b >> c;

    cout << "Natural numbers below " << a << " that are multiples of " << b << " or " << c << endl;
    Multiples(a,b,c);
    return 0;
}
