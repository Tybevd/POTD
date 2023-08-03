static class Pair{
  int r;int c;
  Pair(int r,int c){
    this.r=r;
    this.c=c;
  }
 }
 static boolean isValid(int i,int j,int n,int m){
  return i>=0&&j>=0&&i<n&&j<m;
 }
 static int shortestXYDist(ArrayList<ArrayList<Character>>grid,
                              int n,int m){
    Queue<Pair> queue= new LinkedList<Pair>();
    boolean vis[][]=new boolean[n][m];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(grid.get(i).get(j)=='X'){
          queue.add(new Pair(i,j));
        }
      }
    }
    int ans=0;
    int dir[][]={
      {1,0},
      {-1,0},
      {0,1},
      {0,-1}
    };
    int level=0;
    while(!queue.isEmpty()){
      int size=queue.size();
      level++;
      while(size-->0){
        Pair curr=queue.remove();
        for(int i=0;i<4;i++)
        {
          int rr=curr.r+dir[i][0];
          int rc=curr.c+dir[i][1];
          if(isValid(rr, rc, n, m))
          {
            if(grid.get(rr).get(rc)=='O'&&!vis[rr][rc]){
              vis[rr][rc]=true;
              queue.add(new Pair(rr,rc));
            }
            if(grid.get(rr).get(rc)=='Y')
            return level;
          }
        }
      }
    }
                                return 0;
                              }
