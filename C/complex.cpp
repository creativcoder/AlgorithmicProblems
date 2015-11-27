#include <iostream>

using namespace std;

class Complex {
private:
    float real;
    float complex;
public:
    Complex(float r,float i) : real(r),complex(i) {

    }
    Complex() {
        this->real = 0.0;
        this->complex = 0.0;
    }
    Complex operator+(Complex& b) {
        Complex result;
        result.real = this->real + b.real;
        result.complex = this->complex + b.complex;
        return result;
    }

    Complex operator-(Complex& b) {
        Complex result;
        result.real = this->real - b.real;
        result.complex = this->complex - b.complex;
        return result;
    }

    friend ostream &operator<<(ostream &output,const Complex &b) {
        if(b.complex>0){
        output<<b.real<<"+"<<b.complex<<"i"<<endl;
    }
        else {
            output<<b.real<<b.complex<<"i"<<endl;
        }
        return output;
    }

    friend istream &operator>>(istream &input, Complex &b) {
        input>>b.real>>b.complex;
        return input;
    }
};

int main() {
    
    Complex a,b,c;
    cin>>a>>b;
    c = a - b;
    cout<<c;
}
