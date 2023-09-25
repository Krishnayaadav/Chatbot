 #include <iostream>
#include <string>

std::string getResponse(const std::string& input) {
    if (input == "hello") {
        return "Hello! How can I help you?";
    } else if (input == "how are you") {
        return "I'm just a computer program, but thanks for asking!";
    } else if (input == "bye") {
        return "Goodbye! Have a great day!";
    } else {
        return "Sorry, I don't understand. Can you rephrase?";
    }
}

int main() {
    std::string userInput;

    std::cout << "Chatbot: Hello! How can I assist you today?" << std::endl;

    while (true) {
        std::cout << "User: ";
        std::getline(std::cin, userInput);

        if (userInput == "exit") {
            std::cout << "Chatbot: Goodbye! Have a great day!" << std::endl;
            break;
        }

        std::string response = getResponse(userInput);
        std::cout << "Chatbot: " << response << std::endl;
    }

    return 0;
}

