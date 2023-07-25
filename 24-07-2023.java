
import java.util.*;

public class Solution {
 int max_lvl=0;
 ArrayList<Integer> ans;
 ArrayList<Integer> rightView(Node node){
   ans=new ArrayList<Integer>();
   fun(node,1);
   return ans;
 }
 void fun(Node root, int lvl){
   if(root==null) return;
   if(max_lvl<lvl){
      ans.add(root.data);
      max_lvl=lvl;
   }
   fun(root.right,lvl+1);
   fun(root.left,lvl+1);
 }
}
