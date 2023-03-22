#include "cOne.h"
void ChapterOne::start()
{
    std::cout << "--------------------------------------------------------------------------------------\n";
    std::cout << "The incessant plinking of waterdroplets on the ground wakes you from your slumber.\n";
    std::cout << "Your vision, hazy and usteady; can only make out the silhouette of stick with a bundle at the end\n";
    std::cout << "Your memory of how you got here is mostly blank, as if someone had taken a lit cigar and\nintentionally burnt holes in your mind\n";
    std::cout << termcolor::green  << "Try to recall the remnants of your memory? Y/N\n" << termcolor::reset;
    std::cin >> (cInput);
    auto in = InputHandler(cInput);
    cInput = in.returnAnswer();
    if (cInput == "Y")
    {
        recall();
    }
    else if (cInput == "N")
    {
        std::cout << "Your vision grows clearer. The form of the torch now simply looks like a torch. You have no way of lighting it at the moment.\n";

    }
}

void ChapterOne::recall()
{
    std::cout << "--------------------------------------------------------------------------------------\n";
    std::cout << "The blurry world fades out and something clearer enters your brain. The thumping of your heartbeat?\n";
    std::cout << "The thrumming grows louder yet the inky blackness remains. It stares back at you.\n";
    std::cout << termcolor::red << "A face appears in front of you. You do not know if it is yours.\n";
    std::cout << "Aah, you're awake; friend.\n";
    std::cout << "Now now, no need to look so scared, I know who you are.\n";
    std::cout << "There's no need to be so afraid of me.\n" << termcolor::reset;
    std::cout  << "--------------------------------------------------------------------------------------\n";
    std::cout << "You remember this voice, deep down you know this is the voice of someone you know. Someone long gone.\n";
    std::cout << termcolor::green << "Ask the voice who you are? Y/N?\n" << termcolor::reset;
}