class Solution {
    static int index;
    public static Node treeFromString(String s) {
        index = 0;
        return solve(s);
    }
    public static Node solve(String str){
        if(index>=str.length()){
            return null;
        }
        StringBuilder sb = new StringBuilder("");
        while(index<str.length() && str.charAt(index)>='0' && str.charAt(index)<='9'){
            sb.append(str.charAt(index++));
        }
        Node ans = new Node(Integer.parseInt(sb.toString()));
        
        if(index<str.length() && str.charAt(index)=='('){
            index++;
            ans.left = solve(str);
        }
        if(index<str.length() && str.charAt(index)=='('){
            index++;
            ans.right = solve(str);
        }
        index++;
        return ans;
    }
}
