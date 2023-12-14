using System;

public class Solution {
    public int[] solution(string[] wallpaper) {
        int lux = int.MaxValue;
        int luy = int.MaxValue;
        int rdx = int.MinValue;
        int rdy = int.MinValue;

        for (int i = 0; i < wallpaper.Length; i++)
        {
            if (wallpaper[i].Contains("#"))
            {
                if (luy > i)
                    luy = i;

                int index = wallpaper[i].IndexOf('#');
                if (index < lux)
                    lux = index;

                index = wallpaper[i].LastIndexOf('#');
                if (index + 1> rdx)
                    rdx = index + 1;

                if (i + 1 > rdy)
                    rdy = i + 1;
            }
        }

        return new[] { luy, lux, rdy, rdx };
    }
}