#include <string>

class Player
{
    public:
        Player(int num);
        int get_pos();
        int get_money();
        vector <int> get_prop();
        int get_id();
        int roll();
        bool is_double();
        void move();
    
    private:
        int position;
        int money;
        vector <int> properties;
        int id;
        bool roll_double;
        bool is_jailed;
};
