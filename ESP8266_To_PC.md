#+OPTIONS: ^:nil \n:t
# ESP8266作为AP，智能终端作为STA接入AP
## 具体指令列表

> +++        
AT+CWMODE_DEF=2     
//以下两行二选一      
AT+CWSAP_DEF="ESP8266EX","2017champion",1,4  //多连接,广播SSID   
AT+CWSAP_DEF="ESP8266EX","2017champion",1,4,1,1 //(AT指令固件要在1.5.4版本以上)  单连接,隐藏SSID  
AT+CIPMUX=0     
AT+SAVETRANSLINK=1,"192.168.4.2",8080,"TCP"     


## 另外可能会用到的AT指令
### 基础指令

> ATE0         //关闭回显     
AT           //测试AT启动       
AT+RST       //重启       
AT+GMR       //查询版本信息       
AT+RESTORE   //恢复出厂设置       

### wifi功能指令        
### TCP/IP指令        

> AT+CIPSTATUS //查询网络连接信息     
AT+CIPMODE=1        
AT+CIPSEND   //发送数据     
AT+CIPCLOSE  //关闭传输     

## 注意事项
* *若出现不正常可先进行恢复出厂设置再试*        
* *刷新AT固件时将小模块剩余两个引脚用跳帽线相互连接，然后按“AT指令烧写及说明文件中指示操作”*       
* *连接隐藏SSID时，如出现添加SSID后无作任何响应时，可先改成广播SSID，在移动端测试连接正常后，记住wifi,并设为自动连接，然后再把模块改成隐藏SSID模式即可*        
* *连接隐藏SSID时，若出现以下情况：能看到wifi信号显示已保存状态，但是却始终连不上。原因可能是已经有其它设备连接成功（只能同时保持1个station连接），此时要么断开其它连接，要么修改密码*
* *隐藏SSID使用建议：wifi名字最好只有使用者知道，密码最好只有开发者知道*
