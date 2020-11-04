#include <iostream>
#include<vector>

using namespace std;

int main()
{
  vector<int> v;
  for(int i=0;i<10;i++){
    v.push_back(i);
  }
  cout<<"Begining and endings \n";

  for(auto i= v.begin();i!=v.end();i++){
    cout<<*i<<" ";
  }

  cout << "\nOutput of cbegin and cend: ";

  for(auto i =v.cbegin(); i!= v.cend();++i){
    cout<<*i<<" ";
  }
  cout << "\nOutput of rbegin and rend: ";
  for(auto i =v.rbegin(); i!= v.rend(); ++i){
    cout<<*i<<" ";
  }

  cout << "\nOutput of crbegin and crend : ";
  for(auto i= v.crbegin();i!= v.crend(); ++i){
    cout<<*i<<" ";
  }
  cout<<"\nvector size"<<v.size();
  cout<<"\nvector capacity:"<<v.capacity();
  cout<<"\nmax size:"<<v.max_size();

  v.resize(5);

  cout<<"\nnew capacity :"<<v.size();

  //to check if empty
  if(v.empty()==false){
    cout<<"\nVector not empty\n";
  }
  else
    cout<<"vector empty";

  //vector elements
  v.shrink_to_fit();
  for(auto i=v.begin();i!= v.end();++i){
    cout<<*i<<" ";
  }

  cout << "\nReference operator [v] : v[2] = " << v[2];

  cout << "\nat : v.at(4) = " << v.at(4);

  cout << "\nfront() : v.front() = " << v.front();

  cout << "\nback() : v.back() = " << v.back();

  // pointer to the first element
  int* pos = v.data();

  cout << "\nThe Second element is " << *(pos+1)<<"\n";

  //Assigning values
  vector<int> v1;
  v1.assign(10,100);
  for(auto i = v1.begin();i!=v1.end();++i){
    cout<<*i<<" ";
  }
  v1.push_back(15);
  int size = v1.size();
  cout << "\nLast elment in our list: " <<v1[size-1]<<'\n';
  v1.pop_back();

  for(int i=0;i<v1.size();i++){
    cout<< v1[i]<<" ";
  }

  v1.insert(v1.begin(),5);
  cout<<"\nThe first element: "<<v1[0];

  v1.erase(v1.begin());
  cout<<"\nThe first element: "<<v1[0];

  // inserts at the beginning
  v1.emplace(v.begin(), 5);
  cout << "\nThe first element is: " << v1[0];

  // Inserts 20 at the end
  v1.emplace_back(20);
  int n = v.size();
  cout << "\nThe last element is: " << v[n - 1];

  // erases the vector
  v.clear();
  cout << "\nVector size after erase(): " << v.size();

  // two vector to perform swap
    vector<int> v3, v2;
    v3.push_back(99);
    v3.push_back(99);
    v2.push_back(66);
    v2.push_back(66);

    cout << "\n\nVector 1: ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    // Swaps v3 and v2
    v3.swap(v2);

    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

  return 0;
}
