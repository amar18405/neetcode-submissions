func minEatingSpeed(piles []int, h int) int {
    max := 0
	for _, v := range piles{
        if v > max {
            max = v
        }
    }
    low := 1
    high := max
    res := max
    for low <= high {
        mid := (low + high)/2
        hour := 0
        for _, p := range piles{
            hour += (p+ mid - 1) / mid
        }
        if hour <= h{
            res = mid
            high = mid - 1
        } else {
            low = mid + 1
        }
    }
    return res
}
