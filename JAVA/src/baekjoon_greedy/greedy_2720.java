package baekjoon_greedy;

import java.util.Scanner;

public class greedy_2720 {
    public static void main(String[] args) {

        int t, rem;
        int arr[];
        int[] cnt = {0, 0, 0, 0};

        Scanner scanner = new Scanner(System.in);

        t = scanner.nextInt();

        arr = new int[t];

        for(int i = 0; i < t; i++){
            arr[i] = scanner.nextInt();
        }

        for(int i = 0; i < t; i++){
            cnt[0] = (arr[i] / 25);
            rem = arr[i] % 25;

            cnt[1] = (rem / 10);
            rem = rem % 10;

            cnt[2] = (rem / 5);
            rem = rem % 5;

            cnt[3] = (rem / 1);

            for(int j = 0; j < 4; j++) {
                System.out.print(cnt[j]);
                System.out.print(" ");
            }
            System.out.println();
        }

    }
}
