#include <iostream>
#include <cmath>

using namespace std;

float ptb1();
float ptb2();


int main()
{
    int x;
    cout << "so le de ptb1, so chan ptb2: ";
    cin >> x;
    if (x % 2 == 0)
    {
        ptb2();
    }
    else 
    {
        ptb1();
    }
}

float ptb1()
{
    float a;
    float b;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    float result;
    result = (-2*a)/b;
    cout << "nghiem cua phuong trinh la: " << result;
}
float ptb2()
{
    float a;
    float b;
    float c;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    cout << "nhap c: ";
    cin >> c;
    if (a + b + c == 0)
    {
        float result1;
        float result2;
        result1 = 1;
        result2 = c/a;
        cout << "nghiem 1: " << result1 << endl;
        cout << "nghiem 2: " << result2 << endl;    
    }
    else if (a + b - c == 0)
    {
        float result1;
        float result2;
        result1 = -1;
        result2 = -c/a;
        cout << "nghiem 1: " << result1 << endl;
        cout << "nghiem 2: " << result2 << endl;
    }
    else
    {
        float result1;
        float result2;
        float delta;
        delta = pow(b, 2) - (4*a*c);
        float squaredDelta = sqrt(delta);
        result1 = (-b + squaredDelta) / (2*a);
        result2 = (-b - squaredDelta) / (2*a);
        cout << "nghiem 1: " << result1 << endl;
        cout << "nghiem 2: " << result2 << endl;
    }
}
