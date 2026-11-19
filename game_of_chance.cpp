
#include <iostream>
#include <random>
#include <limits>
#include <cctype>

int main() {
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> roll(1, 6);

    int totalScore = 0;
    const int rounds = 5;

    std::cout << "========================\n";
    std::cout << "     GAME OF CHANCE\n";
    std::cout << "========================\n\n";
    std::cout << "Five rounds. One decision at a time.\n";
    std::cout << "Roll a die to earn points.\n";
    std::cout << "After each safe roll, choose to bank\n";
    std::cout << "your points or risk another roll.\n";
    std::cout << "Roll a 1 and lose your round's points.\n\n";

    for (int round = 1; round <= rounds; ++round) {
        int roundScore = 0;

        std::cout << "\n--- ROUND " << round << " ---\n";

        while (true) {
            int result = roll(rng);
            std::cout << "\nYou rolled: " << result << "\n";

            if (result == 1) {
                std::cout << "Chance takes everything!\n";
                std::cout << "Round score: 0\n";
                break;
            }

            roundScore += result;
            std::cout << "Unbanked points: "
                      << roundScore << "\n";

            char choice;
            std::cout << "Bank (B) or Risk (R)? ";
            if (!(std::cin >> choice)) {
                std::cout << "\nGame ended.\n";
                return 0;
            }

            choice = static_cast<char>(
                std::toupper(
                    static_cast<unsigned char>(choice)
                )
            );

            while (choice != 'B' && choice != 'R') {
                std::cout << "Please enter B or R: ";
                if (!(std::cin >> choice)) {
                    std::cout << "\nGame ended.\n";
                    return 0;
                }
                choice = static_cast<char>(
                    std::toupper(
                        static_cast<unsigned char>(choice)
                    )
                );
            }

            if (choice == 'B') {
                totalScore += roundScore;
                std::cout << "Points secured: "
                          << roundScore << "\n";
                break;
            }

            std::cout << "You choose uncertainty...\n";
        }

        std::cout << "Total score: "
                  << totalScore << "\n";
    }

    std::cout << "\n========================\n";
    std::cout << "       GAME OVER\n";
    std::cout << "========================\n";
    std::cout << "Final score: " << totalScore << "\n";

    if (totalScore >= 75) {
        std::cout << "Outcome: The fearless gambler.\n";
    } else if (totalScore >= 40) {
        std::cout << "Outcome: The calculated risk-taker.\n";
    } else {
        std::cout << "Outcome: The cautious observer.\n";
    }

    std::cout << "\nEvery choice changes the outcome.\n";
    return 0;
}
