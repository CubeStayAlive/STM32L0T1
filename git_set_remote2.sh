git remote remove origin
git config --remove-section branch.master
git remote add origin https://CubeStayAlive@github.com/CubeStayAlive/STM32L0T1.git
git config branch.master.remote origin
git config branch.master.merge refs/heads/master 
echo ------
# echo must do manual remove in config
echo press
read

