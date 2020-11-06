Pod::Spec.new do |s|
  s.name         = "CYDevice"    #存储库名称
  s.version      = "1.0.1"      #版本号，与tag值一致
  s.summary      = "iOS设备数据"  #简介
  s.description  = "用来获取iOS设备数据"  #描述
  s.homepage     = "https://github.com/cy92yong/CYDevice.git"      #项目主页，不是git地址
  s.license      = { :type => "MIT", :file => "LICENSE" }   #开源协议
  s.author             = { "chuyong" => "694107462@qq.com" }  #作者
  s.platform     = :ios, "7.0"                  #支持的平台和版本号
  s.source       = { :git => "https://github.com/cy92yong/CYDevice.git", :tag => "1.0.1" }         #存储库的git地址，以及tag值
  s.source_files  =  "screenSize/CYDevice/*.{h,m,json}" #需要托管的源代码路径
  s.requires_arc = true #是否支持ARC 
end