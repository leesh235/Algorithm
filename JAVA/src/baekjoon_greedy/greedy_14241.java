package baekjoon_greedy;

import java.util.Scanner;

public class greedy_14241 {
    public static void main(String[] args) {

        int n = 0;
        int arr[] = new int[100];
        int newSlime = 0;
        int score = 0;

        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();

        for(int i = 0; i < n; i++){
            arr[i] = scanner.nextInt();
        }

        newSlime = arr[0];

        for(int i = 1; i < n; i++){
            score += newSlime * arr[i];
            newSlime += arr[i];
        }

        System.out.print(score);
    }
}
