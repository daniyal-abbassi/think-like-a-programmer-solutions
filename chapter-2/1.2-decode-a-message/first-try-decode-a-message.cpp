#include <iostream>;
using namespace std;

main()
{
    char uppercaseAlphabet[27] = {
        '0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    // Pre-defined lowercase alphabet array
    char lowercaseAlphabet[27] = {
        '0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    // int length = sizeof(lowercaseAlphabet) / sizeof(lowercaseAlphabet[0]);
    int inputValue[] = {18,12312,171,763,98423,1208,216,11,500,18,241,0,32,20620,27,10};
    int length = sizeof(inputValue) / sizeof(inputValue[0]);

    for (int i = 0; i < length; i++)
    {
        if (inputValue[i] % 27 == 0)
        {
            int zeropoint = i;
            for (int j = zeropoint; j < length; j++)
            {
                if (inputValue[j] % 27 != 0)
                {
                    cout << "the lower alphabet for this number is: " << inputValue[j] % 27 << "     " << lowercaseAlphabet[inputValue[j] % 27] << endl;
                }
            }
        }

        if (inputValue[i] % 27 != 0)
        {
            cout << "the alphabet for this number is: " << inputValue[i] % 27 << "     " << uppercaseAlphabet[inputValue[i] % 27] << endl;
        }
        else
        {
        }
    }
}