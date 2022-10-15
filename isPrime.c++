#include <iostream>

void main() {
int a =0;
int count=0;
cin>>a;
for(int i=1;i<a;i++) {
    if(a%i == 0) {
        count += i;
    }
}
if(count == a) cout << "YES";
else cout << "NO";
}