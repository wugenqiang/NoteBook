echo '--------upload files start--------'
# 进入生成的构建文件夹
# cd ./

# 如果你是要部署到自定义域名
# echo 'www.example.com' > CNAME

#git init
git add -A
git status
git commit -m 'auto update https://wugenqiang.gitee.io/CS-Notes'
echo '--------commit successfully--------'
# 如果你想要部署到 https://<USERNAME>.github.io
# git push -u origin master
git push -f git@gitee.com:wugenqiang/CS-Notes.git master
echo '--------push successfully--------'

# 如果你想要部署到 https://<USERNAME>.github.io/<REPO>
# git push -f git@github.com:<USERNAME>/<REPO>.git master:gh-pages