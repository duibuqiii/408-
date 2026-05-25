#!/bin/bash
# 用法: ./sync.sh
# 自动扫描所有章节文件夹，在 练习/ 对应位置创建 .h 模板（含 include guard）

for src_dir in 0[1-8]_*/; do
    [ -d "$src_dir" ] || continue
    prac_dir="练习/$src_dir"
    mkdir -p "$prac_dir"
    for file in "$src_dir"*; do
        [ -f "$file" ] || continue
        filename=$(basename "$file")
        target="$prac_dir$filename"
        if [ -f "$target" ]; then
            continue
        fi
        # 从文件名生成 include guard: 去掉后缀，生成 INC_408_xxx_H
        name_no_ext="${filename%.*}"
        guard="INC_408_${name_no_ext}_H"
        cat > "$target" <<EOF
//
// Created by 15952 on $(date +%Y/%m/%d).
//

#ifndef ${guard}
#define ${guard}



#endif //${guard}
EOF
        echo "已创建: $target"
    done
done

echo "同步完成"
