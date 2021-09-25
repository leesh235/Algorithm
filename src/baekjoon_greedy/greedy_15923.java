package baekjoon_greedy;

import java.util.Scanner;

public class greedy_15923 {
    public static void main(String[] args) {

        int n, len = 0, x[], y[];

        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();

        x = new int[n];
        y = new int[n];

        for(int i = 0; i < n; i++){
            x[i] = scanner.nextInt();
            y[i] = scanner.nextInt();
        }

        if(x[0] == x[n - 1]){
            len = Math.abs(y[0] - y[n - 1]);
        }else{
            len = Math.abs(x[0] - x[n - 1]);
        }

        for(int i = 0; i < n - 1; i++){
            if(x[i] == x[i + 1]){
                len += Math.abs(y[i] - y[i + 1]);
            }else{
                len += Math.abs(x[i] - x[i + 1]);
            }
        }

        System.out.println(len);

    }
}
