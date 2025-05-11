class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $k
     * @return Integer[]
     */
   function topKFrequent($nums, $k) {
    $count = array_count_values($nums);
    arsort($count);
    return array_slice(array_keys($count), 0, $k);
}

}