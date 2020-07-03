# Vue 适配移动端

> 使用 rem

!> 如果项目已经开发的差不多了，没有用到rem 又要使用rem，您用这招：安装 postcss-pxtorem：转换px为rem的插件

## 安装 postcss-pxtorem

```
npm install postcss-pxtorem --save
```

## 新建 rem.js 文件

```js
const baseSize = 32
// 设置 rem 函数
function setRem () {
  // 当前页面宽度相对于 750 宽的缩放比例，可根据自己需要修改。
  const scale = document.documentElement.clientWidth / 750
  // 设置页面根节点字体大小
  document.documentElement.style.fontSize = (baseSize * Math.min(scale, 2)) + 'px'
}
// 初始化
setRem()
// 改变窗口大小时重新设置 rem
window.onresize = function () {
  setRem()
}
```

并引用进 main.js 或者你自定义的文件内

```js
import './rem'
```

## 修改 .postcssrc.js 文件

在`.postcssrc.js 文件内的 `plugins 添加以下配置，配后就可以在开发中直接使用 `px` 单位开发了

```css
"postcss-pxtorem": {
      "rootValue": 32,
      "propList": ["*"]
    }
```

