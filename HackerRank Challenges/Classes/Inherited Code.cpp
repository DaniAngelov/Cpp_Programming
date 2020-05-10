//  github.com/DaniAngelov



struct BadLengthException : exception
{
    public:

    string str;
    BadLengthException(int length) : str(std::to_string(length))
    {

    }
    const char * what() const noexcept override
    {
        return str.c_str();
    }
};

