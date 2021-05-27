# JhDownProgressView
JhDownProgressView - 自定义下载进度条(6种样式)

![](https://gitee.com/iotjh/Picture/raw/master/progressView.gif)  <br> 

## Examples
* Demo1
```objc
//点击下载时
[self setNOClick];
JhDownProgressView *progressView = [JhDownProgressView showWithStyle:JhStyleRectangle];
[self.view addSubview:progressView];

//设置下载进度
progressView.Jh_progress = progressValue;

//下载完成
[self setYESClick];

- (void)setNOClick {
    self.view.userInteractionEnabled = NO;
    self.navigationController.navigationBar.userInteractionEnabled = NO;//将nav事件禁止
    self.tabBarController.tabBar.userInteractionEnabled = NO;//将tabbar事件禁止
}

- (void)setYESClick {
    self.view.userInteractionEnabled = YES;
    self.navigationController.navigationBar.userInteractionEnabled = YES;
    self.tabBarController.tabBar.userInteractionEnabled = YES;
}

```
