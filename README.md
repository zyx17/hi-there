# hi-there
a repository for xingyuan autonomous vehicle enviroment test

follow the steps to check envs

1. install opencv and renew the opencv paths in CmakeLists.txt,version 3.x is recommanded

2. install boost by following command "sudo apt install libboost-all-dev"

3. install pcl-1.8 by this links:https://blog.csdn.net/dieju8330/article/details/85255994

4. if don't need to use some libs in CmakeLists.txt,just comment that one in CmakeLists.txt

5. vscode/kdevelop is recommanded,settings have been done.

6. try the following command to use:
   cd hi-there && mkdir build,cd build && cmake .., make -j4, ./hi-there  

