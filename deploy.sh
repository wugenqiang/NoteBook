echo '--------upload files start--------'
# 进入生成的构建文件夹
# cd ./

# 如果你是要部署到自定义域名
# echo 'www.example.com' > CNAME

# git init
git add .
git status
git commit -m 'auto update https://wugenqiang.github.io/CS-Notes'
echo '--------commit successfully--------'

# git push -f https://github.com/wugenqiang/CS-Notes.git master
git push -u https://github.com/wugenqiang/CS-Notes.git master
# git remote add origin https://github.com/wugenqiang/CS-Notes.git
# git push -u origin master
echo '--------push to GitHub successfully--------'

# git push -f https://gitee.com/wugenqiang/CS-Notes.git master
git push -u https://gitee.com/wugenqiang/CS-Notes.git master
# git remote add origin https://gitee.com/wugenqiang/CS-Notes.git
# git push -u origin master
echo '--------push to Gitee successfully--------'

# 如果你想要部署到 https://<USERNAME>.github.io/<REPO>
# git push -f git@github.com:<USERNAME>/<REPO>.git master:gh-pages
# 完美
