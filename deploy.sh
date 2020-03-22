# 终止一个错误
set -e

# 进入生成的构建文件夹
# cd ./

# 如果你是要部署到自定义域名
# echo 'www.example.com' > CNAME

# git init
git add -A
git commit -m 'auto update https://wugenqiang.github.io/CS-Notes'

# 如果你想要部署到 https://<USERNAME>.github.io
git push -u origin master

# 如果你想要部署到 https://<USERNAME>.github.io/<REPO>
# git push -f git@github.com:<USERNAME>/<REPO>.git master:gh-pages

cd -