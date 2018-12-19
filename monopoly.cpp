#include <iostream>
#include <string>
using namespace std;

int main()
{
    srand(time(NULL));
    
    int num;
    cin >> num;
    
    int steps;
    cin >> steps;
    
    vector <Player> players;
    /*cout << "Ee is the cutest!\n";
    cout << "Maggie is the cutest! Ee is not cute at all." << endl;
    cout << "HOW DARE" << endl;*/
    
    for (int i = 0; i < num; i++)
    {
        players.push_back(Player(i+1));      
    }
    
    
    for (int i = 0; i < steps; i++)
    {   
        for (int j = 0; j < players.size(); j++)
        {
            players.at(j).move();
        }
        
    }
}
