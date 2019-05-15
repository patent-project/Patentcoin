# Patent
Shell script to install a [Patent Masternode](https://patent.world/) on a Linux server running Ubuntu 16.04. Use it on your own risk.
***

## Installation
```
wget -q https://raw.githubusercontent.com/zoldur/Patent/master/patent_install.sh
bash patent_install.sh
```
***

## Desktop wallet setup  

After the MN is up and running, you need to configure the desktop wallet accordingly. Here are the steps:  
1. Open the Patent Desktop Wallet.  
2. Go to RECEIVE and create a New Address: **MN1**  
3. Send **1000** PATENT to **MN1**. You need to send all 1000 coins in one single transaction.
4. Wait for 15 confirmations.  
5. Go to **Help -> "Debug Window - Console"**  
6. Type the following command: **masternode outputs**  
7. Open Windows Explorer and go to **%APPDATA%\Patent** folder
8. Open/create masternode.conf
9. Add the following entry:
```
Alias Address Privkey TxHash TxIndex
```
* Alias: **MN1**
* Address: **VPS_IP:PORT**
* Privkey: **Masternode Private Key**
* TxHash: **First value from Step 6**
* TxIndex:  **Second value from Step 6**
10. Save and close the file.
11. Open Windows Explorer and go to **%APPDATA%\Patent** folder
12. Open/create patent.conf
13. Add this addnodes 
```
addnode=209.240.237.60:29328
addnode=23.95.226.107:29328
addnode=54.37.215.39:29328
addnode=45.64.254.98:3300
addnode=36.82.98.131:35403
addnode=149.28.132.154:33250
addnode=45.77.50.235:36236
addnode=149.28.167.36:3300
addnode=45.76.126.88:3300
```
14. Save and close the file.
15. Open **Debug Console** and type:
```
masternode start-alias MN1
```
16. Login to your VPS and check your masternode status by running the following command. If you get **Status 9**, it means your masternode is active.
```
patent-cli masternode status
```
***

## Usage:
```
patent-cli mnsync status
patent-cli masternode status  
patent-cli getinfo
```
Also, if you want to check/start/stop **Patent**, run one of the following commands as **root**:

```
systemctl status Patent #To check if Patent2 service is running
systemctl start Patent #To start Patent2 service
systemctl stop Patent #To stop Patent2 service
systemctl is-enabled Patent #To check if Patent2 service is enabled on boot
```  
***

## Donations

Any donation is highly appreciated

**PATENT**: WkYKuTKs6aVcHSNDvSqUbVvGP63s8ZfkNd  
**BTC**: 3MQLEcHXVvxpmwbB811qiC1c6g21ZKa7Jh  
**ETH**: 0x26B9dDa0616FE0759273D651e77Fe7dd7751E01E  
**LTC**: LNZpK4rCd1JVSB3rGKTAnTkudV9So9zexB  
