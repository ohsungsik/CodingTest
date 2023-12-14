using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public string solution(string s) {
            string[] stringNumber = s.Split(' ');
            IEnumerable<int> number = stringNumber.Select(numberString => Convert.ToInt32(numberString));

            return $"{number.Min()} {number.Max()}";
    }
}