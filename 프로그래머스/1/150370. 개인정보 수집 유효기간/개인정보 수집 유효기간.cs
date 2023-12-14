using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string today, string[] terms, string[] privacies) {
        List<int> answer = new List<int>();

        string[] todayChars = today.Split(new[] { '.' });
        int todayYear = int.Parse(todayChars[0]);
        int todayMonth = int.Parse(todayChars[1]);
        int todayDay = int.Parse(todayChars[2]);

        DateTime todayDateTime = new DateTime(todayYear, todayMonth, todayDay);

        Dictionary<string, int> duration = new Dictionary<string, int>();
        foreach (string term in terms)
        {
            string[] termStrings = term.Split(new[] { ' ' });
            duration.Add(termStrings[0], int.Parse(termStrings[1]));
        }

        for (int i = 0; i < privacies.Length; i++)
        {
            string privacy = privacies[i];
            string[] privacyArray = privacy.Split(new[] { ' ' });
            string privacyType = privacyArray[1];

            int durationByprivacyType = duration[privacyType];

            string[] date = privacyArray[0].Split(new[] { '.' });
            int year = int.Parse(date[0]);
            int month = int.Parse(date[1]);
            int day = int.Parse(date[2]);

            month += durationByprivacyType;
            if (month > 12)
            {
                while (month > 12)
                {
                    year++;
                    month -= 12;
                }
            }

            day -= 1;
            if (day <= 0)
            {
                day = 28;
                if (month - 1 < 1)
                {
                    month = 12;
                    year -= 1;
                }
                else
                {
                    month -= 1;
                }
            }

            DateTime dateTime = new DateTime(year, month, day);

            if (todayDateTime > dateTime)
            {
                answer.Add(i + 1);
            }
        }


        return answer.ToArray();
    }
}