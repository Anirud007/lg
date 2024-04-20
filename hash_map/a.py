def can_color_two_parity_sums(arr):
    total_sum = sum(arr)
    odd_count = sum(1 for num in arr if num % 2 != 0)

    if total_sum % 2 == 0:
        return odd_count > 0 and len(arr) - odd_count > 0
    else:
        return odd_count >= 2

if __name__ == "__main__":
    t = int(input())

    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        if can_color_two_parity_sums(arr):
            print("YES")
        else:
            print("NO")