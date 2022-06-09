class Solution {
    public int calPoints(String[] ops) {
        Stack<Integer> stk=new Stack<>();
        int totalScore=0;
        for(int i=0;i<ops.length;i++){            
            if(ops[i].equals("+")){
                int scoreTwo=stk.pop();
                int newScore=scoreTwo+stk.peek();
                stk.push(scoreTwo);
                stk.push(newScore);
                totalScore+=newScore;
            }
           
        }
        
        return totalScore;
    }
}