//Rock, Paper, Scissors, Lizard, Spock

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

int main() {
    
    std::string name;
    int user, computer;
    
    //seeding time
    //needs header file <cstdlib> and <ctime>
    srand(time(NULL));
    
    //game choices 
    std::string choices[5] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
    
    //outcomes hardcoded in a 2D array
    int outcomes[5][5] = {
        {0, -1, 1, 1, -1},
        {1, 0, -1, -1, 1},
        {-1, 1, 0, 1, -1},
        {-1, 1, -1, 0, 1},
        {1, -1, 1, -1, 0}
    };
    
    std::cout << "Welcome to Rock, Paper, Scissors, Lizard, Spock!\n";
    
    //prompting user to enter name
    std::cout << "Enter Player Name : ";
    getline (std::cin, name);
    
    //outputting choices
    std::cout << "The choices are : " << std::endl;
    for(int i = 0; i < 5; i++) {
        std::cout << i+1 << "." << choices[i] << std::endl;
    }
    
    std::cout << ".................\n";
    
    std::cout << "Let The Battle Begin!!\n" << std::endl;
    
    //prompting user to enter choice
    std::cout << name << " enter your choice : ";

    std::cin >> user;
    
    //checking if choice is between range
    if(user < 1 || user > 5) {
        std::cout << "Please enter choice between 1 and 5";
        return 0;
    }
    else {
        
    std::cout << ".................\n";
    
    std::cout << name << ": " << choices[user-1] << std::endl;
    
    //generating computer choice between 1 and 5
    computer = rand() % 5 + 1;
    
    std::cout << "computer : " << choices[computer] << std::endl;
    
    std::cout << ".................\n";
    
    //checking conditions
    if (outcomes[user-1][computer] == 1)
        std::cout << name << " Wins!";
    else if (outcomes[user-1][computer] == -1)
        std::cout << "Computer Wins!";
    else
        std::cout << "Tie!";
    }
    
    return 0;
}

