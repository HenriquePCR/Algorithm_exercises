#include <bits/stdc++.h>

// vector<vector<int>> matrix(RR, vector<int>(CC));

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << end

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0X3f3f3f3f3f3f3f3fll;

int main()
{
    // solution comes here
    int n;
    cin >> n;

    int teamOneGameOne;
    int teamTwoGameOne;

    int teamOneGameTwo;
    int teamTwoGameTwo;

    string lixo;

    // primeiro jogo
    for (int i = 0; i < n; i++)
    {
        int score1 = 0, score2 = 0;

        score1 = 0;
        score2 = 0;
        cin >> teamOneGameOne >> lixo >> teamTwoGameOne;
        cin >> teamTwoGameTwo >> lixo >> teamOneGameTwo;

        int teamOneOutGoals = teamOneGameTwo;
        int teamTwoOutGoals = teamTwoGameOne;

        int goalsBalanceOne = (teamOneGameOne + teamOneGameTwo) - (teamTwoGameOne + teamTwoGameTwo);
        int goalsBalanceTwo = (teamTwoGameOne + teamTwoGameTwo) - (teamOneGameOne + teamOneGameTwo);

        // cout << teamOneGameOne << " " << teamTwoGameOne << endl;
        // cout << teamTwoGameTwo << " " << teamTwoGameOne << endl;

        if (teamOneGameOne > teamTwoGameOne)
        {
            score1 += 3;
        }
        else if (teamOneGameOne < teamTwoGameOne)
        {
            score2 += 3;
        }
        else
        {
            score1 += 1;
            score2 += 1;
        }
        // segundo jogo
        if (teamTwoGameTwo > teamOneGameTwo)
        {
            score2 += 3;
        }
        else if (teamTwoGameTwo < teamOneGameTwo)
        {
            score1 += 3;
        }
        else
        {
            score1 += 1;
            score2 += 1;
        }
        // resultado
        if (score1 > score2)
        {
            cout << "Time 1" << endl;
        }
        else if (score1 < score2)
        {
            cout << "Time 2" << endl;
        }
        else if (score1 == score2)
        {
            if (goalsBalanceOne > goalsBalanceTwo)
            {
                cout << "Time 1" << endl;
            }
            else if (goalsBalanceTwo > goalsBalanceOne)
            {
                cout << "Time 2" << endl;
            }
            else
            {
                if (teamOneOutGoals > teamTwoOutGoals)
                {
                    cout << "Time 1" << endl;
                }
                else if (teamOneOutGoals < teamTwoOutGoals)
                {
                    cout << "Time 2" << endl;
                }
                else
                {
                    cout << "Penaltis" << endl;
                }
            }
        }
    }
}
