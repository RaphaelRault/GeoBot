#ifndef GEOBOT_HPP
#define GEOBOT_HPP

#include <string>
#include <iostream>
#include <vector>
#include <readline/history.h>
#include <readline/readline.h>
#include <cstdlib>

class Country {

    private:
        std::string name;
        std::string capital;
        std::string language;
        std::string continent;
        std::string borderCountries;
        std::string seas;
        std::string ocean;
        std::string flagColors;
    
    public:
        Country(const std::string& name, const std::string& capital, const std::string& language, 
                const std::string& continent, const std::string& borderCountries, 
                const std::string& seas, const std::string& ocean, const std::string& flagColors);

        void printInfo() const;

        std::string getName() const;

};

std::string trim(const std::string& str, const std::string& set);
std::string getInput();
void readInput(const std::string& input);

extern std::vector<Country> countries;

#endif
