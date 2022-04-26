class Solution
{
public:
    int romanToInt(string s)
    {
        int result = 0;
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
            case 'I':
                result++;
                break;

            case 'V':
                if (i == 0)
                    result += 5;
                else if (s[i - 1] == 'I' && i > 0)
                    result += 3;
                else
                    result += 5;
                break;

            case 'X':
                if (i == 0)
                    result += 10;
                else if (s[i - 1] == 'I' && i > 0)
                    result += 8;
                else
                    result += 10;
                break;

            case 'L':
                if (i == 0)
                    result += 50;
                else if (s[i - 1] == 'X' && i > 0)
                    result += 30;
                else
                    result += 50;
                break;

            case 'C':
                if (i == 0)
                    result += 100;
                else if (s[i - 1] == 'X' && i > 0)
                    result += 80;
                else
                    result += 100;
                break;

            case 'D':
                if (i == 0)
                    result += 500;
                else if (s[i - 1] == 'C' && i > 0)
                    result += 300;
                else
                    result += 500;
                break;

            case 'M':
                if (i == 0)
                    result += 1000;
                else if (s[i - 1] == 'C' && i > 0)
                    result += 800;
                else
                    result += 1000;
                break;
            }
        }
        return result;
    }
};