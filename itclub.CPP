#include <iostream>
using namespace std;

int main(){
      char op;
  double a, b, hasil;

cout << "masukan 2 angka ";
cin >> a >> b;

cout << "Pilih jenis operasi (+ - / *) : ";
cin >> op;

 if(op == '+')
  hasil =  a + b;
else if (op == '-')
  hasil = a - b;
else if (op == '*')
  hasil = a * b;
else if (op == '/')
  if (b != 0)
    hasil = a / b;
  else {
    cout << "Error";
    return 1;
  } 

    else {
    cout << "operasi tidak sesuai!";
    return 1;
}

cout << "Hasil " << a <<  op << b << " adalah : " << hasil;

return 0;
}
