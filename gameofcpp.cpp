#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>


std::vector<std::string> animals = {"elephant", "tiger", "lion", "giraffe", "zebra"};
std::vector<std::string> teams = {"lakers", "yankees", "packers", "cowboys", "warriors"};
std::vector<std::string> districts = {"manhattan", "brooklyn", "queens", "bronx", "staten island"};
std::vector<std::string> films = {"inception", "avatar", "titanic", "jaws", "matrix"};
std::vector<std::string> books = {"harrypotter", "tokillamockingbird", "prideandprejudice", "1984", "thegreatgatsby"};

std::random_device rd;
std::mt19937 gen(rd());

std::string chooseCategory() {
    std::cout << "Choose a category:" << std::endl;
    std::cout << "1. Animals" << std::endl;
    std::cout << "2. Teams" << std::endl;
    std::cout << "3. Districts" << std::endl;
    std::cout << "4. Films" << std::endl;
    std::cout << "5. Books" << std::endl;

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            return "animals";
        case 2:
            return "teams";
        case 3:
            return "districts";
        case 4:
            return "films";
        case 5:
            return "books";
        default:
            return "";
    }
}

std::string chooseWord(const std::string& category) {
    std::vector<std::string> words;
    if (category == "animals") {
        words = animals;
    } else if (category == "teams") {
        words = teams;
    } else if (category == "districts") {
        words = districts;
    } else if (category == "films") {
        words = films;
    } else if (category == "books") {
        words = books;
    }

    std::shuffle(words.begin(), words.end(), gen);
    return words[0];
}

std::string displayWord(const std::string& word, const std::vector<char>& guessedLetters) {
    std::string displayed;
    for (char letter : word) {
        if (std::find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end()) {
            displayed += letter;
        } else {
            displayed += '_';
        }
    }
    return displayed;
}


void playGame() {
    std::string category = chooseCategory();
    std::string word = chooseWord(category);
    std::vector<char> guessedLetters;
    int chances = 7;

    std::cout << "\nLet's start guessing!" << std::endl;
    std::cout << displayWord(word, guessedLetters) << std::endl;

    while (true) {
        std::cout << "Guess a letter (or type 'exit' to quit): ";
        char letter;
        std::cin >> letter;

        if (letter == 'exit') {
            std::cout << "Thanks for playing!" << std::endl;
            return;
        }

        if (std::find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end()) {
            std::cout << "You already guessed that letter. Try again." << std::endl;
            continue;
        }

        guessedLetters.push_back(letter);

        if (word.find(letter) != std::string::npos) {
            std::cout << "Correct guess!" << std::endl;
            std::string displayedWord = displayWord(word, guessedLetters);
            std::cout << displayedWord << std::endl;

            if (displayedWord.find('_') == std::string::npos) {
                std::cout << "Congratulations! You guessed the word correctly." << std::endl;
                break;
            }
        } else {
            chances--;
            std::cout << "Wrong guess! Chances left: " << chances << std::endl;

            if (chances == 0) {
                std::cout << "Game over! You ran out of chances." << std::endl;
                break;
            }
        }
    }

    std::cout << "Do you want to play again? (yes/no): ";
    std::string playAgain;
    std::cin >> playAgain;
    if (playAgain == "yes") {
        playGame();
    } else {
        std::cout << "Thanks for playing!" << std::endl;
    }
}


int main() {
    playGame();
    return 0;
}