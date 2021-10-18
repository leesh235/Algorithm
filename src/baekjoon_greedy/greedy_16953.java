package baekjoon_greedy;

import java.util.Scanner;

public class greedy_16953 {
    static int a, b, cnt = 0;

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        a = scanner.nextInt();
        b = scanner.nextInt();

        cal(b);

    }

    static void cal(int x){
        if(x == a){
            System.out.println(cnt + 1);
        }else if(x > a){
            if(x % 10 == 1){
                cnt++;
                cal(x / 10);
            }else if(x % 2 == 0){
                cnt++;
                cal(x / 2);
            }else{
                System.out.println(-1);
            }
        }else{
            System.out.println(-1);
        }
    }
}
