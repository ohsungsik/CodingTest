using System.Collections.Generic;

public class Solution {
    public string[] solution(string[] players, string[] callings) {
        Dictionary<string, int> board = new Dictionary<string, int>();
        for (int i = 0; i < players.Length; i++)
        {
            board.Add(players[i], i);
        }

        foreach (string calling in callings)
        {
            int rank = board[calling];

            string prevPlayer = players[rank - 1];
            int prevRank = board[prevPlayer];

            int tempRank = rank;
            board[calling] = prevRank;
            board[prevPlayer] = tempRank;

            players[rank] = prevPlayer;
            players[prevRank] = calling;
        }

        return players;
    }
}