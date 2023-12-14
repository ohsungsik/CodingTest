#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    unordered_set<string> phoneBook(phone_book.cbegin(), phone_book.cend());

    for (const string& number : phone_book)
    {
        int count = 0;
        for (size_t i = 0; i < number.size(); i++)
        {
            string prefix = number.substr(0, i + 1);
            if (phoneBook.find(prefix) != phoneBook.end())
            {
                count++;
                if (count >= 2)
                {
                    answer = false;
                    return answer;
                }

            }
        }
    }

    return answer;
}