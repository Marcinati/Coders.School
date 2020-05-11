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
