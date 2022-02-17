// Function to find square root
// x: element to find square root
class Solution
{
  public:
    long long int floorSqrt(long long int x) 
    {
        //newton's formula
        long r = x;
        while (r*r > x)
        {
            r = (r+x/r)/2;
        }
        return r;
    }
};
