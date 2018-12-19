//Constructor for Player
Player:: Player(int num)
{
    position = 0;
    money = 1500;
    id = num;
    roll_double = false;
    is_jailed = false;
}

//accessor for ID
int Player:: get_id()
{
    return id;
}

//accessor for position
int Player:: get_pos()
{
    return position;
}

//accessor for money
int Player:: get_money()
{
    return money;
}

//accessor for double roll
bool Player:: is_double()
{
    return roll_double;
}

//function for rolling the dice
int Player:: roll()
{
    //reset roll_double flag
    roll_double = false;
    
    //simulate first and second dice toss
    int dice1 = (rand()%6) + 1;
    int dice2 = (rand()%6) + 1;
    
    cout << dice1 << " + " << dice2 << endl;
    
    //total movement is the total of two dice
    int roll = dice1 + dice2;
    
    //if two dice holds the same value
    if (dice1 == dice2)
    {
        //then the player rolled a double and can roll again
        roll_double = true;
    }
    
    //return the value of roll
    return roll;
        
}

void Player:: move()
{
    int counter = -1;
    //a do while loop for when tossing double
    do
    {
        //add counter for rolling double
        //should start out as 0
        counter++;
        
        //if roll 3 consecutive doubles
        if (counter == 3)
        {
            //set position to be at jail
            position = 10;
            is_jailed = true;
            break;
        }
        
        //add total to position
        position += roll();
        
        //if the position is greater than 40
        if (position > 39)
        {
            //simulate passing GO on the board
            position -=40;
            money += 200;
        }
        
        
        cout << "Position " << id << ": " <<  position << "\nMoney " << id << ": " << money << endl;
    }
    while (is_double());
}
