#include <iostream>
#include <string>

bool isPalindrome(const std::string & text)
{
   for (int i=1; i <= (text.length()/2); i++)
    {
        if (tolower(text[i-1]) != tolower(text[text.length()-i]) || text[i-1] == '\32')
        {
            return false;
        }   
    }
  
    return true;
}

int main()
{
    std::string text1 = "Ala ma kota";
    std::cout << text1;
    std::cout << isPalindrome(text1) << '\n';

    std::string text2 = "Ala";
    std::cout << text2;
    std::cout << isPalindrome(text2) << '\n';

    std::string text3 = "ala";
    std::cout << text3;
    std::cout << isPalindrome(text3) << '\n';

    std::string text4 = "kajak";
    std::cout << text4;
    std::cout << isPalindrome(text4) << '\n';

    std::string text5 = "neveroddoreven";
    std::cout << text5;
    std::cout << isPalindrome(text5) << '\n';

    std::string text6 = "abacada";
    std::cout << text6;
    std::cout << isPalindrome(text6) << '\n';

    system("pause");
    return 0;
    
}
