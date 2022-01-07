package baekjoon_greedy;

import java.util.Scanner;

public class greedy_2828 {
    static int n, m, j, sum = 0, k = 1;

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();
        m = scanner.nextInt();
        j = scanner.nextInt();

        for(int i = 1; i <= j; i++){
            int x = scanner.nextInt();

            cal(x);

        }

        System.out.println(sum);

    }

    static void cal(int cur){
        if(cur > k + m - 1){
            k++;
            sum++;
            cal(cur);
        }else if(cur < k){
            k--;
            sum++;
            cal(cur);
        }
    }
}
