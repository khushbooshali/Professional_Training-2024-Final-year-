#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
   
    int date , mon , year,k,m,d,c,F;
    cin>>date>>mon>>year;
    k = date;
    if(mon % 13 - 2 >0){
        m = mon % 13 - 2 ;
    }
    else{
        m = mon % 13 - 2 == -1 ? 11 : 12;
        year--;
    }
    d = year % 100;
    c = year / 100;
    F =k + (13 * m-1)/5 + d + d/4 + c/4- 2 * c ;
    if(F >=0){
        int val1 = F % 7;
        switch(val1){
               
            case 0 : cout<<"Sunday";
                break;
            case 1 : cout<<"Monday";
                break;
            case 2 : cout<<"Tuesday";
                break;
            case 3 : cout<<"Wednesday";
                break;
            case 4: cout<<"Thursday";
                break;
            case 5 : cout<<"Friday";
                break;
            case 6 : cout<<"Saturday";
                break;
           
        }
    }
   
    else{
            int val2 = (F % 7) + 7;
            switch(val2){
               
            case 0 : cout<<"Sunday";
                break;
            case 1 : cout<<"Monday";
                break;
            case 2 : cout<<"Tuesday";
                break;
            case 3 : cout<<"Wednesday";
                break;
            case 4: cout<<"Thursday";
                break;
            case 5 : cout<<"Friday";
                break;
            case 6 : cout<<"Saturday";
                break;
           
        }
           
        }
    return 0;
}
