package baekjoon_greedy;

import java.util.Scanner;

public class greedy_1026 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int sum = 0;
        int n = scanner.nextInt();

        int[] A = new int[n];
        int[] B = new int[n];

        //A배열 입력
        for(int i = 0; i < n; i++){
            A[i] = scanner.nextInt();
        }
        //B배열 입력
        for(int i = 0; i < n; i++){
            B[i] = scanner.nextInt();
        }
        //A배열 정렬
        for(int i = 0; i < n - 1; i++){
            int j = i;
            while(A[j] > A[j + 1]){
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;

                if(j == 0){
                    break;
                }

                j--;
            }
        }
        //A배열 정렬
        for(int i = n - 1; i > 0; i--){
            int j = i;
            while(B[j] > B[j - 1]){
                int temp = B[j];
                B[j] = B[j - 1];
                B[j - 1] = temp;

                if(j == n - 1){
                    break;
                }

                j++;
            }
        }

        for(int i = 0; i < n; i++){
            sum += A[i] * B[i];
        }

        System.out.println(sum);
    }
}
