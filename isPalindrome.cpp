#include <string>

bool isPalindrome(const std::string & text)
{
    bool difference=true;
    
    for (int i=1; i <= (text.length()/2); i++)
    {
        if (tolower(text[i-1]) != tolower(text[text.length()-i]) || text[i-1] == '\32')
        {
            return false;
            difference=false;
        }   
    }
  
    return true;
}
