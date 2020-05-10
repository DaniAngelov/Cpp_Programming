//  github.com/DaniAngelov



class Student
{
    private:
    int* score = new int[5];

    public:

    Student()
    {
        for(int i = 0;i < 5;i++)
        {
            this->score[i] = 0;
        }
    }

    void input()
    {
        for(int i = 0;i < 5;i++)
        {
            int number;
            cin >> number;
            this->score[i] = number;
        }
    }

    int calculateTotalScore()
    {
        int sum = 0;
        for(int i = 0;i < 5;i++)
        {
            sum += this->score[i];
        }
        return sum;
    }

};

