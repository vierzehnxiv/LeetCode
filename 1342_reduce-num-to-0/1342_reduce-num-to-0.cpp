

class Solution {
public:

    int numberOfSteps(int num)
    {
        int steps = 0;
        while (num != 0)
        {
            steps++;
            num = (num % 2 == 0) ? (num / 2) : (num - 1);
        }
        
        return steps;
    }

    int numberOfStepsRecursive(int num) 
    {
        // if num is even, divide it by 2
        // if num is odd, subtract 1 from it
        int steps = 0;

        if (num != 0)
        {
            if (num % 2 == 0)
                steps += 1 + numberOfStepsRecursive(num / 2);
            else
                steps += 1 + numberOfStepsRecursive(--num);
        }
        return steps;       
    }
};