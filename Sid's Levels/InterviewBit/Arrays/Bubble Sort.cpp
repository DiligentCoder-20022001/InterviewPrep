class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        for(int i = 0; i < n-1; i++)
        {
            for(int j = 0; j < n-1-i; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    }
};
