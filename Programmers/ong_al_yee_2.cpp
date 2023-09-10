#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (int i = 0; i < babbling.size(); i++)
    {
        int flag = 0;
        int j = 0;
        for (; j < babbling[i].length(); j++)
        {
            if (babbling[i].substr(j, 3) == "aya")
            {
                j += 2;
                if (flag != 1)
                    flag = 1;
                else
                    break;
            }
            else if (babbling[i].substr(j, 2) == "ye")
            {
                j += 1;
                if (flag != 2)
                    flag = 2;
                else
                    break;
            }
            else if (babbling[i].substr(j, 3) == "woo")
            {
                j += 2;
                if (flag != 3)
                    flag = 3;
                else
                    break;
            }
            else if (babbling[i].substr(j, 2) == "ma")
            {
                j += 1;
                if (flag != 4)
                    flag = 4;
                else 
                    break;
            }
            else
                break;
        }
        if (j == babbling[i].length())
            answer++;
    }
    return answer;
}