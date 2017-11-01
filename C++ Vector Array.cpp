#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    vector<string> vectorArray{"movie", "it\'s", "awesome"};
    int insertNum = 0;
    vectorArray.push_back(",");
    vectorArray.push_back("but");
    vectorArray.push_back("a");
    vectorArray.push_back("little");
    vectorArray.push_back("bit");
    vectorArray.push_back("boring.");
    vectorArray.push_back("we");
    vectorArray.push_back("gonna");
    vectorArray.push_back("watch");
    vectorArray.push_back("the");  
    vectorArray.push_back("other");
    vectorArray.push_back("movie");
    vectorArray.push_back("next");
    vectorArray.push_back("time.");
    
    cout << "input you gonna place the position numbers : " << endl;
    cin >> insertNum;
    vectorArray.insert(vectorArray.begin() + insertNum, "§Ú¦b³o");
    
    for(auto &element : vectorArray){
        //element = "wow";break
        cout << element << " ";
    }
    
    cout << endl << "---------------------------------------" << endl;
    
    for(auto element : vectorArray){
        cout << element << " ";
    }
    
    cout << endl << "---------------------------------------" << endl;
    
    cout << "vectorArray size : " << vectorArray.size() << endl;
    cout << "vectorArray Capacity : " << vectorArray.capacity() << endl;
    
    return 0;
}