#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to print the main menu
void printMenu()
{
  cout << "Welcome to the Madlib game!" << endl;
  cout << "Please choose an option from the menu below:" << endl;
  cout << "1. Play game" << endl;
  cout << "2. Stop game" << endl;
}

// Function to play the madlib game
void playGame()
{
  // Create a vector to store the user's inputs
  vector<string> inputs;

  // Prompt the user for inputs and store them in the vector
  cout << "Please enter a noun: ";
  string noun;
  cin >> noun;
  inputs.push_back(noun);

  cout << "Please enter a verb: ";
  string verb;
  cin >> verb;
  inputs.push_back(verb);

  cout << "Please enter an adjective: ";
  string adjective;
  cin >> adjective;
  inputs.push_back(adjective);

  // Use the user's inputs to create a madlib sentence
  cout << "The " << inputs[0] << " likes to " << inputs[1] << " in a very " << inputs[2] << " way." << endl;
}

int main()
{
  // Print the main menu
  printMenu();

  // Get the user's menu selection
  int selection;
  cin >> selection;

  // Handle the user's menu selection
  if (selection == 1)
  {
    // Play the game
    playGame();
  }
  else if (selection == 2)
  {
    // Quit the game
    cout << "Thanks for playing! Goodbye." << endl;
  }
  else
  {
    // Invalid selection
    cout << "Invalid selection. Please try again." << endl;
  }

  return 0;
}