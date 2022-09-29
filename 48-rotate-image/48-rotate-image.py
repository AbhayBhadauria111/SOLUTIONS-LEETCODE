class Solution(object):
    def rotate(self, matrix):
        n = len(matrix)
        # transpose
        for i in range(n):
            for j in range(i + 1, n):
                tmp = matrix[i][j]
                matrix[i][j] = matrix[j][i]
                matrix[j][i] = tmp
        # flip horizontally
        for i in range(n):
            for j in range(n//2):
                tmp = matrix[i][j]
                matrix[i][j] = matrix[i][n - 1 - j]
                matrix[i][n - 1- j] = tmp