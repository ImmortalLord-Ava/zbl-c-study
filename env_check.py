import subprocess
import os

def check_env():
    print("--- CSAPP 环境自检程序 ---")
    tools = ["gcc", "gdb", "make", "objdump", "readelf"]
    all_pass = True
    
    for tool in tools:
        try:
            version = subprocess.check_output([tool, "--version"], stderr=subprocess.STDOUT).decode().split('\n')[0]
            print(f"[OK] {tool} 已安装: {version}")
        except Exception:
            print(f"[ERROR] {tool} 未找到，请执行: sudo apt update && sudo apt install build-essential gdb")
            all_pass = False
            
    if all_pass:
        print("\n🎉 环境完美！你已经准备好迎接 Data Lab 了。")
    else:
        print("\n⚠️ 环境尚有缺失，请先补全工具链。")

if __name__ == "__main__":
    check_env()
