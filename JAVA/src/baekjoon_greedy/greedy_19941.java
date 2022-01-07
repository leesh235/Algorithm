package baekjoon_greedy;

import java.util.Scanner;

public class greedy_19941 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n, k, cnt = 0;
        String s;

        n = scanner.nextInt();
        k = scanner.nextInt();

        int[] check = new int[n];

        s = scanner.next();

        for(int i = 0; i < n; i++){
            if(s.charAt(i) == 'P'){
                int start = i - k ;
                int end = i + k;
                while (start <= end){
                    if(start >= 0 && start < n){
                        if(s.charAt(start) == 'H' && check[start] != 1){
                            cnt++;
                            check[start] = 1;
                            break;
                        }
                    }
                    start++;
                }
            }
        }

        System.out.println(cnt);
    }
}
