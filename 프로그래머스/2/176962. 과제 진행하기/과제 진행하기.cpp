#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

struct Time {
    int mMinutes = 0;
    Time(const string& time) {
        int hour = stoi(time.substr(0, 2));
        int minute = stoi(time.substr(3, 2));
        mMinutes = hour * 60 + minute;
    }
    Time(int minutes) : mMinutes(minutes) {}
    bool operator<(const Time& rhs) const {
        return mMinutes < rhs.mMinutes;
    }
};

vector<string> solution(vector<vector<string>> plans) {
    vector<string> answer;
    stack<pair<string, int>> delayed;
    
    sort(plans.begin(), plans.end(), [](const vector<string>& a, const vector<string>& b) {
        return Time(a[1]) < Time(b[1]);
    });

    for (int i = 0; i < plans.size(); ++i) {
        string name = plans[i][0];
        Time start(plans[i][1]);
        int duration = stoi(plans[i][2]);

        if (i > 0) {
            Time prevEnd(Time(plans[i-1][1]).mMinutes + stoi(plans[i-1][2]));
            int availableTime = start.mMinutes - prevEnd.mMinutes;

            while (availableTime > 0 && !delayed.empty()) {
                auto [delayedName, delayedDuration] = delayed.top();
                delayed.pop();

                if (delayedDuration <= availableTime) {
                    answer.push_back(delayedName);
                    availableTime -= delayedDuration;
                } else {
                    delayed.push({delayedName, delayedDuration - availableTime});
                    break;
                }
            }
        }

        if (i < plans.size() - 1) {
            Time nextStart(plans[i+1][1]);
            int timeUntilNext = nextStart.mMinutes - start.mMinutes;

            if (duration > timeUntilNext) {
                delayed.push({name, duration - timeUntilNext});
            } else {
                answer.push_back(name);
            }
        } else {
            answer.push_back(name);
        }
    }

    while (!delayed.empty()) {
        answer.push_back(delayed.top().first);
        delayed.pop();
    }

    return answer;
}