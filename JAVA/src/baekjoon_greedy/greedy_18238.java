package baekjoon_greedy;

import java.util.Scanner;

public class greedy_18238 {
    public static void main(String[] args) {
        int start = 65;
        int next = 0;
        int time = 0;
        String str = "";

        Scanner scanner = new Scanner(System.in);

        str = scanner.next();

        for(int i = 0; i < str.length(); i++){
            next = (int)str.charAt(i);

            int x = Math.abs(start - next);
            int y = 0;
            if( start > next ){
                y = (90 - start) + (next - 65) + 1;
            }else{
                y = (90 - next) + (start - 65) + 1;
            }
            time += (x > y ? y : x);
            start = str.charAt(i);
        }

        System.out.println(time);

    }
}
