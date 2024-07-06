# Linux Kernel quiz3+4

## 實作筆記
[2024q1 Homework4 (quiz3+4)](https://hackmd.io/@Appmedia/2024q1_Homework4_quiz34)

## Test1 (開平方根)
* 實作計算開平方根
* 解釋上述程式碼運作原理並重新整理數學式 (原題目故意略去某些細節)，並嘗試用第 2 週測驗題提到的 `ffs` / `fls` 取代 `__builtin_clz` ，使程式不依賴 GNU extension，且提供分支和無分支 (branchless) 的實作。
* 在 Linux 核心原始程式碼找出對整數進行平方根運算的程式碼，並解說其應用案例，至少該包含 block 目錄的程式碼。

## Test2 (Branchless 的除以 10 (div 10) 以及 取餘 10 (mod 10))
* 將 除以 10 (div 10) 以及 取餘 10 (mod 10) 合併成一個函式並降低運算成本。
* 參照《Hacker's Delight》和 CS:APP 第二章，解釋上述程式碼運作原理，並對照 Instruction tables，以分析最初具備除法操作的程式碼和最終完全不依賴除法和乘法的實作程式碼裡頭，指令序列佔用的 CPU 週期數量。

## Test3 (ilog2)
* 解釋 ilog2 函式實作
* 在 Linux 核心原始程式碼找出 `log2` 的相關程式碼 (或類似的形式)，並解說應用案例

## Test4 (EWMA)
* 解釋 EWMA (指數加權移動平均) 實作
* 在 Linux 核心原始程式碼找出 EWMA 的相關程式碼 (或類似的形式)，並解說應用案例，至少該涵蓋無線網路裝置驅動程式。

## Test5 (ceil_ilog2)
* 改進程式碼，使其得以處理 x = 0 的狀況，並仍是 branchless
* 在 Linux 核心原始程式碼找出 ceil 和 log2 的組合 (類似的形式)，並解說應用案例 (提示: 在 Linux 核心排程器就有)

## Test6 (population count)
* 解釋 population count 函式實作。
* 不依賴 `popcount`，嘗試以上述歸納的規則，針對 LeetCode 477. Total Hamming Distance 撰寫出更高效的程式碼。

## Test7 (Remainder by Summing digits)
* 解釋 Remainder by Summing digits
* 將上述手法應用於第三次作業中，追求更有效的賽局判定機制。

## Test8 (XTree)
* 解釋 XTree 運作原理
* 指出上述程式碼可改進之處，特別跟 AVL tree 和 red-black tree 相比，並予以實作(考慮到循序輸入和亂序輸入的狀況)
* 設計效能評比程式，探討上述程式碼和 Linux 核心 red-black tree 效能落差





