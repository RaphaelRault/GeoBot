#include "Geobot.hpp"

Country::Country(const std::string& name, const std::string& capital, const std::string& language, 
                 const std::string& continent, const std::string& borderCountries, 
                 const std::string& seas, const std::string& ocean, const std::string& flagColors) 
    : name(name), capital(capital), language(language), continent(continent), 
      borderCountries(borderCountries), seas(seas), ocean(ocean), flagColors(flagColors) {}

void Country::printInfo() const {
    std::cout << "\033[1;34mCountry : \033[0m" << name << std::endl;
    std::cout << "\033[1;34mCapital : \033[0m" << capital << std::endl;
    std::cout << "\033[1;34mLanguage : \033[0m" << language << std::endl;
    std::cout << "\033[1;34mContinent : \033[0m" << continent << std::endl;
    std::cout << "\033[1;34mBorder Countries : \033[0m" << borderCountries << std::endl;
    std::cout << "\033[1;34mBorder Seas : \033[0m" << seas << std::endl;
    std::cout << "\033[1;34mBorder Oceans : \033[0m" << ocean << std::endl;
    std::cout << "\033[1;34mFlag Colors : \033[0m" << flagColors << std::endl;
}


std::string Country::getName() const {
    return name;
}

std::string capitalizeWords(const std::string& str) {
    std::string result = str;
    bool capitalizeNext = true;

    for (size_t i = 0; i < result.length(); ++i) {
        if (std::isspace(result[i])) {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result[i] = std::toupper(result[i]);
            capitalizeNext = false;
        } else {
            result[i] = std::tolower(result[i]);
        }
    }

    return result;
}


std::string trim(const std::string& str, const std::string& set) {
    size_t beg = str.find_first_not_of(set);
    size_t end = str.find_last_not_of(set);
    return str.substr(beg, end - beg + 1);
}

std::string getInput() {
    char* raw_input = readline("\033[1;32m🌎 Geobot:\033[0m ");
    std::string input = trim(raw_input, " \t");
    free(raw_input);

    input = capitalizeWords(input);

    return input;
}

void readInput(const std::string& input) {
    if (input == "Exit") {
        std::cout << "\033[1;36mSee you soon! Thank you for using the Geobot.\n\033[0m";
        exit(0);
    }

    for (const auto& country : countries) {
        if (input == country.getName()) {
            country.printInfo();
            return;
        }
    }
    std::cout << "\033[1;31mWrong spelling\nTry again\n";
}

int main() {
    while (true) {
        std::string input = getInput();
        add_history(input.c_str());
        readInput(input);
    }
    return 0;
}
