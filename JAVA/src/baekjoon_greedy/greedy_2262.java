package baekjoon_greedy;

import java.util.Scanner;

public class greedy_2262 {
    public static void main(String[] args) {
        //선수가 n명 일때 누적 승자의 수 n - 1
        //겨룰 수있는 상대는 i번째 선수 일경우 i - 1번 or i + 1번 선수하고 대전가능
        //1번과 n번쨰 선수는 각각 2번과 n - 1번하고만 가능(꼬임 불가능)
        //부전승은 임의로 가능
        //어차피 우승은 1위
        //랭킹이 높은 사람이 올라가면 격차가 커질 수 있음

        int n, sum = 0;

        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();

        int arr[] = new int[n + 2];

        for(int i = 1; i <= n; i++){
            arr[i] = scanner.nextInt();
        }

        int index = 0, j = 0, x;
        while(true){
            int max = 0;
            for(int i = 1; i <= n - j; i++){
                if(max < arr[i]){
                    max = arr[i];
                    index = i;
                }
            }

            if(arr[index] == 1){
                break;
            }

            //런타임 에러(ArrayIndexOfBounds)가 예상됨
            //index가 6이면 arr[7]을 참조하게됨(arr[6]까지 존재)
            //따라서 arr 선언 시 +1을 해줌(해당 코드 24번)
            //ArrayList를 통해 동적으로 배열을 할당 할 수 도 있음
            x = Math.max(arr[index - 1], arr[index + 1]);
            sum += arr[index] - x;

            for(int i = index; i < n - j; i++){
                arr[i] = arr[i + 1];
            }
            arr[n - j] = 0;

            j++;
        }

        System.out.println(sum);
    }
}
