#pragma once
#include <string>

#include "gtest/gtest.h"

using std::string;

static string g_appid="wx169165470ddeb026";
static string g_secret="0cfd206c9f92a68e9b9e11252117be89";
static string g_token;

//for send msg
static string g_image_media_id="4dvm05MJic4s1fykv97nbzLdbrKYZzS9arMgaGD8L4U";
static string g_voice_media_id="4dvm05MJic4s1fykv97nbwc6GqVpCONhrlIQom4yas0";
static string g_video_media_id="4dvm05MJic4s1fykv97nb6m-qHa3lBvqcXdoF0m_ZJA";
static string g_thumb_media_id="4dvm05MJic4s1fykv97nb15BJ0tiErvxm3YCaWjvmDw";
static string g_news_media_id="4dvm05MJic4s1fykv97nb9gsDa0tYG2gYoyeyyHRDG8";
static string g_picurl="https://mmbiz.qlogo.cn/mmbiz/icwGfqWxdSOyIETrviav2GnOU547zlDeLgUUzVTSDlOTaia7aicOsq6qWLWSnyepnzMnUGUzC2CakuZSo0NiaQlfOJg/0?wx_fmt=jpeg";
static string g_newsurl="http://mp.weixin.qq.com/s?__biz=MzI2MjA3NDQ0Ng==&mid=502010140&idx=1&sn=0315407aee365f9d69311235ca485c4f#rd";

//test user
static string g_openid = "oTk5vwq6NO1TYrTaxtSkOduRt1j8";
static string g_wxid = "jam506975";

//test user tag
static unsigned long long g_tagid = 103;

//test mass msg id
static unsigned long long g_mass_msg_id = 2552793814U;

//test template shor id
static string g_template_id_short = "TM00001";

class GlobalEnv : public testing::Environment {
	public:
		virtual void SetUp() {
			MpClient::GlobalInit();
		}
		virtual void TearDown() {
			MpClient::ShutDown();
		}
};

int main(int argc, char* argv[]) {
	printf("Running main() from unittest_comm.cpp\n");
	testing::AddGlobalTestEnvironment(new GlobalEnv);
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
