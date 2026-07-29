func searchMatrix(matrix [][]int, target int) bool {
    n := len(matrix)
    m := len(matrix[0])

    low := 0;
    high := n*m-1
    for(low <= high){
        mid := low + (high-low)/2;
        row := mid/m
        col := mid%m
        if matrix[row][col] == target {
            return true
        } else if target > matrix[row][col] {
            low = mid + 1
        } else {
            high = mid - 1
        }
    }
    return false
}
