#include <iostream>

using namespace std;

class game
{
private:
    int goals;
public:
    game()
    {
        goals=0;
    }
    int getGoals()
    {
        return goals;
    }
    void incrementGoals()
    {
        goals++;
    }
};

int main()
{
    game football;
    cout<<"Numbe of goals when game is started : "<<football.getGoals()<<endl;
    football.incrementGoals();
    football.incrementGoals();
    cout<<"Number of goals a little letter : "<<football.getGoals()<<endl;
    return 0;
}
