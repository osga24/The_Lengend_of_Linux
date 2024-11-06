#!/bin/bash
# 0. setup
chown -R link:link /home/link
chmod -R 755 /home/link

mkdir /home/link/temples

# 1. welcome
mv /root/src/welcome/welcome.sh /home/link/.bashrc_append
echo -e "\n. /home/link/.bashrc_append" >> /home/link/.bashrc
chown link:link /home/link/.bashrc_append

# 2. ls & cat
mv /root/src/ls_cat/* /home/link/

# 3. file & chmod
mv /root/src/file_chmod/* /home/link/
gcc -s -o /home/link/The_Forest_of_Mirrors/stone /home/link/The_Forest_of_Mirrors/stone.c
rm /home/link/The_Forest_of_Mirrors/XXXXX_swold /home/link/The_Forest_of_Mirrors/XXXXX_swold.c /home/link/The_Forest_of_Mirrors/stone.c
# 4. touch & mkdir
mv /root/src/touch_mkdir/* /home/link/temples
gcc -s -o /home/link/temples/Temple_of_Creation/challenge /home/link/temples/Temple_of_Creation/challenge.c
rm /home/link/temples/Temple_of_Creation/challenge.c

# 5. cp & find
mv /root/src/cp_find/Temple_of_Ascendance /home/link/temples
mv /root/src/cp_find/Misty_Forest /home/link
chmod +x /home/link/Misty_Forest/folder.sh
gcc -s -o /home/link/temples/Temple_of_Ascendance/challenge /home/link/temples/Temple_of_Ascendance/challenge.c
# 刪除 folder.sh 和 Ascendance_key
rm /home/link/Misty_Forest/folder.sh /home/link/Misty_Forest/Ascendance_key /home/link/temples/Temple_of_Ascendance/challenge.c

