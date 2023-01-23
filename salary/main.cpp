#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int min(int n1,int n2,int n3,int n4)
{
    int min=n1;
    if(min>n2) min=n2;
    if(min>n3) min=n3;
    if(min>n4) min=n4;
    return min;
}
int main()
{
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    cout<<min(w,z,y,z);
    return 0;
}
//#include <iostream>
//#include<bits/stdc++.h>
//using namespace std;
//class Animal
//{
//public:
//    void animalSound()
//    {
//        cout << "The animal makes a sound \n" ;
//    }
//};
//class Pig : public Animal
//{
//public:
//    void animalSound()
//    {
//        cout << "The pig says: wee wee \n" ;
//    }
//};
//class Dog : public Animal
//{
//public:
//    void animalSound()
//    {
//        cout << "The dog says: bow wow \n" ;
//    }
//};
//int main()
//{
//    Animal Ani;
//    Ani.animalSound();
//    Pig Dp;
//    Dp.animalSound();
//    Dog ff;
//    ff.animalSound();
//
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//class Employee {
//  private:
//    int salary;
//  public:
//    void setSalary(int s) {
//      salary=s;
//    }
//    int getSalary() {
//      return salary;
//    }
//};
//int main() {
//  Employee myObj;
//  myObj.setSalary(50000);
//  cout << myObj.getSalary();
//  return 0;
//}
//#include <iostream>
//#include <fstream>
//using namespace std;
//int main(){
//  char text[200];
//  fstream file;
//  file.open ("example.txt", ios::out | ios::in );
//
// cout << "Write text to be written on file." << endl;
// cin.getline(text, sizeof(text));
//
//  // Writing on file
//  file << text << endl;
//
//  // Reding from file
//  file >> text;
//  cout << text << endl;
//
//  //closing the file
//  file.close();
//  return 0;
//}
