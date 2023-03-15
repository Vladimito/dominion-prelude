#include "input.h"
std::string playerAnswer = "";

void Input::reset()
{
    playerAnswer = "";
    std::cout << "Dungeon of The Dominion: Prelude\nBegin the adventure? Y/N\n";
    std::cin >> (playerAnswer);
    std::transform(playerAnswer.begin(), playerAnswer.end(), playerAnswer.begin(), ::toupper);
}

int main()
{
    auto in = Input();
    in.reset();
    if(playerAnswer == "N")
    {
        std::exit;
    }
    else if(playerAnswer == "Y")
    {

        std::cout << "The incessant plinking of waterdroplets on the ground wakes you from your slumber.\n";
        std::cout << "Your vision, hazy and usteady; can only make out the silhouette of stick with a bundle at the end\n";
        std::cout << "Your memory of how you got here is mostly blank, as if someone had taken a lit cigar and intentionally burnt holes in your mind\n";
        std::cout << "Try to recall the remnants of your memory? Y/N\n";
        std::cin >> (playerAnswer);
    }
    else
    {
        std::cout << "Not a valid input!\n";
        in.reset();
    }
}