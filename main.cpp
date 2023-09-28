#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

namespace PasswordUtils {

    /**
    * @class PasswordGenerator
    * Generates a random password with specified length.
    */
    class PasswordGenerator {
    private:
        int length; // Length of the password

    public:
        /**
        * Constructs a PasswordGenerator object with the specified length.
        *
        * @param len The length of the password to be generated.
        */
        PasswordGenerator(int len) {
            length = len;
        }

        /**
        * Generates a random password with the specified length.
        *
        * @return std::string The randomly generated password.
        */
        std::string GeneratePassword() {
            std::string password = "";
            std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&*+";

            // Seed the random number generator with the current time
            std::srand(static_cast<unsigned int>(std::time(nullptr)));

            for (int i = 0; i < length; i++) {
                int randomIndex = std::rand() % characters.length();
                password += characters[randomIndex];
            }

            return password;
        }
    };
}

int main() {
    int passwordLength = 12; // Specify the desired length of the password

    PasswordUtils::PasswordGenerator passwordGenerator(passwordLength);
    std::string password = passwordGenerator.GeneratePassword();

    std::cout << "Generated Password: " << password << std::endl;

    return 0;
}