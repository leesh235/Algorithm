package baekjoon_greedy;

import java.util.Arrays;
import java.util.Scanner;

public class greedy_13164 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n, k, result = 0;

        n = scanner.nextInt();
        k = scanner.nextInt();

        int s[] = new int[n];
        int d[] = new int[n - 1];

        for(int i = 0; i < n; i++){
            s[i] = scanner.nextInt();
        }
        //키 차이 배열로 만들기
        for(int i = 0; i < n - 1; i++){
            d[i] = s[i + 1] - s[i];
        }
        // 정렬
        Arrays.sort(d);

        for(int i = 0; i < n - k; i++){
            result += d[i];
        }

        System.out.println(result);

    }
}
