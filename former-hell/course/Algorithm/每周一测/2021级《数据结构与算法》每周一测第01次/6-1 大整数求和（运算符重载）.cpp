#include <iostream>
#include <string>
using namespace std;
#include <algorithm>
class BigInt
{
public:
    string value;
    BigInt() = default;
    BigInt(const string& _value);
    friend istream& operator>>(istream& input, BigInt& a);
    friend ostream& operator<<(ostream& output, const BigInt& a);
    BigInt operator+(const BigInt&b);
};

BigInt::BigInt(const string& _value)
{
    this->value = _value;
}

istream& operator>>(istream& input, BigInt& a)
{
    input >> a.value;
    return input;
}
ostream& operator<<(ostream& output, const BigInt& a)
{
    output << a.value;
    return output;
}
BigInt BigInt::operator+(const BigInt& b)
{
    string _value;
    unsigned int tmp(0),
        maxlength(this->value.length() > b.value.length() ? this->value.length() : b.value.length());
    for (unsigned int i = 0; i <= maxlength; i++)
    {
        if (i < this->value.length())
            tmp += this->value[this->value.length() - 1 - i] - '0';
        if (i < b.value.length())
            tmp += b.value[b.value.length() - 1 - i] - '0';
        if (i < maxlength)
        {
            _value += tmp > 9 ? tmp - 10 + '0' : tmp + '0';
            tmp -= _value[i] - '0';
        }
        else
        {
            if (tmp > 0)_value += tmp + '0';
        }
    }
    reverse(&_value[0],&_value[0] + _value.length());
    return BigInt(_value);
}

int main(){
    BigInt a, b, c;
    cin>>a>>b;
   c=a+b;
    cout<<a<<"+"<<b<<"="<<c<<endl;
    return 0;
}