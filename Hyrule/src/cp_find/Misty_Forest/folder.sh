#!/bin/bash

# 設定要創建的資料夾數量和每個資料夾的子資料夾數量
num_folders=10        # 主資料夾數量
num_subfolders=10     # 每個主資料夾的子資料夾數量
depth=10              # infolder 中的資料夾深度

# 儲存所有生成資料夾的路徑
all_paths=()

# 創建主資料夾
for ((i=1; i<=num_folders; i++)); do
    folder_name="Forest_$RANDOM"   # 第一層固定為 Forest 並加上隨機數
    mkdir "$folder_name"           # 創建第一層資料夾

    # 在 Forest 資料夾中創建 Mirror 子資料夾
    for ((j=1; j<=num_subfolders; j++)); do
        subfolder_name="Mirror_$RANDOM"  # 第二層固定為 Mirror 並加上隨機數
        mkdir "$folder_name/$subfolder_name"  # 創建第二層資料夾

        # 在 Mirror 子資料夾中創建 box 資料夾
        box_folder="$folder_name/$subfolder_name/box"
        mkdir "$box_folder"  # 創建第三層資料夾

        # 在 box 資料夾中創建深度層次資料夾
        current_path="$box_folder"
        for ((k=1; k<depth; k++)); do
            inner_folder="package_$RANDOM"    # 隨機命名接下來的資料夾
            current_path="$current_path/$inner_folder"  # 更新路徑
            mkdir "$current_path"  # 創建新的一層資料夾
        done

        # 將最深層的資料夾路徑添加到 all_paths 陣列中
        all_paths+=("$current_path")
    done
done

# 隨機選擇一個路徑並將 Ascendance_key 複製到該路徑
random_path="${all_paths[RANDOM % ${#all_paths[@]}]}"
cp Ascendance_key "$random_path"
mv spellbook .spellbook
mv .spellbook "$random_path"
echo "已隨機創建 $num_folders 個主資料夾，每個主資料夾包含 $num_subfolders 個子資料夾，每個子資料夾內的 box 含有 $depth 層深度的資料夾。"
echo "Ascendance_key 已隨機複製到以下路徑："
echo "$random_path"
