/*Create your very own map function. Your map function will have the same syntax as we have in embedded C (Syntax: map(value , in_range_start , in_range_end , out_range_start , out_range_end)) */

class mapFunc
{
    public static double map(double value , double in_range_start ,double in_range_end ,double out_range_start ,double out_range_end){
        double percentVal =  (value-in_range_start)/(in_range_end-in_range_start)*100;
        double mappedVal = out_range_start + (out_range_end-out_range_start)*percentVal/100;
        return mappedVal;
    }
    public static void main(String[] args) {
        int val = 42;
        double newVal=map(val,0,100,0,50);
        System.out.printf("Mapped value : %f",newVal);
        
    }
}