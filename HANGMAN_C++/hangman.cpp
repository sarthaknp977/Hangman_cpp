#include "hangman_header.h"

int tries = 5;

using namespace std;

bool open_file(ifstream &input_file)
{
    if (!input_file.is_open())
    {
        cerr << "failed to open file" << endl;
        return false;
    }
    return true;
}

int random_number_generator(int max_index)
{
    return rand() % (max_index + 1);
}

void display_hangman(char state)
{
    string message = "You have " + to_string(tries) + " tries left";
    string stage = "-------";
    char lever = '|';
    char rope = '|';
    if (state == 'f')
    {
        message = "Congrats!! You are free now";
        rope = ' ';
        lever = '\\';
    }
    if (state == 'h')
    {
        message = "You are hanged";
        stage = "       ";
        lever = '/';
    }
    cout << "\033[2J";
    cout << "\t\t\t\t\t----------------------------" << endl;
    cout << "\t\t\t\t\t         " << rope << "          |  " << endl;
    cout << "\t\t\t\t\t         O          |  " << endl;
    cout << "\t\t\t\t\t        / \\         |           " << message << endl;
    cout << "\t\t\t\t\t         |          |            /" << endl;
    cout << "\t\t\t\t\t        / \\         |           O" << endl;
    cout << "\t\t\t\t\t   ---" << stage << "----   |          / \\ " << endl;
    cout << "\t\t\t\t\t     |         |    |      " << lever << "    | " << endl;
    cout << "\t\t\t\t\t     |         |    |     ===  / \\" << endl;
    cout << "\t\t\t\t\t--------------------------|-|------------" << endl;
}

bool check_guess(char guess, string random_word, string &hidden_word)
{
    bool found = false;
    int len = random_word.length();
    for (int i = 0; i < len; i++)
    {
        if (guess == hidden_word[i])
        {
            found == false;
            return found;
        }
        if (guess == random_word[i])
        {
            hidden_word[i] = guess;
            found = true;
        }
    }
    return found;
}

bool correct_word(string &hidden_word)
{
    for (int i = 0; i < hidden_word.length(); i++)
    {
        if (hidden_word[i] == 'X')
        {
            return false;
        }
    }
    return true;
}
int main()
{
    srand(time(NULL));
    ifstream input_file("words.txt");
    if (!open_file(input_file))
    {
        cerr << "file not found";
        return 1;
    }

    vector<string> words;

    string word;

    while (input_file >> word)
    {
        words.push_back(word);
    }

    input_file.close();

    int random_index = random_number_generator(words.size() - 1);
    string random_word = words[random_index];
    string hidden_word(random_word.length(), 'X');
    while (tries != 0)
    {
        if (tries >= 1)
        {
            display_hangman('l');
        }
        cout << random_word << endl;
        cout << "\t\t\t\t\tLife: " << tries << endl;
        cout << "\t\t\t\t\t" << hidden_word << endl;
        cout << "\t\t\t\t\tGuess a letter: ";
        char guess;
        cin >> guess;
        if (check_guess(guess, random_word, hidden_word) == 0)
        {
            tries--;
        }
        if (correct_word(hidden_word))
        {
            display_hangman('f');
            cout << "YOU WON";
            break;
        }
    }
    if (tries == 0)
    {
        display_hangman('h');
    }
    return 0;
}