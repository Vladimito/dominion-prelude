#include "inputHandler.h"

InputHandler::InputHandler(std::string input)
{
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    this->playerAnswer = input;
}
std::string InputHandler::returnAnswer()
{
    return playerAnswer;
}