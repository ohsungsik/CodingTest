public class Solution {
    public string solution(string s) {
        string answer = string.Empty;
        string[] charactor = s.Split(' ');

        foreach (string s1 in charactor)
        {
            if (s1.Length >= 1)
                answer += char.ToUpper(s1[0]);

            if (s1.Length >= 2)
                answer += s1.Substring(1).ToLower();

            answer += ' ';
        }

        return answer.Remove(answer.Length - 1);
    }
}