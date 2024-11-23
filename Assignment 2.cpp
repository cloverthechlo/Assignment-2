// Assignment 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Design and implement a program that recreates the character creation process found in most tabletop RPG games.
//Define the generated character by the following traits :
//•    Name
//•    Ancestry
//•    Class
//•    Six ability scores : Strength, dexterity, constitution, wisdom, intelligence, and charisma.
//•    The six ability scores must be bound to the range of[8 - 18].Include the following system requirements :
//Include some type of bonus that differentiates the ancestries from one another.
//•    For example, a human might receive a small bonus to constitution whereas an elf might receive a moderate bonus to dexterity.These bonuses may modify the ability scores outside of their base range.
//DO NOT go outside the system requirements.
//Setup a private GitHub repository with your teammates and instructor added as collaborators using the.gitignore template provided by GitHub.
//Use the following versioning convention when tagging your release commits for submission : [Major build number] .[Minor build number].[Revision].[Package]
//•    Major build number : Indicates major milestones.For example, going from beta to release.
//•    Minor build number : Used for feature completion, large bug fixes, and so on.
//•    Revision : Used for feature updates, small bug fixes, and so on.
//•    Package : Code stays the same, external library changes, or asset file updates.
//CHECKLIST
//The Character’s information must be stored inside a C++ class called Character.
//The player must be able to type a name, which must not be blank or longer than 10 characters.
//The ability scores must be within the range of[8 - 18].
//The player must be able to select an ancestry from at least 5 options.
//The player must be able to select a class from at least 5 options.
//The player’s chosen ancestry must provide at least 1 ability score bonus.
//The class must have a function to print the generated character’s traits to the console neatly.
//The program must allow the player to generate a new character, replacing the old one.
//The system must reject all invalid input(out of range, invalid type, too long, wrong characters).
//The system must loop until the player chooses to exit.
#include <iostream>
#include <string>

int main() {
    std::string playerName;
    std::string ancestryName;
    std::string className;

    int ancestryChoice;
    int abilityScore;
    int classChoice;

    //Ask for player name
    std::cout << "Please enter a name:" << std::endl;
    std::cin >> playerName;

    std::cout << "Ok, " << playerName << ". Tell me about yourself." << std::endl;

    //Ask for ancestry choice
    std::cout << "What is your ancestry?" << std::endl;
    std::cout << "[1] Human" << std::endl;
    std::cout << "[2] Vampire" << std::endl;
    std::cout << "[3] Goblin" << std::endl;
    std::cout << "[4] Candy" << std::endl;
    std::cout << "[5] Robots" << std::endl;
    std::cout << "[1-5]< " << std::endl;

    //Get ancestry choice from player
    std::cin >> ancestryChoice;

    //Handle ancestry choice
    switch (ancestryChoice) {
    case 1:
        std::cout << "Welcome Finn!" << std::endl;
        break;
    case 2:
        std::cout << "Welcome Marceline!" << std::endl;
        break;
    case 3:
        std::cout << "Welcome Goblin King!" << std::endl;
        break;
    case 4:
        std::cout << "Welcome Princess Bubblegum!" << std::endl;
        break;
    case 5:
        std::cout << "Welcome BMO!" << std::endl;
        break;
    default:
        std::cout << "Invalid choice" << std::endl;
        return 1;  //Exit the program on invalid choice
    }

    //Ask for class choice
    std::cout << "What is your class?" << std::endl;
    std::cout << "[1] Thief" << std::endl;
    std::cout << "[2] Wizard" << std::endl;
    std::cout << "[3] Warrior" << std::endl;
    std::cout << "[4] Archer" << std::endl;
    std::cout << "[5] Bard" << std::endl;
    std::cout << "[1-5]< " << std::endl;

    //Get class choice from player
    std::cin >> classChoice;

    //Handle class choice
    switch (classChoice) {
    case 1:
        std::cout << "Nice choice, Thief!" << std::endl;
        break;
    case 2:
        std::cout << "Nice choice, Wizard!" << std::endl;
        break;
    case 3:
        std::cout << "Nice choice, Warrior!" << std::endl;
        break;
    case 4:
        std::cout << "Nice choice, Archer!" << std::endl;
        break;
    case 5:
        std::cout << "Welcome, Bard!" << std::endl;
        break;
    default:
        std::cout << "Invalid choice" << std::endl;
        return 1;  //Exit the program on invalid class choice
    }

    return 0;
}
