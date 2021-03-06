/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 7-3.cpp
 &Created Time: 19Century 2019年07月12日 星期五 10时50分23秒   CST  Day/193 and Week/27 of this year
 ************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define MAX_N 200000
int is_prime[MAX_N + 5];

int main() {
    for (int i = 2; i * i <= MAX_N; i ++) {
        if (is_prime[i]) continue;
        for (int j = 2 * i; j <= MAX_N; j += i) {
            is_prime[j] =1;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (is_prime[i]) continue;
        is_prime[++is_prime[0]] = i;
    }
    cout << is_prime[10001] << endl;
    return 0;
}
