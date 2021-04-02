//Author: Erica Carballo
//Assignment Number: Palindrome
//Description: This program checks if the word inputted is a Palindrome.
//Last Changed: February 28, 2021

#include <iostream>

bool isPalindrome(std::string word);
std::string convertToUpper(std::string word);

int main()
{
    if(isPalindrome("Racecar"))
    {
        std::cout << "This is a Palindrome." << std::endl;
    }
    else
    {
        std::cout << "This is not a Palindrome." << std::endl;
    }

    return 0;
}

bool isPalindrome(std::string word)
{
    word = convertToUpper(word);
    char *begin, *end;
    bool isValid = false;

    begin = & word.at(0);
    end = & word.at(word.length() - 1);

    while(begin != end)
    {
        if(*begin == *end)
        {
            isValid = true;
        }
        else
        {
            isValid = false;
            return isValid;
        }
        begin++;
        end--;
    }
//Author: Erica Carballo
    return isValid;

}

std::string convertToUpper(std::string word)
{
    int index = 0;
    std::string temp;

    while(index < word.length())
    {
        word.at(index) = toupper(word.at(index));
        index++;
    }

    return word;
}
