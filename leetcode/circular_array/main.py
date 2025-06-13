class Solution(object):
    def maxAdjacentDistance(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        return max([abs(nums[i] - nums[i - 1]) for i, _ in enumerate(nums)])


if __name__ == "__main__":
    numss = [[1, 2, 4], [-5, -10, -5]]
    ex = Solution()

    print(ex.maxAdjacentDistance(nums=numss[0]))  # 3
    print(ex.maxAdjacentDistance(nums=numss[1]))
