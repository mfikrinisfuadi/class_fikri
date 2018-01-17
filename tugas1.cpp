#include <iostream>
#include <string>
using namespace std;

class Jenishamster

{
private:

	string namahamster;
    string namalain;
    string namalatin;
    string karakter;
    int panjangtubuh;
    int batasumur;
    
public:


    Jenishamster (string namahamster, string namalain, string namalatin, string karakter, 
	int panjangtubuh, int batasumur )

    {
    	Jenishamster::namahamster = namahamster;
        Jenishamster::namalain = namalain;
        Jenishamster::namalatin = namalatin;
        Jenishamster::karakter = karakter;
        Jenishamster::panjangtubuh = panjangtubuh;
        Jenishamster::batasumur = batasumur;
        
    }
    
    void perolehInfo (void)

    {
    	cout << "============================================================================== " << endl;
    	cout << "================================JENIS HAMSTER================================= " << endl;

    	
        cout << "Nama Hamster          : " << namahamster << endl;
        cout << "Nama Lain             : " << namalain << endl;
        cout << "Nama Latin            : " << namalatin << endl;
        cout << "Karakter      	      : " << karakter << endl;
        cout << "Panjang Tubuh (CM)    : " << panjangtubuh << endl;
        cout << "Batas Umur (Thn)      : " << batasumur << endl;
        
        cout << endl;
    };
    };
    
    int main()

    { 
	Jenishamster HamsterA("Hamster Syrian", "Golden Hamster, Dwarf Campbell's Russian Hamster", 
	"Cricetinae Phodopus Sungorua campbelli","Berkoloni", 11, 2);
	
	 Jenishamster HamsterB("Hamster Cambel", "Golden Hamster, Teddy Bear Hamster", 
	"Cericetinae Mesocricetus auratus","Soliter", 16, 3);

    HamsterA.perolehInfo();
    
    HamsterB.perolehInfo();
    
    return 0;
}
