package baekjoon_greedy;

import java.util.Scanner;

public class greedy_14487 {
    public static void main(String[] args) {

        int n;
        int x;
        int max = 0;
        int sum = 0;

        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();

        for(int i = 0; i < n; i++){
            x = scanner.nextInt();
            sum = sum + x;
            if(x > max){
                max = x;
            }
        }

        System.out.println(sum - max);

    }
}
