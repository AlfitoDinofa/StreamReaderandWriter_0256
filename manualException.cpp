#include <iostream>
using namespace std;

int main(){
    try {
        cout << "selamat belajar di prodi TI UMY" << endl;
        throw 5; //melemparkan sebuah integer maka,
        cout << "pernyataan tidak akan diesekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "pengecualian akan dieksekusi" << endl;

    }
    catch(...){
        /*jika selain integer maka block ini akan dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
        
    }

}