package baekjoon_greedy;

import java.util.Scanner;

public class greedy_16435 {
    public static void main(String[] args) {

        int n, len;
        int arr[];

        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();
        len = scanner.nextInt();

        arr = new int[n];

        for(int i = 0; i < n; i++){
            arr[i] = scanner.nextInt();
        }

        //정렬
        for(int i = 0; i < n - 1; i++){
            int j = i;
            while(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                if(j == 0){
                    break;
                }
                j--;
            }
        }

        for(int i = 0; i < n; i++){
            if(len >= arr[i]){
                len++;
            }else{
                break;
            }
        }

        System.out.print(len);

    }
}
