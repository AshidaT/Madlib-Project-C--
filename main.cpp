#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printMenu()
{
  cout << "Welcome to the Madlib game!" << endl;
  cout << "Please choose an option from the menu below:" << endl;
  cout << "1. Play game" << endl;
  cout << "2. Stop game" << endl;
}

void playGame()
{

  vector<string> inputs;

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

  cout << "The " << inputs[0] << " likes to " << inputs[1] << " in a very " << inputs[2] << " way." << endl;
}

int main()
{

  printMenu();

  int selection;
  cin >> selection;

  if (selection == 1)
  {

    playGame();
  }
  else if (selection == 2)
  {

    cout << "Thanks for playing! Goodbye." << endl;
  }
  else
  {

    cout << "Invalid selection. Please try again." << endl;
  }

  return 0;
}
