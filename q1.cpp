#include <iostream>
using namespace std;
int main() {
int amount;
cout<<"enter the amount"<<endl;
cin>>amount;
int n1, n2,n5,n10,n20,n50,n100,n200,n500;
n1=n2=n5=n10=n20=n50=n100=n200=n500=0;
switch (1){
case 1:
 n500=amount/500;
 amount-=n500*500;
 
case 2:
 n200=amount/200;
 amount-=n200*200;

case 3:

 n100=amount/100;
 amount-=n100*100;

case 4:

 n10=amount/10;
 amount-=n10*10;
case 5:
 n5=amount/5;
 amount-=n5*5;
case 6:
 n2=amount/2;
 amount-=n2*2;
 case 7:

 n1=amount/1;
 amount-=n1*1;
}
 int result=n1+n2+n5+n10+n20+n50+n100+n200+n500;
 cout<<result;
 
}




