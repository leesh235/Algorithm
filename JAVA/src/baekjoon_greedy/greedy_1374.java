package baekjoon_greedy;

import com.company.Main;

import java.util.*;

public class greedy_1374 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n, temp, cnt = 0;
        int[] start, end;

        n = scanner.nextInt();

        start = new int[n];
        end = new int[n];

        for(int i = 0; i < n; i++){
            temp = scanner.nextInt();
            start[i] = scanner.nextInt();
            end[i] = scanner.nextInt();
        }

        Arrays.sort(start);
        Arrays.sort(end);

        int index = 0;
        for(int i = 0; i < n; i++){
            for(int j = index; j < n; j++){
                if(end[i] <= start[j]){
                    index = j + 1;
                    cnt++;
                    break;
                }
            }
        }

        System.out.println(n - cnt);

    }
}
