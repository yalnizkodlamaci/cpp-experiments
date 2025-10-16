//=========== Library ===========


#include <iostream>
#include <vector>
#include <map>
#include <string> 
using namespace std;

 //=========== Class ===========

 //Her birinin ayrı olayı olacak.
 enum class Tier {Normal ,Vip1 , Vip2 , VİP3 , VİP4};

 class Tenant
 {
    string id;
    string name;
    public:
    Tenant(const string& i , const string& n) : id(i) , name(n)
    string getName(){return name;}
    string getId(){return id;}
 };

 class User
 {
    string tenantId;
    string name;
    string id;
    Tier level;
    public:
    User(const string& n , const string& tenant , const string& i) : name(n) , tenantId(tenant) , id(i) , level(Tier::Normal) {}
    string getName(){return name;}
    string getTenantId(){return tenantId;}
    string getId(){return id;}
    Tier getLevel(){return level;}
    void setLevel(Tier newLevel){level = newLevel;}
 };

 class DataStorage
 {
    map<string , map<string , string>> Storage;
    public:
    void Add(const string& tenantId , const string& key , const string& name)
    {
        Storage[tenantId][key] = value;
    }
    void RemoveTenant(const string& tenantId)
    {
        Storage.erase(tenantId);
    }

    void RemoveKey(const string& tenantId , const string& key)
    {
        Storage[tenantId].erase(key);
    }

    void RemoveValue(const string& tenantId , const string& key )
    {
        Storage[tenantId][key].clear();
    }
 };
 //=========== Main ===========

int main()
{

}
