class Solution {
    public int solution(int[] sides) {
        int answer = 0;
        int max = 0;
        int sum = 0;
        
        for(int i =0; i<sides.length; i++){
            if( max < sides[i]){
                max = sides[i];
            }
            sum += sides[i];
        }
        answer = sum - (2 * max) > 0 ? 1 : 2;
        return answer;
    }
}