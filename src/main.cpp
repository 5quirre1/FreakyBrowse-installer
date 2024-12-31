#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <shellapi.h>
#pragma comment(lib, "urlmon.lib")

void versions_menu();
void help();



int main() {
    std::string choices;
    std::cout << "Welcome to the FreakyBrowse Installer!\nYou'll be able to install or update any version of FreakyBrowse here!\n";
    std::cout << "To see all the commands, type \'help\' !!\n";
    std::cout << "----------------------------------------------------------------------------------------------\n";
    std::cin >> choices;
    if (choices == "versions" || choices == "Versions") {
        versions_menu();
    }
    else if (choices == "help" || choices == "Help") {
        help();
    }
    else {
        std::cout << "that command doesn't exist! Try doing \'versions\'!\n";
        std::cout << "-----------------------------------------------------------------------";
        main();
    }

}


// All the stuff yk
void versions_menu() {
    std::string choice;
    std::cout << "These are all of the versions that you can install!!! You can also use this to update!\n";
    std::cout << "2.2 (STYLES DON'T SAVE)\n";
    std::cout << "2.1\n";
    std::cout << "2\n";
    std::cout << "1.9\n";
    std::cout << "1.8\n";
    std::cout << "1.7\n";
    std::cout << "1.6\n";
    std::cout << "1.5\n";
    std::cout << "1.4\n";
    std::cout << "1.3\n";
    std::cout << "1.2\n";
    std::cout << "1.1\n";
    std::cout << "1.0\n\n";
    std::cin >> choice;

    if (choice == "2.2") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;
        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/v2.2/2.2.zip";
            std::string filePath = "FreakyBrowse.2.2.zip";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "File downloaded successfully!!!!!!!!!" << "\n";
                std::cout << "------------------------------------------------------------------------\n";
            }

            else {
                std::cout << "error\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }

    // *********************************************************************
    else if (choice == "2.1") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;
        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.2.1/2.1.zip";
            std::string filePath = "FreakyBrowse.2.1.zip";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "IT FUCKING DELETED SYSTEM32 oh wait, nvm, it was downloaded perfectly :3\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "it fucking shat itself and didn't download :sob:\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    // ********************************************************************

    else if (choice == "2") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;
        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.2.0/FreakyBrowse2.exe";
            std::string filePath = "FreakyBrowse2.exe";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "Downloaded good !!!!!!\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "you're cooked\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    // *******************************************************************
    else if (choice == "1.9") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;

        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.1.9/FreakyBrowse.1.9.exe";
            std::string filePath = "FreakyBrowse.1.9.exe";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "PEAK IT INSTALLED :33333 !\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "You are not the father..\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    // ******************************************************************
    else if (choice == "1.8") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;

        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.1.8/FreakyBrowse.1.8.exe";
            std::string filePath = "FreakyBrowse.1.8.exe";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "Did you know that 5quirre1 cooks a lot on these updates? nah prob not but it downloaded!!!\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "Error....\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    // ******************************************************************
    else if (choice == "1.7") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;
        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.1.7/FreakyBrowse.1.7.exe";
            std::string filePath = "FreakyBrowse.1.7.exe";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "Downloaded...\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "lol didn't work\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    // *****************************************************************
    else if (choice == "1.6") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;

        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.1.6/FreakyBrowse.1.6.exe";
            std::string filePath = "FreakyBrowse.1.6.exe";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "YAYAYAYAYA !!!!! IT DOWNLOADED\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "didn't download greg\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    // ****************************************************************
    else if (choice == "1.5") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;

        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.1.5/FreakyBrowse.1.5.exe";
            std::string filePath = "FreakyBrowse.1.5.exe";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "IT DOWNLOADED\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "sob it didn't download...\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    // ****************************************************************
    else if (choice == "1.4") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;

        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.1.4/FreakyBrowse.1.4.exe";
            std::string filePath = "FreakyBrowse.1.4.exe";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "why did you even install this smh, anyway, it installed :3\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "Sad.. didn't install...\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    // ******************************************************************
    else if (choice == "1.3") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;

        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.1.3/FreakyBrowse.1.3.exe";
            std::string filePath = "FreakyBrowse.1.3.exe";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "greg has installed.\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "No install :c\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    // ******************************************************************
    else if (choice == "1.2") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;

        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.1.2/FreakyBrowse.exe";
            std::string filePath = "FreakyBrowse.1.2.exe";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "old ass update but uh it's been installed :3\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "cooked\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    // ********************************************************************
    else if (choice == "1.1") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;

        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.1.1/Freakybrowse.exe";
            std::string filePath = "FreakyBrowse.1.1.exe";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "it's done.\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "Didn't download...\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    // *******************************************************************************
    else if (choice == "1.0") {
        std::string sure;
        std::cout << "Are you sure you want to install this? (y/n)\n";
        std::cin >> sure;

        if (sure == "y" || sure == "Y") {
            std::string url = "https://github.com/Freakybob-Team/freakybrowse/releases/download/V.1.0/Freakybrowse.exe";
            std::string filePath = "FreakyBrowse.exe";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "it's done!!!!!!!\n";
                std::cout << "------------------------------------------------------------------------\n";
            }
            else {
                std::cout << "Didn't download...\n";
            }
        }
        if (sure == "n" || sure == "N") {
            versions_menu();
        }
    }
    versions_menu();
}











void help() {
    std::cout << "--------------------------------------------------------\n";
    std::cout << "ALL COMMANDS!!!\n";

    std::cout << "versions - shows all the versions to install!\n";
    std::cout << "Update - this command doesn't exist lmfao, just use the install command :333\n";
    std::cout << "--------------------------------------------------------\n";
    main();
}
