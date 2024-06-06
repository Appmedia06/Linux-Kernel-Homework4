import matplotlib.pyplot as plt

# 樣本值和對應的 EWMA
values = [10, 20, 30, 25, 15, 40, 35, 30, 45, 50]
averages = [10, 13, 18, 20, 19, 26, 29, 29, 33, 38]

# 繪圖
plt.figure(figsize=(10, 6))
plt.plot(values, label='Original Values', marker='o')
plt.plot(averages, label='EWMA', marker='o')
plt.xlabel('Sample Index')
plt.ylabel('Value')
plt.title('Exponentially Weighted Moving Average (EWMA)')
plt.legend()
# plt.grid(True)
plt.show()

