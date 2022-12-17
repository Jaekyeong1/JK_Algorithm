class Solution {
    public int solution(int order) {
        
        int answer = 0;
        int remain = 0;
        
        while(order>0){
            
            remain = order%10;
            
            if(remain == 3 || remain == 6 || remain ==9){
                answer++;
            }
            
            order = order/10;
        }
        
        return answer;
    }
}