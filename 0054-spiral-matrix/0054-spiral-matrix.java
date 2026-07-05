class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {

        int row = matrix.length;
        int column = matrix[0].length;

        int startingrow = 0;
        int startingcolumn = 0;
        int endingrow = row - 1;
        int endingcolumn = column - 1;

        List<Integer> ans = new ArrayList<>();

        int count = 0;
        int total = row * column;

        while (count < total) {

            for (int i = startingcolumn; i <= endingcolumn && count < total; i++) {
                ans.add(matrix[startingrow][i]);
                count++;
            }
            startingrow++;
            for (int i = startingrow; i <= endingrow && count < total; i++) {
                ans.add(matrix[i][endingcolumn]);
                count++;
            }
            endingcolumn--;

            for (int i = endingcolumn; i >= startingcolumn && count < total; i--) {
                ans.add(matrix[endingrow][i]);
                count++;
            }
            endingrow--;

            for (int i = endingrow; i >= startingrow && count < total; i--) {
                ans.add(matrix[i][startingcolumn]);
                count++;
            }
            startingcolumn++;
        }

        return ans;
    }
}