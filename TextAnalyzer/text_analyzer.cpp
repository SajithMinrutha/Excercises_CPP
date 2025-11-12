#include <iostream>
#include <string_view>
#include <sstream>

int totalWords(std::string text)
{

    std::stringstream ss(text);
    std::string streamed_word;
    int count = 0;
    while (ss >> streamed_word)
    {
        count++;
    }
    return count;
}
int totalCharacters(std::string_view text)
{
    return text.length();
}
int totalOccurrences(std::string word, std::string text)
{
    std::stringstream ss(text);
    std::string temp;
    int occurrences = 0;
    while (ss >> temp)
    {
        if (temp == word)
        {
            occurrences = occurrences + 1;
        }
    }
    return occurrences;
}
int main()
{

    std::string text;
    std::string word;
    std::cout << "Please Enter a text: ";
    std::getline(std::cin, text); // reads the entire line;
    std::cout << "You entered: " << text << std::endl;

    std::cout << "Total number of characters in your text is: " << totalCharacters(text) << std::endl;
    std::cout << "Total number of words in your text is: " << totalWords(text) << std::endl;
    std::cout << "Number of occurences of the word: ";
    std::cin >> word;
    std::cout << "The Number of occurences of the word " << word << " is: " << totalOccurrences(word, text) << std::endl;

    return 0;
}