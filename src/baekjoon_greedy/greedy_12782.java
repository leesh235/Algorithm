package baekjoon_greedy;

import java.util.Scanner;

public class greedy_12782 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int t, one = 0, zero = 0;
        String n = "";
        String m = "";

        t = scanner.nextInt();

        for(int i = 0; i < t; i++){

            n = scanner.next();
            m = scanner.next();

            one = 0;
            zero = 0;
            for(int j = 0; j < n.length(); j++){
                if(n.charAt(j) != m.charAt(j)){
                    if(n.charAt(j) == '1'){
                        one++;
                    }else{
                        zero++;
                    }
                }
            }

            if(one < zero){
                System.out.println(zero);
            }else{
                System.out.println(one);
            }
        }

    }
}
