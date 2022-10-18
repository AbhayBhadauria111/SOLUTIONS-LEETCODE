class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        def pixel(image,sr,sc,color,visited):
            visited.add((sr,sc))
            temp=image[sr][sc]
            image[sr][sc]=color
            # print(image)
            if sr+1<len(image) and image[sr+1][sc]==temp and (sr+1,sc) not in visited:
                pixel(image,sr+1,sc,color,visited)
            if sr-1>=0 and image[sr-1][sc]==temp and (sr-1,sc) not in visited:
                pixel(image,sr-1,sc,color,visited)
            if sc+1<len(image[0]) and image[sr][sc+1]==temp and (sr,sc+1) not in visited:
                pixel(image,sr,sc+1,color,visited)
            if sc-1>=0 and image[sr][sc-1]==temp and (sr,sc-1) not in visited:
                pixel(image,sr,sc-1,color,visited)
        visited=set()
        pixel(image,sr,sc,color,visited)
        print(image)
        return image
        