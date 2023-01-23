#include <iostream>
#include<bits/stdc++.h>


using namespace std;
class Game
{
private:
    string Name;
    int Time;
    string opponent;
public:
    void setter_n1(string a)
    {
        Name=a;
    }
    string getter_n1()
    {
        return Name;
    }
    void setter_ti1(int i)
    {
        Time=i;
    }
    int getter_ti1()
    {
        return Time;
    }
    void setter_op1(string a)
    {
        Name=a;
    }
    string getter_op1()
    {
        return Name;
    }
    string name()
    {
        return Name;
    }
    string Opponent()
    {
        return opponent;
    }
    Game()
    {
        cout<<"Goal : ";
    }
    Game(string n,int x,string o)
    {
        Name=n;
        Time=x;
        opponent=o;
    }
    void Display()
    {
        cout<<"Name : "<<Name<<endl;
        cout<<"Time : "<<Time<<endl;
        cout<<"Opponent : "<<opponent<<endl;
    }
};
class Football:public Game
{
private:
    int goal_number;
public:
    void setter_goal(int b)
    {
        goal_number=b;
    }
    int getter_goal()
    {
        return goal_number;
    }
    int Goal_number()
    {
        return goal_number;
    }
};

int main()
{
    Game Object("Football",2400,"Nepal");
    Object.Display();
    Football foot;
    foot.setter_goal(3);
    cout<<foot.Goal_number()<<endl;
    return 0;
}
