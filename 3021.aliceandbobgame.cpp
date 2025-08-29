class solution {    
    public:
    long long flower(int n,int m){
        long result=0;

        //we can see that if a lain is even and the other is odd alice wins the games so we have to add the result of both the lain and thus will get the number of times alice win

        //taking even in n and odd in m
        long long even_n=n/2;
        long long odd_m=(m+1)/2;
        long long count1=even_n*odd_m;

        //taking odd in n and even m
        long long odd_n=(n+1)/2;
        long long even_m=m/2;
        long long count2=odd_n*even_m;

        result=count1+count2;
        return result 
    
    
    
    }
}