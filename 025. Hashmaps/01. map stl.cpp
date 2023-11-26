#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;

    pair<string,int> p = make_pair("sat", 3);
    m.insert(p);

    pair<string,int>p2("arpita", 2);
    m.insert(p2);

    m["mera"] =1; //<mera,1>
    m["mera"] =2; //<mera,2>

    //search
    cout<<m["mera"]<<endl; //2

    cout<<m.at("sat")<<endl; //3


    //cout<<m.at("unknownkey")<<endl; //error-terminate called after throwing an instance of 'std::out_of_range' what():  _Map_base::at
    cout<<m["unknownkey"]<<endl; //0 as new entry is created~~~~ <unknownkey,0>
    cout<<m.at("unknownkey")<<endl; //0 ~~~~<unknownkey,0>


    cout<<m.size()<<endl;//4

    cout<<m.count("BROO")<<endl; //0
    cout<<m.count("sat")<<endl; //1

    m.erase("arpita");
    cout<<m.size()<<endl;//3


    for(auto i:m)
    {
        cout<<i.first<<" "<< i.second<<endl;
    }
    //unknownkey 0
    //mera 2
    //sat 3

    unordered_map<string,int> ::iterator it = m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<" "<< it->second<<endl;
        it++;
    }
    //unknownkey 0
    //mera 2
    //sat 3


    return 0;
}
