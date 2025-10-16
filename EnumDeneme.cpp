#include <iostream>
#include <map>
#include <string>
using namespace std;

enum class DonerciTipi { Morgis, Prof, Antakya };

struct MenuItem {
    string aciklama; 
    int fiyat;
};

class Menu {
    map<string, MenuItem> items;
public:
    void add(const string& ad, const string& aciklama, int fiyat) {
        items[ad] = MenuItem{aciklama, fiyat};
    }
    const map<string, MenuItem>& all() const { return items; }
    void print() const {
        for (auto& kv : items)
            cout << kv.first << " | " << kv.second.aciklama << " | " << kv.second.fiyat << "\n";
    }
};

class Donerci {
    string name;
    DonerciTipi tip;
    Menu menu;
public:
    Donerci(const string& n, DonerciTipi t) : name(n), tip(t) {
        switch (tip) {
            case DonerciTipi::Morgis:
                menu.add("Müslüm Gürses Menüsü", "Et Döner, Kola, Mayonez, Maydanoz, Ketçap", 300);
                break;
            case DonerciTipi::Prof:
                menu.add("İbrahim Tatlıses Menüsü", "Et Döner, Kola, Mayonez, Maydanoz, Ketçap, Tavuk Döner", 400);
                break;
            case DonerciTipi::Antakya:
                menu.add("Ali Bumin Menüsü", "Et Döner, Kola, Mayonez, Maydanoz, Ketçap, Jetpack", 500);
                break;
        }
    }
    const string& getName() const { return name; }
    const Menu& getMenu() const { return menu; }
};

int main() {
    Donerci d1("Morgis", DonerciTipi::Morgis);
    Donerci d2("Prof",   DonerciTipi::Prof);
    Donerci d3("Antakya",DonerciTipi::Antakya);

    cout << d3.getName() << " menü:\n";
    d3.getMenu().print();
}

