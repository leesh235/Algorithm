package baekjoon_greedy;

import java.util.Scanner;

public class greedy_14655 {
    public static void main(String[] args) {

        int n, sum = 0;
        int arrOne[][];

        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();

        arrOne = new int[2][n];

        for(int i = 0; i < 2; i++){
            for(int j = 0; j < n; j++){
                arrOne[i][j] = scanner.nextInt();
                sum = sum + Math.abs(arrOne[i][j]);
            }
        }

        System.out.print(sum);

    }
}
