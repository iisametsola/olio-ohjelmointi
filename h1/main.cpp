#include <iostream>

using namespace std;

void calcSum(int);
void calcDiv(int);


int main()

{
    int a ,b;
    cout << "Anna kokonaisluku "<< endl;
    cin >> a;
    cout << "Anna toinen kokonaisluku"<< endl;
    cin >> b;

    void calcSum (int a, int b){
       int sum=a+b;
       cout<<"Kokonaislukujen summa = "<<sum<<endl;
    }

     void calcDiv (int a, int b){
    int div=a/b;
      cout<<"Kokonaislukujen osamäärä = "<<div<<endl;
    }

    void retSum (int a, int b){
    int sum=a+b;
    cout<<"Kokonaislukujen summa = "<<sum<<endl;
    }

    void retDiv (int a, int b){
    int div=a/b;
    cout<<"Kokonaislukujen osamäärä = "<<div<<endl;
    }

    try {
        result = retDiv(a,b);
        cout << a << "/" <<  b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }

    return 0;
}
