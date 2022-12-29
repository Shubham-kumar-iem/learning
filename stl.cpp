#include<bits/stdc++.h>
using namespace std;
int main(){
    
// //------------Array in STL---------------//
    array<int,4> a={345,93,57,11};

    int size=a.size();

    for(int i=0;i<size;i++){
        cout<< a[i] <<endl;
    }
    cout<<"element at 3rd index is: "<<a.at(2)<<endl;
    cout<<"array empty or not: "<<a.empty()<<endl;
    cout<<"First element is: "<<a.front()<<endl;
    cout<<"last element is: "<<a.back()<<endl;
    cout<<"element at 4th index is: "<<a.at(3)<<endl<<endl;

//--------------Vector in STL----------------//

    vector<int> b;
    cout<<"capacity: "<<b.size()<<" "<<b.capacity()<<endl;

    b.push_back(13);
    cout<<"capacity: "<<b.size()<<" "<<b.capacity()<<endl;

    b.push_back(75);
    cout<<"capacity: "<<b.size()<<" "<<b.capacity()<<endl;

    b.push_back(83);
    cout<<"capacity: "<<b.size()<<" "<<b.capacity()<<endl;
    
    cout<<"Front element is: "<<b.front()<<endl;
    cout<<"back element is: "<<b.back()<<endl;

    cout<<"before pop: "<<endl;
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    b.pop_back();
    cout<<"after pop: "<<endl;
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Front element is: "<<b.front()<<endl;
    cout<<"back element is: "<<b.back()<<endl;
    b.clear();
    cout<<"Front element is: "<<b.front()<<endl;
    cout<<"back element is: "<<b.back()<<endl<<endl;

    //------------:List In STL:-------------//

    list<int> l;
    l.push_back(76);
    l.push_back(64);
    l.push_front(27);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size is: "<<l.size()<<endl<<endl;

    //-------------:Stack in STL-----------//

    stack <string> s;
    s.push("shubham");
    s.push("kumar");
    s.push("xyz");
    cout<<"Top word is: "<<s.top()<<endl;
    s.pop(); 
    cout<<"Top word is: "<<s.top()<<endl<<endl;

//-------------:Priority Queue in STL-----------//

    priority_queue<int> max;
    priority_queue<int, vector<int>, greater<int>> min;
    max.push(35);
    max.push(87);
    max.push(12);
    max.push(93);
    int m=max.size();
    for(int i=0;i<m;i++){
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<endl;
    min.push(27);
    min.push(98);
    min.push(11);
    min.push(58);
    
    int n=min.size();
    for(int i=0;i<n;i++){
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<endl;
//     //----------Binary Search in STL----------//

    vector<int> x;
    x.push_back(64);
    x.push_back(27);
    x.push_back(35);
    x.push_back(97);

    cout<<"Finding 55"<<endl;
    cout<<binary_search(x.begin(),x.end(),55)<<endl;

    cout<<"before rotating"<<endl;
    for(int i:x){
        cout<<i<<" ";
    }cout<<endl;

    rotate(x.begin(),x.begin()+2,x.end());
    cout<<"rotating the array by 2: "<<endl;
    for(int i:x){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"sorted "<<endl;
    sort(x.begin(),x.end());
    for(int i:x){
        cout<<i<<" ";
    }
}
