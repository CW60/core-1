bool GossipSelect_LHWOWNPC(Player* player, Creature* creature, uint32 sender, uint32 action)
{
	if (sender != GOSSIP_SENDER_MAIN)
		return true;

	if (action < 100)
	{
		switch (action)
		{
			case 1: // Cities [HORDE]
			{
				player->ADD_GOSSIP_ITEM(5, 270001, GOSSIP_SENDER_MAIN, 16001); //奥格瑞玛
				player->ADD_GOSSIP_ITEM(5, 270002, GOSSIP_SENDER_MAIN, 16002); //幽暗城
				player->ADD_GOSSIP_ITEM(5, 270003, GOSSIP_SENDER_MAIN, 16003); //雷霆崖
				player->ADD_GOSSIP_ITEM(5, 271001, GOSSIP_SENDER_MAIN, 16);

				break;
			}
			case 2: // Cities [ALLIANCE]
			{
				player->ADD_GOSSIP_ITEM(5, 270004, GOSSIP_SENDER_MAIN, 16004); //暴风城
				player->ADD_GOSSIP_ITEM(5, 270005, GOSSIP_SENDER_MAIN, 16005); //铁炉堡
				player->ADD_GOSSIP_ITEM(5, 270006, GOSSIP_SENDER_MAIN, 16006); //达纳苏斯
				player->ADD_GOSSIP_ITEM(5, 271001, GOSSIP_SENDER_MAIN, 16);

				break;
			}
			case 3: // Starting Places [HORDE]
			{
				player->ADD_GOSSIP_ITEM(5, 270007, GOSSIP_SENDER_MAIN, 16007); //暗影坟墓
				player->ADD_GOSSIP_ITEM(5, 270008, GOSSIP_SENDER_MAIN, 16008); //试炼谷
				player->ADD_GOSSIP_ITEM(5, 270009, GOSSIP_SENDER_MAIN, 16009); //纳拉什营地
				player->ADD_GOSSIP_ITEM(5, 271001, GOSSIP_SENDER_MAIN, 16);

				break;
			}
			case 4: // Starting Places [ALLIANCE]
			{
				player->ADD_GOSSIP_ITEM(5, 270010, GOSSIP_SENDER_MAIN, 16010); //北郡谷
				player->ADD_GOSSIP_ITEM(5, 270011, GOSSIP_SENDER_MAIN, 16011); //寒脊山谷
				player->ADD_GOSSIP_ITEM(5, 270012, GOSSIP_SENDER_MAIN, 16012); //幽影
				player->ADD_GOSSIP_ITEM(5, 271001, GOSSIP_SENDER_MAIN, 16);

				break;
			}
			case 5: // Instances [PAGE 1]
			{
				player->ADD_GOSSIP_ITEM(5, 270013, GOSSIP_SENDER_MAIN, 16013); //哀嚎洞穴
				player->ADD_GOSSIP_ITEM(5, 270014, GOSSIP_SENDER_MAIN, 16014); //死亡矿井
				player->ADD_GOSSIP_ITEM(5, 270015, GOSSIP_SENDER_MAIN, 16015); //影牙城堡
				player->ADD_GOSSIP_ITEM(5, 270016, GOSSIP_SENDER_MAIN, 16016); //黑暗深渊
				player->ADD_GOSSIP_ITEM(5, 270017, GOSSIP_SENDER_MAIN, 16017); //剃刀沼泽
				player->ADD_GOSSIP_ITEM(5, 270018, GOSSIP_SENDER_MAIN, 16018); //剃刀高地
				player->ADD_GOSSIP_ITEM(5, 270019, GOSSIP_SENDER_MAIN, 16019); //血色修道院
				player->ADD_GOSSIP_ITEM(7, 271002, GOSSIP_SENDER_MAIN, 6);
				player->ADD_GOSSIP_ITEM(5, 271001, GOSSIP_SENDER_MAIN, 16);

				break;
			}
			case 6: // Instances [PAGE 2]
			{
				player->ADD_GOSSIP_ITEM(5, 270020, GOSSIP_SENDER_MAIN, 16020); //奥达曼
				player->ADD_GOSSIP_ITEM(5, 270021, GOSSIP_SENDER_MAIN, 16021); //祖尔法拉克
				player->ADD_GOSSIP_ITEM(5, 270022, GOSSIP_SENDER_MAIN, 16022); //玛拉顿
				player->ADD_GOSSIP_ITEM(5, 270023, GOSSIP_SENDER_MAIN, 16023); //沉没的神庙
				player->ADD_GOSSIP_ITEM(5, 270024, GOSSIP_SENDER_MAIN, 16024); //黑石深渊
				player->ADD_GOSSIP_ITEM(5, 270025, GOSSIP_SENDER_MAIN, 16025); //厄运之槌
				player->ADD_GOSSIP_ITEM(5, 270026, GOSSIP_SENDER_MAIN, 16026); //黑石塔
				player->ADD_GOSSIP_ITEM(5, 270027, GOSSIP_SENDER_MAIN, 16027); //斯坦索姆
				player->ADD_GOSSIP_ITEM(5, 270028, GOSSIP_SENDER_MAIN, 16028); //通灵学院
				player->ADD_GOSSIP_ITEM(7, 271003, GOSSIP_SENDER_MAIN, 5);
				player->ADD_GOSSIP_ITEM(5, 271001, GOSSIP_SENDER_MAIN, 16);

				break;
			}
			case 7: // Raids
			{
				player->ADD_GOSSIP_ITEM(5, 270029, GOSSIP_SENDER_MAIN, 16029); //祖尔格拉布
				player->ADD_GOSSIP_ITEM(5, 270030, GOSSIP_SENDER_MAIN, 16030); //奥妮克希亚的巢穴
				player->ADD_GOSSIP_ITEM(5, 270031, GOSSIP_SENDER_MAIN, 16031); //熔火之心
				player->ADD_GOSSIP_ITEM(5, 270032, GOSSIP_SENDER_MAIN, 16032); //黑翼巢穴
				player->ADD_GOSSIP_ITEM(5, 270033, GOSSIP_SENDER_MAIN, 16033); //安其拉的废墟
				player->ADD_GOSSIP_ITEM(5, 270034, GOSSIP_SENDER_MAIN, 16034); //安其拉神庙
				player->ADD_GOSSIP_ITEM(5, 270035, GOSSIP_SENDER_MAIN, 16035); //纳克萨玛斯
				player->ADD_GOSSIP_ITEM(5, 271001, GOSSIP_SENDER_MAIN, 16);

				break;
			}
			case 8: // Kalimdor
			{
				player->ADD_GOSSIP_ITEM(5, 270036, GOSSIP_SENDER_MAIN, 16036); //灰谷
				player->ADD_GOSSIP_ITEM(5, 270037, GOSSIP_SENDER_MAIN, 16037); //黑海岸
				player->ADD_GOSSIP_ITEM(5, 270038, GOSSIP_SENDER_MAIN, 16038); //凄凉之地
				player->ADD_GOSSIP_ITEM(5, 270039, GOSSIP_SENDER_MAIN, 16039); //杜隆塔尔
				player->ADD_GOSSIP_ITEM(5, 270040, GOSSIP_SENDER_MAIN, 16040); //尘泥沼泽
				player->ADD_GOSSIP_ITEM(5, 270041, GOSSIP_SENDER_MAIN, 16041); //菲拉斯
				player->ADD_GOSSIP_ITEM(5, 270042, GOSSIP_SENDER_MAIN, 16042); //希利苏斯
				player->ADD_GOSSIP_ITEM(5, 270043, GOSSIP_SENDER_MAIN, 16043); //石爪山脉
				player->ADD_GOSSIP_ITEM(5, 270044, GOSSIP_SENDER_MAIN, 16044); //塔纳利斯
				player->ADD_GOSSIP_ITEM(5, 270045, GOSSIP_SENDER_MAIN, 16045); //贫瘠之地
				player->ADD_GOSSIP_ITEM(5, 270046, GOSSIP_SENDER_MAIN, 16046); //千针石林
				player->ADD_GOSSIP_ITEM(5, 270047, GOSSIP_SENDER_MAIN, 16047); //冬泉谷
				player->ADD_GOSSIP_ITEM(5, 271001, GOSSIP_SENDER_MAIN, 16);

				break;
			}
			case 9: // Eastern Kingdoms
			{
				player->ADD_GOSSIP_ITEM(5, 270048, GOSSIP_SENDER_MAIN, 16048); //阿拉希高地
				player->ADD_GOSSIP_ITEM(5, 270049, GOSSIP_SENDER_MAIN, 16049); //废墟
				player->ADD_GOSSIP_ITEM(5, 270050, GOSSIP_SENDER_MAIN, 16050); //丹莫罗
				player->ADD_GOSSIP_ITEM(5, 270051, GOSSIP_SENDER_MAIN, 16051); //暮色森林
				player->ADD_GOSSIP_ITEM(5, 270052, GOSSIP_SENDER_MAIN, 16052); //东瘟疫之地
				player->ADD_GOSSIP_ITEM(5, 270053, GOSSIP_SENDER_MAIN, 16053); //艾尔文森林
				player->ADD_GOSSIP_ITEM(5, 270054, GOSSIP_SENDER_MAIN, 16054); //希尔斯布莱德丘陵
				player->ADD_GOSSIP_ITEM(5, 270055, GOSSIP_SENDER_MAIN, 16055); //赤脊山
				player->ADD_GOSSIP_ITEM(5, 270056, GOSSIP_SENDER_MAIN, 16056); //银松森林
				player->ADD_GOSSIP_ITEM(5, 270057, GOSSIP_SENDER_MAIN, 16057); //荆棘谷
				player->ADD_GOSSIP_ITEM(5, 270058, GOSSIP_SENDER_MAIN, 16058); //悲伤的沼泽
				player->ADD_GOSSIP_ITEM(5, 270059, GOSSIP_SENDER_MAIN, 16059); //辛特兰
				player->ADD_GOSSIP_ITEM(5, 270060, GOSSIP_SENDER_MAIN, 16060); //提瑞斯法林地
				player->ADD_GOSSIP_ITEM(5, 270061, GOSSIP_SENDER_MAIN, 16061); //西部荒野
				player->ADD_GOSSIP_ITEM(5, 270062, GOSSIP_SENDER_MAIN, 16062); //沼泽地
				player->ADD_GOSSIP_ITEM(5, 271001, GOSSIP_SENDER_MAIN, 16);

				break;
			}

			case 14: //坐骑
			{
				//player->ADD_GOSSIP_ITEM(5, 251000, GOSSIP_SENDER_MAIN, 141);
				player->ADD_GOSSIP_ITEM(5, 252000, GOSSIP_SENDER_MAIN, 142);
				player->ADD_GOSSIP_ITEM(5, 253000, GOSSIP_SENDER_MAIN, 143);
				player->ADD_GOSSIP_ITEM(5, 254000, GOSSIP_SENDER_MAIN, 144);
				//player->ADD_GOSSIP_ITEM(5, 255000, GOSSIP_SENDER_MAIN, 145);
				//player->ADD_GOSSIP_ITEM(5, 256000, GOSSIP_SENDER_MAIN, 146);
				//player->ADD_GOSSIP_ITEM(5, 257000, GOSSIP_SENDER_MAIN, 147);
				//player->ADD_GOSSIP_ITEM(5, 258000, GOSSIP_SENDER_MAIN, 148);
				//player->ADD_GOSSIP_ITEM(5, 259000, GOSSIP_SENDER_MAIN, 149);
				break;
			}
			case 15: //专业
			{
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Alchemy, GOSSIP_SENDER_MAIN, 2001);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Blacksmithing, GOSSIP_SENDER_MAIN, 2002);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Leatherworking, GOSSIP_SENDER_MAIN, 2003);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Tailoring, GOSSIP_SENDER_MAIN, 2004);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Engineering, GOSSIP_SENDER_MAIN, 2005);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Enchanting, GOSSIP_SENDER_MAIN, 2006);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Herbalism, GOSSIP_SENDER_MAIN, 2009);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Skinning, GOSSIP_SENDER_MAIN, 2010);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Mining, GOSSIP_SENDER_MAIN, 2011);

				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Aid, GOSSIP_SENDER_MAIN, 2012);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Fishing, GOSSIP_SENDER_MAIN, 2013);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, GOSSIP_TEXT_Cooking, GOSSIP_SENDER_MAIN, 2014);
				break;
			}
			case 16: //传送
			{
				if (player->GetTeam() == HORDE)
				{
					player->ADD_GOSSIP_ITEM(5, 272001, GOSSIP_SENDER_MAIN, 1); //主要城市
					player->ADD_GOSSIP_ITEM(5, 272002, GOSSIP_SENDER_MAIN, 3); //起始区域
					player->ADD_GOSSIP_ITEM(5, 272003, GOSSIP_SENDER_MAIN, 5); //地下城
					player->ADD_GOSSIP_ITEM(5, 272004, GOSSIP_SENDER_MAIN, 7); //团队副本
					player->ADD_GOSSIP_ITEM(5, 272005, GOSSIP_SENDER_MAIN, 4015); //古拉巴什竞技场
					player->ADD_GOSSIP_ITEM(5, 272006, GOSSIP_SENDER_MAIN, 8); //区域 - 卡利姆多
					player->ADD_GOSSIP_ITEM(5, 272007, GOSSIP_SENDER_MAIN, 9); //区域 - 东部王国
					break;

				}
				// ALLIANCE
				else
				{
					player->ADD_GOSSIP_ITEM(5, 272001, GOSSIP_SENDER_MAIN, 2); //主要城市
					player->ADD_GOSSIP_ITEM(5, 272002, GOSSIP_SENDER_MAIN, 4); //起始区域
					player->ADD_GOSSIP_ITEM(5, 272003, GOSSIP_SENDER_MAIN, 5); //地下城
					player->ADD_GOSSIP_ITEM(5, 272004, GOSSIP_SENDER_MAIN, 7); //团队副本
					player->ADD_GOSSIP_ITEM(5, 272005, GOSSIP_SENDER_MAIN, 4015); //古拉巴什竞技场
					player->ADD_GOSSIP_ITEM(5, 272006, GOSSIP_SENDER_MAIN, 8); //区域 - 卡利姆多
					player->ADD_GOSSIP_ITEM(5, 272007, GOSSIP_SENDER_MAIN, 9); //区域 - 东部王国
					break;
				}
			}
		}
		player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
	}
	else
	{
		switch (action)
		{
			case 1001:
			{
				player->TeleportTo(1, 1437.0f, -4421.0f, 25.24f, 1.65f);
				break;
			}
			case 1002:
			{
				player->TeleportTo(0, -4917.0f, -955.0f, 502.0f, 0.0f);
				break;
			}
			case 2001:
			{
				if (!player->HasSkill(SKILL_ALCHEMY))
					CompleteLearnProfession(player, creature, SKILL_ALCHEMY);
				break;
			}
			case 2002:
			{
				if (!player->HasSkill(SKILL_BLACKSMITHING))
					CompleteLearnProfession(player, creature, SKILL_BLACKSMITHING);
				break;
			}
			case 2003:
			{
				if (!player->HasSkill(SKILL_LEATHERWORKING))
					CompleteLearnProfession(player, creature, SKILL_LEATHERWORKING);
				break;
			}
			case 2004:
			{
				if (!player->HasSkill(SKILL_TAILORING))
					CompleteLearnProfession(player, creature, SKILL_TAILORING);
				break;
			}
			case 2005:
			{
				if (!player->HasSkill(SKILL_ENGINEERING))
					CompleteLearnProfession(player, creature, SKILL_ENGINEERING);
				break;
			}
			case 2006:
			{
				if (!player->HasSkill(SKILL_ENCHANTING))
					CompleteLearnProfession(player, creature, SKILL_ENCHANTING);
				break;
			}
			case 2007:
			case 2008:
				break;
			case 2009:
			{
				if (!player->HasSkill(SKILL_HERBALISM))
					CompleteLearnProfession(player, creature, SKILL_HERBALISM);
				break;
			}
			case 2010:
			{
				if (!player->HasSkill(SKILL_SKINNING))
					CompleteLearnProfession(player, creature, SKILL_SKINNING);
				break;
			}
			case 2011:
			{
				if (!player->HasSkill(SKILL_MINING))
					CompleteLearnProfession(player, creature, SKILL_MINING);
				break;
			}
			case 2012:
			{
				if (!player->HasSkill(SKILL_FIRST_AID))
					CompleteLearnProfession(player, creature, SKILL_FIRST_AID);
				break;
			}
			case 2013:
			{
				if (!player->HasSkill(SKILL_FISHING))
					CompleteLearnProfession(player, creature, SKILL_FISHING);
				break;
			}
			case 2014:
			{
				if (!player->HasSkill(SKILL_COOKING))
					CompleteLearnProfession(player, creature, SKILL_COOKING);
				break;
			}
			case 101:
			{
				uint32 accid = player->GetSession()->GetAccountId();
				QueryResult *result = LoginDatabase.PQuery("SELECT zzds FROM account WHERE id=%u", accid);

				if (!result)
				{
					return true;
				}

				Field *fields = result->Fetch();

				player->GetSession()->SendNotification(MANGOS_STRING_SHOW_DONATION_POINTS, fields[0].GetUInt32());
			
				delete result;
				break;
			}
			case 111:
			{
				if (SpendDonationPoints(player, 10000)) 
				{
					player->GiveLevel(60);
					player->InitTalentForLevel();
					player->SetUInt32Value(PLAYER_XP, 0);
					player->ModifyMoney(2000000);
					learnAllSpell(player);
					addT0Set(player);
					//addNewBie(player);
				}
				break;
			}
			case 121: {
				if (SpendDonationPoints(player, 5000)) {
					safeAddItem(player, 51809, 1);
				}
				break;
			}
			case 131: {
				if (SpendDonationPoints(player, 3000)) {
					player->UpdateSkillsToMaxSkillsForLevel();
				}
				break;
			}
			case 141: {

				break;
			}
			case 142: {
				if (SpendDonationPoints(player, 15000)) {
					safeAddItem(player, 13335, 1); //死亡军马的缰绳
				}
				break;
			}
			case 143: {
				if (SpendDonationPoints(player, 30000)) {
					player->LearnSpell(33392, false);
					safeAddItem(player, 19902, 1); //迅捷祖利安猛虎
				}
				break;
			}
			case 144: {
				if (SpendDonationPoints(player, 25000)) {
					safeAddItem(player, 19872, 1); //拉扎什迅猛龙
				}
				break;
			}
			case 145: {
				if (SpendDonationPoints(player, 10000)) {
					safeAddItem(player, 18244, 1); //黑色战羊
				}
				break;
			}
			case 146: {
				if (SpendDonationPoints(player, 10000)) {
					safeAddItem(player, 18242, 1); //黑色军用座虎缰绳
				}
				break;
			}
			case 147: {

				break;
			}
			case 148: {
	
				break;
			}
			case 149: {

				break;
			}


			case 16001: // Orgrimmar
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 1437.0f, -4421.0f, 25.24f, 1.65f);
				break;
			case 16002: // Undercity
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 1822.0999f, 238.638855f, 60.694809f, 0.0f);
				break;
			case 16003: // Thunderbluff
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -1272.703735f, 116.886490f, 131.016861f, 0.0f);
				break;

				// ### ALLIANCE ###

			case 16004: // Stormwind
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -8828.231445f, 627.927490f, 94.055664f, 0.0f);
				break;
			case 16005: // Ironforge
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -4917.0f, -955.0f, 502.0f, 0.0f);
				break;
			case 16006: // Darnassus
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 9962.712891f, 2280.142822f, 1341.394409f, 0.0f);
				break;

				// ----### STARTING PLACES ####----

				// ### HORDE ###
			case 16007: // Shadow Grave
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 1663.517f, 1678.187744f, 120.5303f, 0.0f);
				break;
			case 16008: // Valley of Trials
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -602.1253f, -4262.4208f, 38.956341f, 0.0f);
				break;
			case 16009: // Camp Narache
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -2914.16992f, -266.061798f, 53.658211f, 0.0f);
				break;

				// ### ALLIANCE ###

			case 16010: // Nortshire Valley
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -8943.133789f, -132.934921f, 83.704269f, 0.0f);
				break;
			case 16011: // Coldridge Valley
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -6231.106445f, 332.270477f, 383.153931f, 0.0f);
				break;
			case 16012: // Shadowglen
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 10329.918945f, 833.500305f, 1326.260620f, 0.0f);
				break;

				// ----### INSTANCES ###----

			case 1650: // Dire Maul
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -3762.340820f, 1216.537598f, 127.434608f, 0.0f);
				break;
			case 1651: // Blackrock Spire
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -7528.554688f, -1222.907227f, 285.732941f, 0.0f);
				break;
			case 1652: // Zul'Gurub
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -11916.179688f, -1190.977051f, 85.137901f, 0.0f);
				break;
			case 1653: // Onyxia's Lair
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -4682.391602f, -3709.857422f, 46.792862f, 0.0f);
				break;
			case 1654: // Searing Gorge (Moltencore, Blackwinglair)
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -7342.270020f, -1096.863892f, 277.06930f, 0.0f);
				break;
			case 1655: // Naxxramas
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 3121.061768f, -3689.973389f, 133.458786f, 0.0f);
				break;
			case 1656: // Stratholme Backdoor Entrance
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 3160.416992f, -4038.750244f, 104.177376f, 0.0f);
				break;
			case 1657: // Stratholme Main Entrance
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 3357.214355f, -3379.713135f, 144.780853f, 0.0f);
				break;
			case 1658: // Scholomance
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 1252.319824f, -2587.151123f, 92.886772f, 0.0f);
				break;

				// ---### ZONES ###---

			case 1670: // Silithus
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -7430.070313f, 1002.554565f, 1.249787f, 0.0f);
				break;
			case 1671: // Durotar
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 1006.426819f, -4439.258789f, 11.352882f, 0.0f);
				break;
			case 1672: // Ashenvale
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 1922.842651f, -2169.429688f, 94.327400f, 0.0f);
				break;
			case 1673: // Tanaris
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -7180.401367f, -3773.328369f, 8.728320f, 0.0f);
				break;
			case 1674: // Pretbc Mall
				//player->CLOSE_GOSSIP_MENU();
				//player->TeleportTo(1, 16201.107422f, 16205.1875f, 0.140072f, 1.630427f);
				break;
			case 4015:// Gurubashi
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -13261.3f, 168.294f, 35.0792f, 1.00688f);
				break;
			case 4017:// Razor Hill
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 315.721f, -4743.4f, 10.4867f, 0.0f);
				break;
			case 4018:// Goldshire
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -9464.0f, 62.0f, 56.0f, 0.0f);
				break;
			case 16013://teleport player to the Wailing Caverns
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -722.53f, -2226.30f, 16.94f, 2.71f);
				break;
			case 16014://teleport player to the Deadmines
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -11212.04f, 1658.58f, 25.67f, 1.45f);
				break;
			case 16015://teleport player to Shadowfang Keep
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -254.47f, 1524.68f, 76.89f, 1.56f);
				break;
			case 16016://teleport player to Blackfathom Deeps
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 4254.58f, 664.74f, -29.04f, 1.97f);
				break;
			case 16017://teleport player to Razorfen Kraul
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -4484.04f, -1739.40f, 86.47f, 1.23f);
				break;
			case 16018://teleport player to Razorfen Downs
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -4645.08f, -2470.85f, 85.53f, 4.39f);
				break;
			case 16019://teleport player to the Scarlet Monastery
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 2843.89f, -693.74f, 139.32f, 5.11f);
				break;
			case 16020://teleport player to Uldaman
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -6119.70f, -2957.30f, 204.11f, 0.03f);
				break;
			case 16021://teleport player to Zul'Farrak
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -6839.39f, -2911.03f, 8.87f, 0.41f);
				break;
			case 16022://teleport player to Maraudon
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -1433.33f, 2955.34f, 96.21f, 4.82f);
				break;
			case 16023://teleport player to the Sunken Temple
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -10346.92f, -3851.90f, -43.41f, 6.09f);
				break;
			case 16024://teleport player to Blackrock Depths
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -7301.03f, -913.19f, 165.37f, 0.08f);
				break;
			case 16025://teleport player to Dire Maul
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -3982.47f, 1127.79f, 161.02f, 0.05f);
				break;
			case 16026://teleport player to Blackrock Spire
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -7535.43f, -1212.04f, 285.45f, 5.29f);
				break;
			case 16027://teleport player to Stratholme
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 3263.54f, -3379.46f, 143.59f, 0.00f);
				break;
			case 16028://teleport player to Scholomance
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 1219.01f, -2604.66f, 85.61f, 0.50f);
				break;
			case 16029:// Teleport to Zul'Gurub
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -11916.7f, -1212.82f, 92.2868f, 4.6095f);
				break;
			case 16030:// Teleport to Onyxia's Lair
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -4707.44f, -3726.82f, 54.6723f, 3.8f);
				break;
			case 16031:// Teleport to Molten Core
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(230, 1121.451172f, -454.316772f, -101.329536f, 3.5f);
				break;
			case 16032:// Teleport to Blackwing Lair
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(469, -7665.55f, -1102.49f, 400.679f, 0.0f);
				break;
			case 16033:// Ruins of Ahn'Qiraj
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -8409.032227f, 1498.830933f, 27.361542f, 2.497567f);
				break;
			case 16034:// Temple of Ahn'Qiraj
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -8245.837891f, 1983.736206f, 129.071686f, 0.936195f);
				break;
			case 16035:// Naxxramas
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(533, 3005.87f, -3435.0f, 293.89f, 0.0f);
				break;
			case 16036: // Kalimdor -> Ashenvale
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 3469.43f, 847.62f, 6.36476f, 0.0f);
				break;
			case 16037: // Kalimdor -> Darkshore
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 6207.5f, -152.833f, 80.8185f, 0.0f);
				break;
			case 16038: // Kalimdor -> Desolace
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -93.1614f, 1691.15f, 90.0649f, 0.0f);
				break;
			case 16039: // Kalimdor -> Durotar
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 341.42f, -4684.7f, 31.9493f, 0.0f);
				break;
			case 16040: // Kalimdor -> Duswallow Marsh
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -3463.26f, -4123.13f, 18.1043f, 0.0f);
				break;
			case 16041: // Kalimdor -> Ferelas
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -4458.93f, 243.415f, 65.6136f, 0.0f);
				break;
			case 16042: // Kalimdor -> Silithus
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -6824.15f, 821.273f, 50.6675f, 0.0f);
				break;
			case 16043: // Kalimdor -> Stonetalon Mountains
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 1145.00f, 85.664f, -6.64f, 0.0f);
				break;
			case 16044: // Kalimdor -> Tanaris
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -7373.69f, -2950.2f, 11.7598f, 0.0f);
				break;
			case 16045: // Kalimdor -> The Barrens
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -456.263f, -2652.7f, 96.615f, 0.0f);
				break;
			case 16046: // Kalimdor -> Thousand Needles
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, -4941.66f, -1595.42f, -33.07f, 0.0f);
				break;
			case 16047: // Kalimdor -> Winterspring
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(1, 6107.62f, -4181.6f, 853.322f, 0.0f);
				break;
			case 16048: // Eastern Kingdoms -> Arathi Highlands
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -1544.93f, -2495.01f, 54.11f, 0.0f);
				break;
			case 16049: // Eastern Kingdoms -> Badlands
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -6084.95f, -3328.44f, 253.76f, 0.0f);
				break;
			case 16050: // Eastern Kingdoms -> Dun Morogh
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -5660.33f, 755.299f, 390.605f, 0.0f);
				break;
			case 16051: // Eastern Kingdoms -> Duskwood
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -10879.85f, -327.06f, 37.78f, 0.0f);
				break;
			case 16052: // Eastern Kingdoms -> Eastern Plaguelands
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 2280.12f, -5313.16f, 87.74f, 0.0f);
				break;
			case 16053: // Eastern Kingdoms -> Elwynn Forest
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -9545.78f, -51.81f, 56.72f, 0.0f);
				break;
			case 16054: // Eastern Kingdoms -> Hillsbrad Foothills
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -436.03f, -583.27f, 53.58f, 0.0f);
				break;
			case 16055: // Eastern Kingdoms -> Reridge Mountains
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -9633.80f, -1875.09f, 68.39f, 0.0f);
				break;
			case 16056: // Eastern Kingdoms -> Silverpine Forest
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 641.48f, 1297.84f, 85.45f, 0.0f);
				break;
			case 16057: // Eastern Kingdoms -> Stranglethorn Vale
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -11393.77f, -288.94f, 58.99f, 0.0f);
				break;
			case 16058: // Eastern Kingdoms -> Swamp of Sorrows
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -10522.55f, -3028.30f, 21.79f, 0.0f);
				break;
			case 16059: // Eastern Kingdoms -> The Hinterlands
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 155.14f, -2014.95f, 122.55f, 0.0f);
				break;
			case 16060: // Eastern Kingdoms -> Tirishfal Glades
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, 2255.5f, 288.511f, 35.1138f, 0.0f);
				break;
			case 16061: // Eastern Kingdoms -> Westfall
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -10919.09f, 998.47f, 35.47f, 0.0f);
				break;
			case 16062: // Eastern Kingdoms -> Wetlands
				player->CLOSE_GOSSIP_MENU();
				player->TeleportTo(0, -4086.36f, -2610.95f, 47.0143f, 0.0f);
				break;
		}

		player->CLOSE_GOSSIP_MENU();
	}
	return true;
}
