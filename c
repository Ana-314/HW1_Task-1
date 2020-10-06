
import java.util.Scanner;

public class C {
    int a,b,c;
    void valuesInit () {
        Scanner input = new Scanner(System.in);
        System.out.println("number a: ");
        a = input.nextInt();
        System.out.println("number b: ");
        b = input.nextInt();
        System.out.println("number c: ");
        c = input.nextInt();

    }

    int lastNum() {
        return a % 10;
    }

    int firstNum(){
        while (b >= 10)
            b /= 10;
        return b;
    }

    int sumnum(){
        int sum = 0;
        while (c != 0)
        {
            sum = sum + c% 10;
            c = c/10;
        }
        return sum;
    }

    int mertFive () {
        return  lastNum() * firstNum();
    }

    int mertSix () {
        return  firstNum() + mertFive();
    }
}
