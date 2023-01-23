class Solution {
    public static String removePair(String s) {
        // code here
        String ans = "";
        Stack<Character> st = new Stack<>();
        
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if(!st.isEmpty() && st.peek()==ch)   st.pop();
            else    st.push(ch);
        }
        
        if(st.isEmpty())    return "-1";
        while(!st.isEmpty())    ans = st.pop() + ans;
        return ans;
    }
}
