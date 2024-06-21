# include <iostream> 
# include <ctime>

int main() {
    int num, guesses, tries;

    srand(time(0));
    num = rand() % 100 + 1;

    do{
        std::cout << "Make a guess between 1 to 100\n";
        std::cin >> guesses;
        tries++;

        if (guesses > num) {
            std::cout << "It's a smaller number\n"; 
        }
        else if ( guesses < num) {
            std::cout << "Go higher\n";
        }
        else{
            std::cout << "You guessed the right number. You took " << tries << " tries.";
        }

    }while (guesses != num);

    return 0;
}