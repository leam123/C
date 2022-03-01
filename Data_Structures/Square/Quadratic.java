import java.lang.*;
import java.util.*;
class Quadratic
{
    static int a, b, c;
    public static double evaluate(int x, int a, int b, int c)
    {
        return a*(Math.pow(x,2)) - (b*x) + c;
    }
    public static double discriminant()
    {
        return  Math.pow(b,2) - (4*a*c);
    }
    public static boolean isImaginary()
    {
        boolean root = false;
        double d = discriminant();
        if(d < 0)
        {
            root = true;
        }
        return root;
    }
    public static boolean isRealRoots()
    {
        boolean root = false;
        double d = discriminant();
        if(d >= 0)
        {
            root = true;
        }
        return root;
    }
    public static double firstRoot(int a, int b, int c)
    {
        double x1;
        double d = discriminant();
        x1 = (-b + Math.sqrt(d))/(2*a);
        return x1;
    }
    public static double secondRoot(int a, int b, int c)
    {
        double x2;
        double d = discriminant();
        x2 = (-b + Math.sqrt(d))/(2*a);
        return x2;
    }
    public static boolean isPerfectSquare()
    {
        double f = firstRoot(a,b,c);
        double s = secondRoot(a,b,c);
        boolean square = false;
        if(f==s)
        {
            square = true;
        }
        return square;
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.print("Input number <a,b,c>: ");
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        System.out.print("Input value of x: ");
        int x = input.nextInt();
        double evaluate = evaluate(x,a,b,c);
        System.out.println("Value of X: " + evaluate);
        boolean r = isImaginary();
        boolean p = isPerfectSquare();
        double f = firstRoot(a,b,c);
        double s = secondRoot(a,b,c);
        if(r==false)
        {
            System.out.println("First root value is: " + f);
            System.out.println("First root value is: " + s);
            if(p==true)
            {
                System.out.println("The quadratic expression is a perfect square");
            }
        }
        else
        {
            System.out.println("Roots are imaginary");
        }

    }
}