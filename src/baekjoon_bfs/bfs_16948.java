package baekjoon_bfs;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class Pair{
    int x, y;

    public Pair(int x, int y){
        this.x = x;
        this.y = y;
    }

    public int first(){
        return x;
    }

    public int second(){
        return y;
    }
}

public class bfs_16948 {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n;
        int x, y;
        int a, b;

        int[][] visited;
        Queue<Pair> queue = new LinkedList<>();

        int[] _x = {-2, -2, 0, 0, 2, 2};
        int[] _y = {-1, 1, -2, 2, -1, 1};

        n = scanner.nextInt();
        x = scanner.nextInt();
        y = scanner.nextInt();
        a = scanner.nextInt();
        b = scanner.nextInt();

        visited = new int[n][n];

        queue.add(new Pair(x, y));
        visited[x][y] = 1;

        while(!queue.isEmpty()){

            int queueSize = queue.size();

            for(int i = 0; i < queueSize; i++){
                Pair q = queue.poll();
                int first = q.first();
                int second = q.second();

                for(int j = 0; j < 6; j++){
                    int xx = first + _x[j];
                    int yy = second + _y[j];

                    if(yy >= 0 && xx >= 0 && yy < n && xx < n){
                        if(visited[xx][yy] == 0){
                            queue.add(new Pair(xx, yy));
                            visited[xx][yy] = visited[first][second] + 1;
                        }
                    }
                }
            }
        }

        System.out.println(visited[a][b] - 1);

    }
}
