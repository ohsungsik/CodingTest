using System;
using System.Linq;

public class Solution {
    public string solution(string s) {
        char[] charArray = s.ToCharArray();
        Array.Sort(charArray);

        return string.Concat(charArray.Reverse().ToArray());
    }
}