import requests
from bs4 import BeautifulSoup
import re
import time


# request_ = ''' <tr><td>企业类型</td><td>有限责任公司</td><td>行业</td><td>软件和信息技术服务业</td><td>人员规模</td><td>-</td></tr>'''

# 定义请求
# 伪装用户
header_ = {
    'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.45 Safari/537.36',
    'Host':'www.tianyancha.com',
    'Cookie':'aliyungf_tc=809c68315c401c8447ce8d0275b80bdd900114439c2ca388ba39c3d1171e5f00; csrfToken=whwLKIf5mMw5kC7KGHbiQGu9; jsid=SEO-BAIDU-ALL-SY-000001; TYCID=4b7b6da0562d11ec886e2f9df392ab36; ssuid=1592696737; sajssdk_2015_cross_new_user=1; bannerFlag=true; _ga=GA1.2.710834705.1638751318; _gid=GA1.2.1607303916.1638751318; _bl_uid=mkkwaw6Ltgvyz78mz3O7rzsetOmR; tyc-user-phone=%255B%252218009180182%2522%255D; acw_tc=2f6fc12e16387577026486409e1ebf565a8269dfeec7ecbb454826ea43bd3f; Hm_lvt_e92c8d65d92d534b0fc290df538b4758=1638751318,1638751326,1638751477,1638757708; tyc-user-info={%22state%22:%220%22%2C%22vipManager%22:%220%22%2C%22mobile%22:%2218009180182%22}; tyc-user-info-save-time=1638757749771; auth_token=eyJhbGciOiJIUzUxMiJ9.eyJzdWIiOiIxODAwOTE4MDE4MiIsImlhdCI6MTYzODc1Nzc1MCwiZXhwIjoxNjcwMjkzNzUwfQ.QQcG1EmXrqv5UDcohFj2Gxt345SuTHUKBsth-Gi8Rom7ftELJYRvR9eXthALDt64PonTedq3UB_2o55TSMgQ8g; creditGuide=1; searchSessionId=1638758096.11096391; relatedHumanSearchGraphId=17066311; relatedHumanSearchGraphId.sig=TwOcKyCjpeHTjV7s49eE4L_3pHpB94avftKmZJek8gk; sensorsdata2015jssdkcross=%7B%22distinct_id%22%3A%2218009180182%22%2C%22first_id%22%3A%2217d8d30a4af21d-08606775a37b81-978183a-2073600-17d8d30a4b03c9%22%2C%22props%22%3A%7B%22%24latest_traffic_source_type%22%3A%22%E7%9B%B4%E6%8E%A5%E6%B5%81%E9%87%8F%22%2C%22%24latest_search_keyword%22%3A%22%E6%9C%AA%E5%8F%96%E5%88%B0%E5%80%BC_%E7%9B%B4%E6%8E%A5%E6%89%93%E5%BC%80%22%2C%22%24latest_referrer%22%3A%22%22%7D%2C%22%24device_id%22%3A%2217d8d30a4af21d-08606775a37b81-978183a-2073600-17d8d30a4b03c9%22%7D; Hm_lpvt_e92c8d65d92d534b0fc290df538b4758=1638758686; _gat_gtag_UA_123487620_1=1',
}

# 配置请求数据
parser_ = {
    'scheme':'https',
    'host':'www.tianyancha.com',
    'filename':'/search',
    # 'key':str(key),
}

# 发起请求
request_ = requests.get("https://www.tianyancha.com/company/9519792", headers=header_, params=parser_)

# if req.status_code == 200: print("Succeed")
# else: print("Failed" + str(req.status_code))

soup_ = BeautifulSoup(request_.content, 'lxml')

# 公司电话
phone_ = soup_.find('input', attrs={'id':'phoneNumber'})
# 公司邮箱
email_ = soup_.find('span', attrs={'class':'email copy-it info-need-copy _email'})
# 公司网址
web_ = soup_.find('a', attrs={'class':'company-link'})
# 公司地址
address_ = soup_.find('div', attrs={'class':'detail-content element-need-copy'})
# 公司简介
introduction_ = soup_.find('div', attrs={'class':'summary mt8'})


# 经营状态
jjzt = soup_.find('td', attrs={'width':'289px'})
# 成立日期
clrq = soup_.find('td', attrs={'title':' '})
# 注册资本
zczb = soup_.find('div', attrs={'title':re.compile('万')})
# 统一社会信用代码/纳税人识别号
shxydm = soup_.find('span', attrs={'class':'copy-it info-need-copy _creditcode'})
# 登记机关
djjg = soup_.find('td', attrs={'colspan':'3'})
# 经营范围
jyfw = soup_.find('td', attrs={'colspan':'5'})


# aa = soup_.select('tr.td')[1].text


# print(soup_.td.text)

for ss in phone_, email_, web_, address_, introduction_, jjzt, clrq, zczb, shxydm, djjg, jyfw:
    print(ss.text)





