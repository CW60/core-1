/* Copyright (C) 2009 - 2010 ScriptDevZero <http://github.com/scriptdevzero/scriptdevzero>
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "scriptPCH.h"
#include "custom.h"
#include "ScriptedAI.h"
#include <ctime>



int CLASS_WARRIOR_SPELL[] = { 6673,772,6343,34428,1715,284,71,6546,2687,3127,7384,5242,72,1160,6572,285,694,2565,8198,676,6547,20230,845,\
	6192,5246,1608,6190,5308,6574,6178,1161,8204,871,6548,7369,1464,20252,11564,11549,20658 ,18499,11554,7379, 2458,1680,8205,6552,8820,\
	11565,11572,11608,20660,11550,11555,11600,11578,11604,11566,11580,20661,11573,11609,1719,11551,11556,11605,11601,\
	11567,20662,11581,11574,20569 };

int CLASS_PALADIN_SPELL[] = { 465,19740,20271,639,498,1152,853,633,10290,1022,19834,53408,7328,19742,647,31789,62124,25780,7294,1044,\
	879,19750,643,13819,19746,1026,20164,19835,19850,10322,10326,5588,5599,19939,1038,10298,5614,19876,53407,20116,1042,\
	2800,20165,10291,19752,19888,19836,19852,19940,642,5615,10324,19891,10299,3472,20166,10278,20922,1032,5589,19895,34767,4987,\
	19941,19837,19853,10312,19897,24275,10328,6940,10300,20772,19899,20923,19942,2812,10310,10292,10313,19896,19838,25782,24274,19854,\
	10329,19898,10301,19943,25290,20924,10314,10318,20773,10293,19900,25899,24239 };

int CLASS_HUNTER_SPELL[] = { 1494,13163,1978,3044,1130,5116,14260,13165,13549,19883,883,982,1515,2641,6991,5149,136,\
	14281,20736,2974,6197,1002,1513,5118,13795,1495,14261,14318,2643,13550,19884,3111,674,14282,781,1499,14323,3043,\
	1462,14262,19885,19880,14302,13551,14319,3661,14283,13809,13161,14288,5384,14269,1543,14263,19878,13552,13813,\
	3662,14284,3034,14303,14320,13159,14324,1510,14310,14264,19882,14289,13553,13542,14285,14316,14270,20043,14327,14304,14321,\
	14265,13554,56641,14294,19879,13543,14286,14290,14317,20190,14305,14266,14322,14325,13555,14295,14271,13544,14287,\
	14311 };

int CLASS_DRUID_SPELL[] = { 8921,774,467,5177,768,339,5186,5487,6807,8924,99,5232,1058, 9634,5229,8936,50769,782,5178,\
	5211,5187,8925,779,1430, 783,1062,770,2637,8938,1066,2912,1082,1735,5215,1079,5188,6756,20484,8926,2908,5179,\
	5221,2090,1075,1822,780,5217,8939,2782,50768,8949,1850,2893,5189,5195,8927,5209,3029,8998,9492,2091,5180,6798,6800,\
	5234,20739,8940,740,9490,22568,6785,5225,6778,8928,8950,8914,1823,769,3627,22842,9005,9493,6793,8941,50767,5196,18657,\
	8955,6780,5201,8992,8903,16914,29166,8929,9000,9634,20719,22827,62600,8907,20742,8910,8918,8951,9747,6787,9750,22812,9756,1824,\
	9752,9754,9758,9833,8905,8983,9821,9823,9829,9839,9852,9849,22828,9845,9856,50766,17401,9875,9866,9888,9884,20747,\
	9862,9834,9892,9898,9894,9840,9901,9910,9912,9904,9830,9908,9857,22829,9827,9889,9853,18658,9835,9876,9850,9867,9841,17402,\
	31709,33943,9896,9846,9885,20748,9858,50765,9863 };

int CLASS_WARLOCK_SPELL[] = { 688,348,172,702,1454,695,980,5782,697,1120,6201,696,707,1108,755,705,6222,689,1455,5697,1014,693,\
	5676,706,3698,698,1094,5740,1088,5784,712,6205,699,6202,126,6223,5138,8288,5500,1714,1456,132,17919,6217,710,6366,3699,1106,691,\
	709,20752,1086,1098,1949,2941,1490,7646,6213,6229,7648,5699,6219,17920,11687,17951,2362,3700,7641,11711,7651,8289,5484,20755,11733,\
	11665,11707,6789,11739,11683,17921,11671,11725,11693,11659,11721,11699,11688,17952,11729,11677,11712,18647,17727,6353,11719,\
	17925,20756,11734,11667,17922,11708,11675,11694,11740,11660,11672,11700,17928,11684,6215,11689,17953,17924,11713,17926,11730,11726,\
	11678,17923,603,11722,20757,17728,11735,11695,11668,11661 };

int CLASS_MAGE_SPELL[] = { 1459,5504,116,587,2136,143,5143,118,205,5505,7300,122,597,604,130,145,1449,1460,2137,837,5144,2120,1008,\
	475,3140,1953,5506,12051,1463,12824,543,10,7301,7322,8437,990,2138,2948,6143,5145,2139,8450,8400,2121,120,865,8406,1461,759,8494,\
	8444,6141,8455,8438,6127,8412,8457,8401,7302,45438,8416,6129,8422,8461,8407,6117,8445,8492,8451,8495,8402,8427,8439,3552,8413,8408,\
	8417,10138,12825,8458,8423,8446,6131,7320,10169,10156,10144,10148,10159,8462,10191,10185,10179,10201,22782,10197,10205,10211,10053,\
	10173,10149,10215,10139,10223,10160,10180,10219,10145,10192,10206,10186,10177,10170,10202,10199,10150,10230,10157,10212,10216,\
	10181,10054,22783,10207,10161,10174,10193,12826,10225,10151,10187,10220 };

int CLASS_PRIEST_SPELL[] = { 1243,2052,589,17,591,139,586,2053,2006,8092,594,588,1244,592,528,6074,598,8122,2054,8102,527,600,970,\
	7128,9484,2061,14914,6075,2944,453,2055,2010,984,8103,2096,8129,1245,3747,15262,9472,6076,992,6063,19276,8104,\
	8124,602,6065,15263,596,1004,605,976,552,9473,6077,1706,6064,10880,8105,2767,988,2791,6066,15264,19277,9474,6078,6060,\
	14818,1006,9485,2060,996,8106,10898,15265,10888,10957,10892,10915,10927,19278,10909,10963,10881,10933,10945,10937,10899,\
	15266,14819,10951,10916,10960,10928,10893,10964,19279,10946,10900,15267,10934,10917,10929,10890,10958,10965,20770,10947,\
	10894,27841,10952,10938,10901,15261,10961,19280 };

int CLASS_SHAMAN_SPELL[] = { 8017,5394,8042,2484,332,8044,529,5730,324,8018,8050,8024,8075,1535,370,2008,547,8045,548,57994,2645,325,\
	8019,526,8052,6390,8027,913,8143,8056,915,8033,8004,52127,8498,131,8046,8181,905,10399,8160,20609,939,943,8190,6196,8030,5675,8053,\
	6391,8184,8227,8038,546,8008,52129,66842,556,8177,10595,8232,51730,6375,20608,36936,421,8499,6041,8012,945,8512,959,8058,6495,52131,\
	10412,10585,16339,20610,8010,10495,10391,6392,8249,10478,10456,8161,8170,66843,930,10447,8134,8235,1064,51988,6377,8005,52134,11314,\
	10537,10392,10600,10466,10472,10586,16341,10622,10496,2860,10413,10427,10526,16355,10431,20776,10395,52136,66844,15207,10486,51991,\
	10462,11315,10448,10442,10467,10479,10623,52138,10605,15208,10587,16342,10432,10396,10497,10473,10428,10538,16387,16356,10414,\
	10601,16362,20777,51992,10463,10468,25546,25422 };

int CLASS_ROGUE_SPELL[] = { 53,921,1784,1776,1757,6760,5277,5171,2983,6770,2589,1766,8647,703,1758,6761,1966,1804,8676,\
	51722,1943,2590,8631,1759,1725,1856,6762,2836,8724,1833,8639,2591,6768,2070,8632,408,1760,1842,8623,8725,8696,2094,\
	8640,8721,8633,8621,8624,8637,1860,11267,6774,1857,11273,11279,11289,11293,11299,11297,11268,8643,26669,11274,11280,\
	11303,11290,11294,11300,11269,11305,11275,11281 };

// TELEPORT NPC


int ITEMS_CLOTH[] = { 8283, 8284, 8285, 8286, 8287, 8288, 8289, 8292, 8291 };
//布甲，大师套装（长靴、护腕、披风、头冠、手套、护脚、衬肩、长袍、腰带）
int ITEMS_LEATHER[] = { 8293, 8294, 8295, 8296, 8298, 8299, 8300, 8301 };
//皮甲，冒险者套装（护腕、战靴、腰带、手套、头盔、腿甲、护肩、外套）
int ITEMS_MAIL[] = { 8302, 8303, 8305, 8306, 8307, 8308, 8309, 8310 };
//锁甲，水银套装（束带、靴子、护腕、胸甲、头盔、护手、腿甲、肩铠）
int ITEMS_PLATE[] = { 10275, 10276, 10277, 10278, 10279, 10280, 10281, 10282 };
//板甲，巨神套装（胸甲、靴子、护手、腰带、头盔、腿甲、肩膀、手腕）

int ITEMS_STAFF[] = { 15278, 15283 };
//法杖 魔杖 （法师、术士、牧师, 德鲁伊）
int ITEMS_HAMMER[] = { 15229, 8313 };
//锤子 盾牌 （萨满、骑士）
int ITEMS_DAGGER[] = { 15246, 15247, 18482 };
// 双匕首 弓 (盗贼，猎人)
int ITEMS_SHIELD[] = { 18463, 18352, 18482 };
// 单手剑 盾牌 弓 （战士）
int ITEMS_TOTEM[] = { 22345 };
// 图腾 （萨满）

// broadcast texts
#define MANGOS_STRING_DONATION_POINTS_NOT_ENOUGH           210001
#define MANGOS_STRING_SHOW_DONATION_POINTS			        210002
#define GOSSIP_TEXT_DONATION_POINT_QUERY    210000
#define GOSSIP_TEXT_DIRECT_60           220000
#define GOSSIP_TEXT_DIRECT_60_1           220001
#define GOSSIP_TEXT_BIG_BAG           230000
#define GOSSIP_TEXT_FULL_WEAPON_SKILLS           240000
#define GOSSIP_TEXT_MOUNT          250000

#define GOSSIP_TEXT_Profession          260000
#define GOSSIP_TEXT_Alchemy           260001
#define GOSSIP_TEXT_Blacksmithing           260002
#define GOSSIP_TEXT_Leatherworking           260003
#define GOSSIP_TEXT_Tailoring           260004
#define GOSSIP_TEXT_Engineering           260005
#define GOSSIP_TEXT_Enchanting           260006
#define GOSSIP_TEXT_Herbalism           260007
#define GOSSIP_TEXT_Skinning           260008
#define GOSSIP_TEXT_Mining           260009
#define GOSSIP_TEXT_Aid           260010
#define GOSSIP_TEXT_Fishing           260011
#define GOSSIP_TEXT_Cooking           260012

#define GOSSIP_TEXT_Teleport           270000
#define GOSSIP_TEXT_Teleport_Buy           271004

#define GOSSIP_TEXT_Orgrimmar			200001
#define GOSSIP_TEXT_Ironforge			200002

bool GossipHello_TeleportNPC(Player *player, Creature *_Creature)   
{
    // HORDE
    if (player->GetTeam() == HORDE)
    {
        // player->ADD_GOSSIP_ITEM(5, "PreTBC Mall"          , GOSSIP_SENDER_MAIN, 74);
        player->ADD_GOSSIP_ITEM(5, "Major Cities"               , GOSSIP_SENDER_MAIN, 1);
        player->ADD_GOSSIP_ITEM(5, "Starting Areas"       , GOSSIP_SENDER_MAIN, 3);
        player->ADD_GOSSIP_ITEM(5, "Instances"            , GOSSIP_SENDER_MAIN, 5);
        player->ADD_GOSSIP_ITEM(5, "Raids"                 , GOSSIP_SENDER_MAIN, 101);
        player->ADD_GOSSIP_ITEM(5, "Gurubashi Arena" , GOSSIP_SENDER_MAIN, 4015);
        player->ADD_GOSSIP_ITEM(5, "Zones - Kalimdor"     , GOSSIP_SENDER_MAIN, 6010);
        player->ADD_GOSSIP_ITEM(5, "Zones - Eastern Kingdoms"     , GOSSIP_SENDER_MAIN, 6020);

        player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
    }
    // ALLIANCE
    else
    {
        //player->ADD_GOSSIP_ITEM(5, "PreTBC Mall"          , GOSSIP_SENDER_MAIN, 74);
        player->ADD_GOSSIP_ITEM(5, "Major Cities"               , GOSSIP_SENDER_MAIN, 2);
        player->ADD_GOSSIP_ITEM(5, "Starting Areas"       , GOSSIP_SENDER_MAIN, 4);
        player->ADD_GOSSIP_ITEM(5, "Instances"            , GOSSIP_SENDER_MAIN, 5);
        player->ADD_GOSSIP_ITEM(5, "Raids"                 , GOSSIP_SENDER_MAIN, 101);
        player->ADD_GOSSIP_ITEM(5, "Gurubashi Arena" , GOSSIP_SENDER_MAIN, 4015);
        player->ADD_GOSSIP_ITEM(5, "Zones - Kalimdor"     , GOSSIP_SENDER_MAIN, 6010);
        player->ADD_GOSSIP_ITEM(5, "Zones - Eastern Kingdoms"     , GOSSIP_SENDER_MAIN, 6020);

        player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
    }
    return true;
}

void SendDefaultMenu_TeleportNPC(Player *player, Creature *_Creature, uint32 action)
{
    switch (action)
    {
        case 1: // Cities [HORDE]
            player->ADD_GOSSIP_ITEM(5, "Orgrimmar"             , GOSSIP_SENDER_MAIN, 20);
            player->ADD_GOSSIP_ITEM(5, "Undercity"             , GOSSIP_SENDER_MAIN, 21);
            player->ADD_GOSSIP_ITEM(5, "Thunderbluff"          , GOSSIP_SENDER_MAIN, 22);
            //player->ADD_GOSSIP_ITEM(5, "Goldshire (Stormwind)" , GOSSIP_SENDER_MAIN, 4018);
            player->ADD_GOSSIP_ITEM(5, "<-[Main Menu]"                  , GOSSIP_SENDER_MAIN, 100);

            player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
            break;
        case 2: // Cities [ALLIANCE]
            player->ADD_GOSSIP_ITEM(5, "Stormwind City"        , GOSSIP_SENDER_MAIN, 23);
            player->ADD_GOSSIP_ITEM(5, "Ironforge"             , GOSSIP_SENDER_MAIN, 24);
            player->ADD_GOSSIP_ITEM(5, "Darnassus"             , GOSSIP_SENDER_MAIN, 25);
            //player->ADD_GOSSIP_ITEM(5, "Razor Hill(Orgrimmar)" , GOSSIP_SENDER_MAIN, 4017);
            player->ADD_GOSSIP_ITEM(5, "<-[Main Menu]"                  , GOSSIP_SENDER_MAIN, 100);

            player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
            break;
        case 3: // Starting Places [HORDE]
            player->ADD_GOSSIP_ITEM(5, "Shadow Grave"          , GOSSIP_SENDER_MAIN, 40);
            player->ADD_GOSSIP_ITEM(5, "Valley of Trials"      , GOSSIP_SENDER_MAIN, 41);
            player->ADD_GOSSIP_ITEM(5, "Camp Narache"          , GOSSIP_SENDER_MAIN, 42);
            player->ADD_GOSSIP_ITEM(5, "<-[Main Menu]"                  , GOSSIP_SENDER_MAIN, 100);

            player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
            break;
        case 4: // Starting Places [ALLIANCE]
            player->ADD_GOSSIP_ITEM(5, "Northshire Valley"     , GOSSIP_SENDER_MAIN, 43);
            player->ADD_GOSSIP_ITEM(5, "Coldridge Valley"      , GOSSIP_SENDER_MAIN, 44);
            player->ADD_GOSSIP_ITEM(5, "Shadowglen"            , GOSSIP_SENDER_MAIN, 45);
            player->ADD_GOSSIP_ITEM(5, "<-[Main Menu]"                  , GOSSIP_SENDER_MAIN, 100);

            player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
            break;
        case 5: // Instances [PAGE 1]
            player->ADD_GOSSIP_ITEM(5, "The Wailing Caverns" , GOSSIP_SENDER_MAIN, 1249);
            player->ADD_GOSSIP_ITEM(5, "Deadmines" , GOSSIP_SENDER_MAIN, 1250);
            player->ADD_GOSSIP_ITEM(5, "Shadowfang Keep" , GOSSIP_SENDER_MAIN, 1251);
            player->ADD_GOSSIP_ITEM(5, "Blackfathom Deeps" , GOSSIP_SENDER_MAIN, 1252);
            player->ADD_GOSSIP_ITEM(5, "Razorfen Kraul" , GOSSIP_SENDER_MAIN, 1254);
            player->ADD_GOSSIP_ITEM(5, "Razorfen Downs" , GOSSIP_SENDER_MAIN, 1256);
            player->ADD_GOSSIP_ITEM(5, "Scarlet Monastery" , GOSSIP_SENDER_MAIN, 1257);
            player->ADD_GOSSIP_ITEM(7, "[More] ->" , GOSSIP_SENDER_MAIN, 5551);
            player->ADD_GOSSIP_ITEM(5, "<-[Main Menu]"                  , GOSSIP_SENDER_MAIN, 100);

            player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
            break;
        case 5551: // Instances [PAGE 2]
            player->ADD_GOSSIP_ITEM(5, "Uldaman" , GOSSIP_SENDER_MAIN, 1258);
            player->ADD_GOSSIP_ITEM(5, "Zul'Farrak" , GOSSIP_SENDER_MAIN, 1259);
            player->ADD_GOSSIP_ITEM(5, "Maraudon" , GOSSIP_SENDER_MAIN, 1260);
            player->ADD_GOSSIP_ITEM(5, "The Sunken Temple" , GOSSIP_SENDER_MAIN, 1261);
            player->ADD_GOSSIP_ITEM(5, "Blackrock Depths" , GOSSIP_SENDER_MAIN, 1262);
            player->ADD_GOSSIP_ITEM(5, "Dire Maul" , GOSSIP_SENDER_MAIN, 1263);
            player->ADD_GOSSIP_ITEM(5, "Blackrock Spire" , GOSSIP_SENDER_MAIN, 1264);
            player->ADD_GOSSIP_ITEM(5, "Stratholme" , GOSSIP_SENDER_MAIN, 1265);
            player->ADD_GOSSIP_ITEM(5, "Scholomance" , GOSSIP_SENDER_MAIN, 1266);
            player->ADD_GOSSIP_ITEM(7, "<- [Back]" , GOSSIP_SENDER_MAIN, 5);
            player->ADD_GOSSIP_ITEM(5, "<-[Main Menu]"                  , GOSSIP_SENDER_MAIN, 100);

            player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
            break;
        case 101: // Raids
            player->ADD_GOSSIP_ITEM(5, "Zul'Gurub" , GOSSIP_SENDER_MAIN, 4000);
            player->ADD_GOSSIP_ITEM(5, "Onyxia's Lair" , GOSSIP_SENDER_MAIN, 4001);
            player->ADD_GOSSIP_ITEM(5, "Molten Core" , GOSSIP_SENDER_MAIN, 4002);
            player->ADD_GOSSIP_ITEM(5, "Blackwing Lair" , GOSSIP_SENDER_MAIN, 4003);
            player->ADD_GOSSIP_ITEM(5, "Ruins of Ahn'Qiraj" , GOSSIP_SENDER_MAIN, 4004);
            player->ADD_GOSSIP_ITEM(5, "Temple of Ahn'Qiraj" , GOSSIP_SENDER_MAIN, 4005);
            player->ADD_GOSSIP_ITEM(5, "Naxxramas" , GOSSIP_SENDER_MAIN, 4006);
            player->ADD_GOSSIP_ITEM(5, "<-[Main Menu]"                  , GOSSIP_SENDER_MAIN, 100);

            player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
            break;
        case 6010: // Kalimdor
            player->ADD_GOSSIP_ITEM(5, "Ashenvale" , GOSSIP_SENDER_MAIN, 601);
            player->ADD_GOSSIP_ITEM(5, "Darkshore" , GOSSIP_SENDER_MAIN, 602);
            player->ADD_GOSSIP_ITEM(5, "Desolace" , GOSSIP_SENDER_MAIN, 603);
            player->ADD_GOSSIP_ITEM(5, "Durotar" , GOSSIP_SENDER_MAIN, 604);
            player->ADD_GOSSIP_ITEM(5, "Dustwallow Marsh" , GOSSIP_SENDER_MAIN, 605);
            player->ADD_GOSSIP_ITEM(5, "Feralas" , GOSSIP_SENDER_MAIN, 606);
            player->ADD_GOSSIP_ITEM(5, "Silithus" , GOSSIP_SENDER_MAIN, 607);
            player->ADD_GOSSIP_ITEM(5, "Stonetalon Mountains" , GOSSIP_SENDER_MAIN, 608);
            player->ADD_GOSSIP_ITEM(5, "Tanaris" , GOSSIP_SENDER_MAIN, 609);
            player->ADD_GOSSIP_ITEM(5, "The Barrens" , GOSSIP_SENDER_MAIN, 610);
            player->ADD_GOSSIP_ITEM(5, "Thousand Needles" , GOSSIP_SENDER_MAIN, 611);
            player->ADD_GOSSIP_ITEM(5, "Winterspring" , GOSSIP_SENDER_MAIN, 612);
            player->ADD_GOSSIP_ITEM(5, "<-[Main Menu]"                  , GOSSIP_SENDER_MAIN, 100);

            player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
            break;
        case 6020: // Eastern Kingdoms
            player->ADD_GOSSIP_ITEM(5, "Arathi Highlands" , GOSSIP_SENDER_MAIN, 613);
            player->ADD_GOSSIP_ITEM(5, "Badlands" , GOSSIP_SENDER_MAIN, 614);
            player->ADD_GOSSIP_ITEM(5, "Dun Morogh" , GOSSIP_SENDER_MAIN, 615);
            player->ADD_GOSSIP_ITEM(5, "Duskwood" , GOSSIP_SENDER_MAIN, 616);
            player->ADD_GOSSIP_ITEM(5, "Eastern Plaguelands" , GOSSIP_SENDER_MAIN, 617);
            player->ADD_GOSSIP_ITEM(5, "Elwynn Forest" , GOSSIP_SENDER_MAIN, 618);
            player->ADD_GOSSIP_ITEM(5, "Hillsbrad Foothills" , GOSSIP_SENDER_MAIN, 619);
            player->ADD_GOSSIP_ITEM(5, "Redridge Mountains" , GOSSIP_SENDER_MAIN, 620);
            player->ADD_GOSSIP_ITEM(5, "Silverpine Forest" , GOSSIP_SENDER_MAIN, 621);
            player->ADD_GOSSIP_ITEM(5, "Stranglethorn Vale" , GOSSIP_SENDER_MAIN, 622);
            player->ADD_GOSSIP_ITEM(5, "Swamp of Sorrows" , GOSSIP_SENDER_MAIN, 623);
            player->ADD_GOSSIP_ITEM(5, "The Hinterlands" , GOSSIP_SENDER_MAIN, 624);
            player->ADD_GOSSIP_ITEM(5, "Tirisfal Glades" , GOSSIP_SENDER_MAIN, 625);
            player->ADD_GOSSIP_ITEM(5, "Westfall" , GOSSIP_SENDER_MAIN, 626);
            player->ADD_GOSSIP_ITEM(5, "Wetlands" , GOSSIP_SENDER_MAIN, 627);
            player->ADD_GOSSIP_ITEM(5, "<-[Main Menu]"                  , GOSSIP_SENDER_MAIN, 100);

            player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
            break;



// ----### CITIES ###----

// ### HORDE ###

        case 20: // Orgrimmar
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, 1437.0f, -4421.0f, 25.24f, 1.65f);
            break;
        case 21: // Undercity
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 1822.0999f, 238.638855f, 60.694809f, 0.0f);
            break;
        case 22: // Thunderbluff
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -1272.703735f, 116.886490f, 131.016861f, 0.0f);
            break;

// ### ALLIANCE ###

        case 23: // Stormwind
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -8828.231445f, 627.927490f, 94.055664f, 0.0f);
            break;
        case 24: // Ironforge
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -4917.0f, -955.0f, 502.0f, 0.0f);
            break;
        case 25: // Darnassus
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, 9962.712891f, 2280.142822f, 1341.394409f, 0.0f);
            break;

// ----### STARTING PLACES ####----

// ### HORDE ###
        case 40: // Shadow Grave
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 1663.517f, 1678.187744f, 120.5303f, 0.0f);
            break;
        case 41: // Valley of Trials
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -602.1253f, -4262.4208f, 38.956341f, 0.0f);
            break;
        case 42: // Camp Narache
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -2914.16992f, -266.061798f, 53.658211f, 0.0f);
            break;

// ### ALLIANCE ###

        case 43: // Nortshire Valley
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -8943.133789f, -132.934921f, 83.704269f, 0.0f);
            break;
        case 44: // Coldridge Valley
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -6231.106445f, 332.270477f, 383.153931f, 0.0f);
            break;
        case 45: // Shadowglen
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, 10329.918945f, 833.500305f, 1326.260620f, 0.0f);
            break;

// ----### INSTANCES ###----

        case 50: // Dire Maul
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -3762.340820f, 1216.537598f, 127.434608f, 0.0f);
            break;
        case 51: // Blackrock Spire
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -7528.554688f, -1222.907227f, 285.732941f, 0.0f);
            break;
        case 52: // Zul'Gurub
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -11916.179688f, -1190.977051f, 85.137901f, 0.0f);
            break;
        case 53: // Onyxia's Lair
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -4682.391602f, -3709.857422f, 46.792862f, 0.0f);
            break;
        case 54: // Searing Gorge (Moltencore, Blackwinglair)
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -7342.270020f, -1096.863892f, 277.06930f, 0.0f);
            break;
        case 55: // Naxxramas
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 3121.061768f, -3689.973389f, 133.458786f, 0.0f);
            break;
        case 56: // Stratholme Backdoor Entrance
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 3160.416992f, -4038.750244f, 104.177376f, 0.0f);
            break;
        case 57: // Stratholme Main Entrance
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 3357.214355f, -3379.713135f, 144.780853f, 0.0f);
            break;
        case 58: // Scholomance
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 1252.319824f, -2587.151123f, 92.886772f, 0.0f);
            break;

// ---### ZONES ###---

        case 70: // Silithus
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -7430.070313f, 1002.554565f, 1.249787f, 0.0f);
            break;
        case 71: // Durotar
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, 1006.426819f, -4439.258789f, 11.352882f, 0.0f);
            break;
        case 72: // Ashenvale
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, 1922.842651f, -2169.429688f, 94.327400f, 0.0f);
            break;
        case 73: // Tanaris
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -7180.401367f, -3773.328369f, 8.728320f, 0.0f);
            break;
        case 74: // Pretbc Mall
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
        case 1249://teleport player to the Wailing Caverns
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -722.53f, -2226.30f, 16.94f, 2.71f);
            break;
        case 1250://teleport player to the Deadmines
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -11212.04f, 1658.58f, 25.67f, 1.45f);
            break;
        case 1251://teleport player to Shadowfang Keep
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -254.47f, 1524.68f, 76.89f, 1.56f);
            break;
        case 1252://teleport player to Blackfathom Deeps
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, 4254.58f, 664.74f, -29.04f, 1.97f);
            break;
        case 1254://teleport player to Razorfen Kraul
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -4484.04f, -1739.40f, 86.47f, 1.23f);
            break;
        case 1256://teleport player to Razorfen Downs
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -4645.08f, -2470.85f, 85.53f, 4.39f);
            break;
        case 1257://teleport player to the Scarlet Monastery
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 2843.89f, -693.74f, 139.32f, 5.11f);
            break;
        case 1258://teleport player to Uldaman
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -6119.70f, -2957.30f, 204.11f, 0.03f);
            break;
        case 1259://teleport player to Zul'Farrak
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -6839.39f, -2911.03f, 8.87f, 0.41f);
            break;
        case 1260://teleport player to Maraudon
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -1433.33f, 2955.34f, 96.21f, 4.82f);
            break;
        case 1261://teleport player to the Sunken Temple
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -10346.92f, -3851.90f, -43.41f, 6.09f);
            break;
        case 1262://teleport player to Blackrock Depths
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -7301.03f, -913.19f, 165.37f, 0.08f);
            break;
        case 1263://teleport player to Dire Maul
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -3982.47f, 1127.79f, 161.02f, 0.05f);
            break;
        case 1264://teleport player to Blackrock Spire
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -7535.43f, -1212.04f, 285.45f, 5.29f);
            break;
        case 1265://teleport player to Stratholme
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 3263.54f, -3379.46f, 143.59f, 0.00f);
            break;
        case 1266://teleport player to Scholomance
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 1219.01f, -2604.66f, 85.61f, 0.50f);
            break;
        case 4000:// Teleport to Zul'Gurub
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -11916.7f, -1212.82f, 92.2868f, 4.6095f);
            break;
        case 4001:// Teleport to Onyxia's Lair
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -4707.44f, -3726.82f, 54.6723f, 3.8f);
            break;
        case 4002:// Teleport to Molten Core
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(230, 1121.451172f, -454.316772f, -101.329536f, 3.5f);
            break;
        case 4003:// Teleport to Blackwing Lair
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(469, -7665.55f, -1102.49f, 400.679f, 0.0f);
            break;
        case 4004:// Ruins of Ahn'Qiraj
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -8409.032227f, 1498.830933f, 27.361542f, 2.497567f);
            break;
        case 4005:// Temple of Ahn'Qiraj
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -8245.837891f, 1983.736206f, 129.071686f, 0.936195f);
            break;
        case 4006:// Naxxramas
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(533, 3005.87f, -3435.0f, 293.89f, 0.0f);
            break;
        case 601: // Kalimdor -> Ashenvale
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, 3469.43f, 847.62f, 6.36476f, 0.0f);
            break;
        case 602: // Kalimdor -> Darkshore
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, 6207.5f, -152.833f, 80.8185f, 0.0f);
            break;
        case 603: // Kalimdor -> Desolace
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -93.1614f, 1691.15f, 90.0649f, 0.0f);
            break;
        case 604: // Kalimdor -> Durotar
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, 341.42f, -4684.7f, 31.9493f, 0.0f);
            break;
        case 605: // Kalimdor -> Duswallow Marsh
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -3463.26f, -4123.13f, 18.1043f, 0.0f);
            break;
        case 606: // Kalimdor -> Ferelas
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -4458.93f, 243.415f, 65.6136f, 0.0f);
            break;
        case 607: // Kalimdor -> Silithus
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -6824.15f, 821.273f, 50.6675f, 0.0f);
            break;
        case 608: // Kalimdor -> Stonetalon Mountains
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, 1145.00f, 85.664f, -6.64f, 0.0f);
            break;
        case 609: // Kalimdor -> Tanaris
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -7373.69f, -2950.2f, 11.7598f, 0.0f);
            break;
        case 610: // Kalimdor -> The Barrens
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -456.263f, -2652.7f, 96.615f, 0.0f);
            break;
        case 611: // Kalimdor -> Thousand Needles
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, -4941.66f, -1595.42f, -33.07f, 0.0f);
            break;
        case 612: // Kalimdor -> Winterspring
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(1, 6107.62f, -4181.6f, 853.322f, 0.0f);
            break;
        case 613: // Eastern Kingdoms -> Arathi Highlands
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -1544.93f, -2495.01f, 54.11f, 0.0f);
            break;
        case 614: // Eastern Kingdoms -> Badlands
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -6084.95f, -3328.44f, 253.76f, 0.0f);
            break;
        case 615: // Eastern Kingdoms -> Dun Morogh
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -5660.33f, 755.299f, 390.605f, 0.0f);
            break;
        case 616: // Eastern Kingdoms -> Duskwood
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -10879.85f, -327.06f, 37.78f, 0.0f);
            break;
        case 617: // Eastern Kingdoms -> Eastern Plaguelands
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 2280.12f, -5313.16f, 87.74f, 0.0f);
            break;
        case 618: // Eastern Kingdoms -> Elwynn Forest
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -9545.78f, -51.81f, 56.72f, 0.0f);
            break;
        case 619: // Eastern Kingdoms -> Hillsbrad Foothills
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -436.03f, -583.27f, 53.58f, 0.0f);
            break;
        case 620: // Eastern Kingdoms -> Reridge Mountains
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -9633.80f, -1875.09f, 68.39f, 0.0f);
            break;
        case 621: // Eastern Kingdoms -> Silverpine Forest
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 641.48f, 1297.84f, 85.45f, 0.0f);
            break;
        case 622: // Eastern Kingdoms -> Stranglethorn Vale
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -11393.77f, -288.94f, 58.99f, 0.0f);
            break;
        case 623: // Eastern Kingdoms -> Swamp of Sorrows
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -10522.55f, -3028.30f, 21.79f, 0.0f);
            break;
        case 624: // Eastern Kingdoms -> The Hinterlands
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 155.14f, -2014.95f, 122.55f, 0.0f);
            break;
        case 625: // Eastern Kingdoms -> Tirishfal Glades
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, 2255.5f, 288.511f, 35.1138f, 0.0f);
            break;
        case 626: // Eastern Kingdoms -> Westfall
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -10919.09f, 998.47f, 35.47f, 0.0f);
            break;
        case 627: // Eastern Kingdoms -> Wetlands
            player->CLOSE_GOSSIP_MENU();
            player->TeleportTo(0, -4086.36f, -2610.95f, 47.0143f, 0.0f);
            break;

        case 100: // Main Menu
            // HORDE
            if (player->GetTeam() == HORDE)
            {
                //player->ADD_GOSSIP_ITEM(5, "PreTBC Mall"          , GOSSIP_SENDER_MAIN, 74);
                player->ADD_GOSSIP_ITEM(5, "Major Cities"               , GOSSIP_SENDER_MAIN, 1);
                player->ADD_GOSSIP_ITEM(5, "Starting Areas"       , GOSSIP_SENDER_MAIN, 3);
                player->ADD_GOSSIP_ITEM(5, "Instances"            , GOSSIP_SENDER_MAIN, 5);
                player->ADD_GOSSIP_ITEM(5, "Raids"                 , GOSSIP_SENDER_MAIN, 101);
                player->ADD_GOSSIP_ITEM(5, "Gurubashi Arena" , GOSSIP_SENDER_MAIN, 4015);
                player->ADD_GOSSIP_ITEM(5, "Zones - Kalimdor"     , GOSSIP_SENDER_MAIN, 6010);
                player->ADD_GOSSIP_ITEM(5, "Zones - Eastern Kingdoms"     , GOSSIP_SENDER_MAIN, 6020);

                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
            }
            // ALLIANCE
            else
            {
                //player->ADD_GOSSIP_ITEM(5, "PreTBC Mall"          , GOSSIP_SENDER_MAIN, 74);
                player->ADD_GOSSIP_ITEM(5, "Major Cities"               , GOSSIP_SENDER_MAIN, 2);
                player->ADD_GOSSIP_ITEM(5, "Starting Areas"       , GOSSIP_SENDER_MAIN, 4);
                player->ADD_GOSSIP_ITEM(5, "Instances"            , GOSSIP_SENDER_MAIN, 5);
                player->ADD_GOSSIP_ITEM(5, "Raids"                 , GOSSIP_SENDER_MAIN, 101);
                player->ADD_GOSSIP_ITEM(5, "Gurubashi Arena" , GOSSIP_SENDER_MAIN, 4015);
                player->ADD_GOSSIP_ITEM(5, "Zones - Kalimdor"     , GOSSIP_SENDER_MAIN, 6010);
                player->ADD_GOSSIP_ITEM(5, "Zones - Eastern Kingdoms"     , GOSSIP_SENDER_MAIN, 6020);

                player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
            }
            break;
    }
}
bool GossipSelect_TeleportNPC(Player *player, Creature *_Creature, uint32 sender, uint32 action)
{
    // Main menu
    if (sender == GOSSIP_SENDER_MAIN)
        SendDefaultMenu_TeleportNPC(player, _Creature, action);

    return true;
}

enum Enchants
{
    WEP2H_SUPERIOR_IMPACT = 20,
    WEP2H_AGILITY,
    WEP_CRUSADER,
    WEP1H_AGILITY,
    WEP_SPELLPOWER,
    WEP_HEAL,
    OFFHAND_SPIRIT,
    OFFHAND_STAM,
    OFFHAND_FROSTRES,
    CHEST_STATS,
    CLOAK_DODGE,
    CLOAK_SUB,
    CLOAK_ARMOR,
    CLOAK_AGILITY,
    BRACER_STAM,
    BRACER_STR,
    BRACER_HEAL,
    BRACER_INT,
    GLOVES_AGI,
    GLOVES_FIRE,
    GLOVES_FROST,
    GLOVES_SHADOW,
    GLOVES_HEALING,
    BOOTS_AGI,
    BOOTS_SPEED,
    BOOTS_STAM,
};

void Enchant(Player* player, Item* item, uint32 enchantid)
{
    if (!item)
    {
        player->GetSession()->SendNotification("You must first equip the item you are trying to enchant.");
        return;
    }

    if (!enchantid)
    {
        player->GetSession()->SendNotification("Something went wrong.");
        return;
    }

    item->ClearEnchantment(PERM_ENCHANTMENT_SLOT);
    item->SetEnchantment(PERM_ENCHANTMENT_SLOT, enchantid, 0, 0);
    player->GetSession()->SendNotification("%s succesfully enchanted", item->GetProto()->Name1);
}

bool GossipHello_EnchantNPC(Player* player, Creature* creature)
{

    player->ADD_GOSSIP_ITEM(5, "Chest", GOSSIP_SENDER_MAIN, EQUIPMENT_SLOT_CHEST);
    player->ADD_GOSSIP_ITEM(5, "Cloak", GOSSIP_SENDER_MAIN, EQUIPMENT_SLOT_BACK);
    player->ADD_GOSSIP_ITEM(5, "Bracers", GOSSIP_SENDER_MAIN, EQUIPMENT_SLOT_WRISTS);
    player->ADD_GOSSIP_ITEM(5, "Gloves", GOSSIP_SENDER_MAIN, EQUIPMENT_SLOT_HANDS);
    player->ADD_GOSSIP_ITEM(5, "Boots", GOSSIP_SENDER_MAIN, EQUIPMENT_SLOT_FEET);
    player->ADD_GOSSIP_ITEM(5, "Mainhand", GOSSIP_SENDER_MAIN, EQUIPMENT_SLOT_MAINHAND);
    player->ADD_GOSSIP_ITEM(5, "Offhand", GOSSIP_SENDER_MAIN, EQUIPMENT_SLOT_OFFHAND);

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    return true;
}
bool GossipSelect_EnchantNPC(Player* player, Creature* creature, uint32 sender, uint32 action)
{
    if (sender != GOSSIP_SENDER_MAIN)
        return true;

    if (action < 20)
    {
        switch (action)
        {
        case EQUIPMENT_SLOT_CHEST:
            player->ADD_GOSSIP_ITEM(5, "Greater Stats", GOSSIP_SENDER_MAIN, CHEST_STATS);
            break;
        case EQUIPMENT_SLOT_BACK:
            player->ADD_GOSSIP_ITEM(5, "Agility", GOSSIP_SENDER_MAIN, CLOAK_AGILITY);
            player->ADD_GOSSIP_ITEM(5, "Armor", GOSSIP_SENDER_MAIN, CLOAK_ARMOR);
            player->ADD_GOSSIP_ITEM(5, "Dodge", GOSSIP_SENDER_MAIN, CLOAK_DODGE);
            player->ADD_GOSSIP_ITEM(5, "Subtlety", GOSSIP_SENDER_MAIN, CLOAK_SUB);
        break;
        case EQUIPMENT_SLOT_WRISTS:
            player->ADD_GOSSIP_ITEM(5, "Stamina", GOSSIP_SENDER_MAIN, BRACER_STAM);
            player->ADD_GOSSIP_ITEM(5, "Strength", GOSSIP_SENDER_MAIN, BRACER_STR);
            player->ADD_GOSSIP_ITEM(5, "Healing", GOSSIP_SENDER_MAIN, BRACER_HEAL);
            player->ADD_GOSSIP_ITEM(5, "Intellect", GOSSIP_SENDER_MAIN, BRACER_INT);
            break;
        case EQUIPMENT_SLOT_HANDS:
            player->ADD_GOSSIP_ITEM(5, "Agility", GOSSIP_SENDER_MAIN, GLOVES_AGI);
            player->ADD_GOSSIP_ITEM(5, "Fire Power", GOSSIP_SENDER_MAIN, GLOVES_FIRE);
            player->ADD_GOSSIP_ITEM(5, "Frost Power", GOSSIP_SENDER_MAIN, GLOVES_FROST);
            player->ADD_GOSSIP_ITEM(5, "Shadow Power", GOSSIP_SENDER_MAIN, GLOVES_SHADOW);
            player->ADD_GOSSIP_ITEM(5, "Healing", GOSSIP_SENDER_MAIN, GLOVES_HEALING);
            break;
        case EQUIPMENT_SLOT_FEET:
            player->ADD_GOSSIP_ITEM(5, "Stamina", GOSSIP_SENDER_MAIN, BOOTS_STAM);
            player->ADD_GOSSIP_ITEM(5, "Minor Speed", GOSSIP_SENDER_MAIN, BOOTS_SPEED);
            player->ADD_GOSSIP_ITEM(5, "Agility", GOSSIP_SENDER_MAIN, BOOTS_AGI);
            break;
        case EQUIPMENT_SLOT_MAINHAND:
            player->ADD_GOSSIP_ITEM(5, "Crusader", GOSSIP_SENDER_MAIN, WEP_CRUSADER);
            player->ADD_GOSSIP_ITEM(5, "1H Agility", GOSSIP_SENDER_MAIN, WEP1H_AGILITY);
            player->ADD_GOSSIP_ITEM(5, "2H Agility", GOSSIP_SENDER_MAIN, WEP2H_AGILITY);
            player->ADD_GOSSIP_ITEM(5, "Spellpower", GOSSIP_SENDER_MAIN, WEP_SPELLPOWER);
            player->ADD_GOSSIP_ITEM(5, "Healing", GOSSIP_SENDER_MAIN, WEP_HEAL);
            break;
        case EQUIPMENT_SLOT_OFFHAND:
            player->ADD_GOSSIP_ITEM(5, "Spirit", GOSSIP_SENDER_MAIN, OFFHAND_SPIRIT);
            player->ADD_GOSSIP_ITEM(5, "Stamina", GOSSIP_SENDER_MAIN, OFFHAND_STAM);
            player->ADD_GOSSIP_ITEM(5, "Frost Resistance", GOSSIP_SENDER_MAIN, OFFHAND_FROSTRES);
            break;
        }
        player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    }
    else
    {
        Item* item = nullptr;
        uint32 id = 0;
        switch (action)
        {
            case WEP2H_SUPERIOR_IMPACT:
            case WEP2H_AGILITY:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND);
                if (item && (action == WEP2H_AGILITY || action == WEP2H_SUPERIOR_IMPACT))
                {
                    if (item->GetProto()->SubClass != ITEM_SUBCLASS_WEAPON_AXE2 && item->GetProto()->SubClass != ITEM_SUBCLASS_WEAPON_MACE2
                        && item->GetProto()->SubClass != ITEM_SUBCLASS_WEAPON_SWORD2 && item->GetProto()->SubClass != ITEM_SUBCLASS_WEAPON_POLEARM
                        && item->GetProto()->SubClass != ITEM_SUBCLASS_WEAPON_STAFF)
                    {
                        player->GetSession()->SendNotification("Requires 2 handed weapon");
                        player->CLOSE_GOSSIP_MENU();
                        return true;
                    }
                }
                if (action == WEP2H_SUPERIOR_IMPACT)
                    id = 1896;
                else if (action == WEP2H_AGILITY)
                    id = 2646;
                break;

            case WEP_CRUSADER:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND);
                id = 1900;
                break;
            case WEP1H_AGILITY:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND);
                id = 2564;
                break;
            case WEP_SPELLPOWER:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND);
                id = 2504;
                break;
            case WEP_HEAL:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND);
                id = 2505;
                break;

            case OFFHAND_SPIRIT:
            case OFFHAND_STAM:
            case OFFHAND_FROSTRES:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);
                if (item && item->GetProto()->SubClass != ITEM_SUBCLASS_ARMOR_SHIELD)
                {
                    player->GetSession()->SendNotification("Requires Shield");
                    player->CLOSE_GOSSIP_MENU();
                    return true;
                }
                if (action == OFFHAND_SPIRIT)
                    id = 1890;
                else if (action == OFFHAND_FROSTRES)
                    id = 926;
                else if (action == OFFHAND_STAM)
                    id = 929;
                break;
            case CHEST_STATS:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_CHEST);
                id = 1891;
                break;
            case CLOAK_DODGE:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK);
                id = 2622;
                break;
            case CLOAK_SUB:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK);
                id = 2621;
                break;
            case CLOAK_ARMOR:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK);
                id = 1889;
                break;
            case CLOAK_AGILITY:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK);
                id = 849;
                break;
            case BRACER_STAM:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS);
                id = 1886;
                break;
            case BRACER_STR:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS);
                id = 1885;
                break;
            case BRACER_HEAL:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS);
                id = 2566;
                break;
            case BRACER_INT:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS);
                id = 1883;
                break;
            case GLOVES_AGI:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS);
                id = 2564;
                break;
            case GLOVES_FIRE:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS);
                id = 2616;
                break;
            case GLOVES_FROST:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS);
                id = 2615;
                break;
            case GLOVES_SHADOW:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS);
                id = 2614;
                break;
            case GLOVES_HEALING:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS);
                id = 2617;
                break;
            case BOOTS_AGI:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FEET);
                id = 904;
                break;
            case BOOTS_SPEED:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FEET);
                id = 911;
                break;
            case BOOTS_STAM:
                item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FEET);
                id = 929;
                break;
        }
        Enchant(player, item, id);
        player->CLOSE_GOSSIP_MENU();
    }
    return true;
}



void LearnSkillRecipesHelper(Player *player, uint32 skill_id)
{
    uint32 classmask = player->getClassMask();

    for (uint32 j = 0; j < sObjectMgr.GetMaxSkillLineAbilityId(); ++j)
    {
        SkillLineAbilityEntry const *skillLine = sObjectMgr.GetSkillLineAbility(j);
        if (!skillLine)
            continue;

        // wrong skill
        if (skillLine->skillId != skill_id)
            continue;

        // not high rank
        if (skillLine->forward_spellid)
            continue;

        // skip racial skills
        if (skillLine->racemask != 0)
            continue;

        // skip wrong class skills
        if (skillLine->classmask && (skillLine->classmask & classmask) == 0)
            continue;

        SpellEntry const* spellEntry = sSpellMgr.GetSpellEntry(skillLine->spellId);
        if (!spellEntry || !SpellMgr::IsSpellValid(spellEntry, player, false))
            continue;

        player->LearnSpell(skillLine->spellId, false);
    }
}
bool LearnAllRecipesInProfession(Player *pPlayer, SkillType skill)
{
    ChatHandler handler(pPlayer->GetSession());
    char* skill_name;

    SkillLineEntry const *SkillInfo = sSkillLineStore.LookupEntry(skill);
    skill_name = SkillInfo->name[sWorld.GetDefaultDbcLocale()];

    if (!SkillInfo)
    {
        sLog.outError("Profession NPC: received non-valid skill ID");
        return false;
    }

    pPlayer->SetSkill(SkillInfo->id, 300, 300);
    LearnSkillRecipesHelper(pPlayer, SkillInfo->id);
    pPlayer->GetSession()->SendNotification("All recipes for %s learned", skill_name);
    return true;
}

bool GossipHello_ProfessionNPC(Player* player, Creature* creature)
{

    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Alchemy",              GOSSIP_SENDER_MAIN, 1);
    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Blacksmithing",        GOSSIP_SENDER_MAIN, 2);
    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Leatherworking",       GOSSIP_SENDER_MAIN, 3);
    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Tailoring",            GOSSIP_SENDER_MAIN, 4);
    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Engineering",          GOSSIP_SENDER_MAIN, 5);
    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Enchanting",           GOSSIP_SENDER_MAIN, 6);
    //player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Jewelcrafting",      GOSSIP_SENDER_MAIN, 7);
    //player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Inscription",        GOSSIP_SENDER_MAIN, 8);
    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Herbalism",            GOSSIP_SENDER_MAIN, 9);
    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Skinning",             GOSSIP_SENDER_MAIN, 10);
    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Mining",               GOSSIP_SENDER_MAIN, 11);

    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "First Aid",            GOSSIP_SENDER_MAIN, 12);
    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Fishing",              GOSSIP_SENDER_MAIN, 13);
    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_INTERACT_2, "Cooking",              GOSSIP_SENDER_MAIN, 14);

    player->PlayerTalkClass->SendGossipMenu(1, creature->GetGUID());

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
    return true;
}
void CompleteLearnProfession(Player *pPlayer, Creature *pCreature, SkillType skill)
{
    if (pPlayer->GetFreePrimaryProfessionPoints() == 0 && !(skill == SKILL_COOKING || skill == SKILL_FIRST_AID))
    {
        pPlayer->GetSession()->SendNotification(260013);
    }
    else
    {
		if (SpendDonationPoints(pPlayer, 10000))
		{
			if (!LearnAllRecipesInProfession(pPlayer, skill))
			{
				sLog.out(LOG_CHAR, "Failed learn Profession  user %u", pPlayer->GetGUID());
			}
			
		}
    }
}

bool GossipSelect_ProfessionNPC(Player* player, Creature* creature, uint32 sender, uint32 action)
{
    switch (action)
    {
    case 1:
        if (!player->HasSkill(SKILL_ALCHEMY))
            CompleteLearnProfession(player, creature, SKILL_ALCHEMY);
        break;
    case 2:
        if (!player->HasSkill(SKILL_BLACKSMITHING))
            CompleteLearnProfession(player, creature, SKILL_BLACKSMITHING);
        break;
    case 3:
        if (!player->HasSkill(SKILL_LEATHERWORKING))
            CompleteLearnProfession(player, creature, SKILL_LEATHERWORKING);
        break;
    case 4:
        if (!player->HasSkill(SKILL_TAILORING))
            CompleteLearnProfession(player, creature, SKILL_TAILORING);
        break;
    case 5:
        if (!player->HasSkill(SKILL_ENGINEERING))
            CompleteLearnProfession(player, creature, SKILL_ENGINEERING);
        break;
    case 6:
        if (!player->HasSkill(SKILL_ENCHANTING))
            CompleteLearnProfession(player, creature, SKILL_ENCHANTING);
        break;
    case 7:
    case 8:
        break;
    case 9:
        if (!player->HasSkill(SKILL_HERBALISM))
            CompleteLearnProfession(player, creature, SKILL_HERBALISM);
        break;
    case 10:
        if (!player->HasSkill(SKILL_SKINNING))
            CompleteLearnProfession(player, creature, SKILL_SKINNING);
        break;
    case 11:
        if (!player->HasSkill(SKILL_MINING))
            CompleteLearnProfession(player, creature, SKILL_MINING);
        break;
    case 12:
        if (!player->HasSkill(SKILL_FIRST_AID))
            CompleteLearnProfession(player, creature, SKILL_FIRST_AID);
        break;
    case 13:
        if (!player->HasSkill(SKILL_FISHING))
            CompleteLearnProfession(player, creature, SKILL_FISHING);
        break;
    case 14:
        if (!player->HasSkill(SKILL_COOKING))
            CompleteLearnProfession(player, creature, SKILL_COOKING);
        break;
    }

    player->CLOSE_GOSSIP_MENU();
    return true;
}

/*
* Custom training dummy script
*/

struct npc_training_dummyAI : ScriptedAI
{
    explicit npc_training_dummyAI(Creature* pCreature) : ScriptedAI(pCreature)
    {
        npc_training_dummyAI::Reset();
    }

    uint32 m_uiCombatTimer;
    std::unordered_map<ObjectGuid, time_t> attackers;

    void Reset() override
    {
        m_uiCombatTimer = 15000;
        attackers.clear();
    }

    void AttackStart(Unit* /*pWho*/) override {}

    void Aggro(Unit* pWho) override
    {
        SetCombatMovement(false);
    }

    void AddAttackerToList(Unit* pWho)
    {
        auto itr = attackers.find(pWho->GetObjectGuid());
        if (itr != attackers.end())
        {
            itr->second = std::time(nullptr);
        }
        else
        {
            attackers.emplace(pWho->GetObjectGuid(), std::time(nullptr));
        }
    }

    void DamageTaken(Unit* pWho, uint32& /*uiDamage*/) override
    {
        if (pWho)
            AddAttackerToList(pWho);
    }

    void SpellHit(Unit* pWho, const SpellEntry* /*pSpell*/) override
    {
        if (pWho)
            AddAttackerToList(pWho);
    }

    void UpdateAI(const uint32 diff) override
    {
        if (m_creature->isInCombat())
        {
            if (m_uiCombatTimer <= diff)
            {
                for (auto itr = attackers.begin(); itr != attackers.end();)
                {
                    Unit* pAttacker = m_creature->GetMap()->GetUnit(itr->first);

                    if (!pAttacker || !pAttacker->IsInWorld())
                    {
                        itr = attackers.erase(itr);
                        continue;
                    }
                    if (itr->second + 10 < std::time(nullptr))
                    {
                        m_creature->_removeAttacker(pAttacker);
                        m_creature->getThreatManager().modifyThreatPercent(pAttacker, -101.0f);
                        itr = attackers.erase(itr);
                        continue;
                    }
                    ++itr;
                }

                if (m_creature->getThreatManager().isThreatListEmpty())
                    EnterEvadeMode();

                m_uiCombatTimer = 15000;
            }
            else
                m_uiCombatTimer -= diff;
        }
    }
};

CreatureAI* GetAI_npc_training_dummy(Creature* pCreature)
{
    return new npc_training_dummyAI(pCreature);
}

struct npc_summon_debugAI : ScriptedAI
{
    uint32 m_maxSummonCount = 200;
    uint32 m_summonCount = 0;
    Creature *m_summons[200];

    npc_summon_debugAI(Creature *pCreature) : ScriptedAI(pCreature)
    {
        m_summonCount = 0;
        for (uint32 i = 0; i < m_maxSummonCount; ++i)
            m_summons[i] = nullptr;

        Reset();
    }

    void Reset() override
    {
        m_summonCount = 0;
        for (uint32 i = 0; i < m_maxSummonCount; ++i)
        {
            if (m_summons[i])
                ((TemporarySummon*)m_summons[i])->UnSummon();

            m_summons[i] = nullptr;
        }
    }


    void JustDied(Unit* /* killer */) override
    {
        Reset();
    }

    void UpdateAI(const uint32 diff) override
    {
        if (!m_creature->getVictim())
            return;

        if (m_summonCount >= m_maxSummonCount)
            return;

        m_summons[m_summonCount++] = m_creature->SummonCreature(12458, m_creature->GetPositionX(), m_creature->GetPositionY(), m_creature->GetPositionZ(), 0);
    }
};

CreatureAI* GetAI_custom_summon_debug(Creature *creature)
{
    return new npc_summon_debugAI(creature);
}

bool GossipHello_LHWOWNPC(Player* player, Creature* creature)
{
	if (player->GetTeam() == HORDE)
	{
		player->ADD_GOSSIP_ITEM(5, GOSSIP_TEXT_Orgrimmar, GOSSIP_SENDER_MAIN, 1001);
	}
	// ALLIANCE
	else
	{
		player->ADD_GOSSIP_ITEM(5, GOSSIP_TEXT_Ironforge, GOSSIP_SENDER_MAIN, 1002);
	}


	player->ADD_GOSSIP_ITEM(5, GOSSIP_TEXT_DONATION_POINT_QUERY, GOSSIP_SENDER_MAIN, 101);
	player->ADD_GOSSIP_ITEM(5, GOSSIP_TEXT_DIRECT_60, GOSSIP_SENDER_MAIN, 111);
	player->ADD_GOSSIP_ITEM(5, GOSSIP_TEXT_DIRECT_60_1, GOSSIP_SENDER_MAIN, 112);
	player->ADD_GOSSIP_ITEM(5, GOSSIP_TEXT_BIG_BAG, GOSSIP_SENDER_MAIN, 121);
	player->ADD_GOSSIP_ITEM(5, GOSSIP_TEXT_FULL_WEAPON_SKILLS, GOSSIP_SENDER_MAIN, 131);
	player->ADD_GOSSIP_ITEM(5, GOSSIP_TEXT_MOUNT, GOSSIP_SENDER_MAIN, 14);
	//player->ADD_GOSSIP_ITEM(5, GOSSIP_TEXT_Profession, GOSSIP_SENDER_MAIN, 15);

	if (CanUseTeleport(player)) {
		player->ADD_GOSSIP_ITEM(5, GOSSIP_TEXT_Teleport, GOSSIP_SENDER_MAIN, 16);
	}
	else {
		player->ADD_GOSSIP_ITEM(5, GOSSIP_TEXT_Teleport_Buy, GOSSIP_SENDER_MAIN, 17);
	}

	player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
	return true;
}
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
					//player->ADD_GOSSIP_ITEM(5, 272004, GOSSIP_SENDER_MAIN, 7); //团队副本
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
					//player->ADD_GOSSIP_ITEM(5, 272004, GOSSIP_SENDER_MAIN, 7); //团队副本
					player->ADD_GOSSIP_ITEM(5, 272005, GOSSIP_SENDER_MAIN, 4015); //古拉巴什竞技场
					player->ADD_GOSSIP_ITEM(5, 272006, GOSSIP_SENDER_MAIN, 8); //区域 - 卡利姆多
					player->ADD_GOSSIP_ITEM(5, 272007, GOSSIP_SENDER_MAIN, 9); //区域 - 东部王国
					break;
				}
			}
			case 17: //购买传送
			{
				if (SpendDonationPoints(player, 20000))
				{
					uint32 accid = player->GetSession()->GetAccountId();
					LoginDatabase.PQuery("UPDATE account SET can_use_teleport=1 WHERE id=%u",  accid);
					player->GetSession()->SendNotification(210007);
				}
				break;
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
		case 112:
		{
			if (SpendDonationPoints(player, 3000))
			{
				player->GiveLevel(60);
				player->InitTalentForLevel();
				player->SetUInt32Value(PLAYER_XP, 0);
				player->ModifyMoney(2000000);
				learnAllSpell(player);
				//addT0Set(player);
				addNewBie(player);
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


bool SpendDonationPoints(Player* player, uint32 pricePoints)
{
	uint32 accid = player->GetSession()->GetAccountId();
	QueryResult *result = LoginDatabase.PQuery("SELECT zzds FROM account WHERE id=%u", accid);
	if (!result)
	{
		return false;
	}
	Field *fields = result->Fetch();
	uint32 currentPoints = fields[0].GetUInt32();

	if (currentPoints < pricePoints)
	{
		//ChatHandler(player).PSendSysMessage(MANGOS_STRING_DONATION_POINTS_NOT_ENOUGH);	// 聊天栏提示
		player->GetSession()->SendNotification(MANGOS_STRING_DONATION_POINTS_NOT_ENOUGH);	// 中间红字提示
		return false;
	}
	
	LoginDatabase.PQuery("UPDATE account SET zzds=%u WHERE id=%u", currentPoints - pricePoints, accid);
	delete result;
	sLog.out(LOG_CHAR, "player(%u)  spend %u donationPoints", player->GetGUID(), pricePoints);
	
	return true;
}

bool CanUseTeleport(Player* player)
{
	uint32 accid = player->GetSession()->GetAccountId();
	QueryResult *result = LoginDatabase.PQuery("SELECT can_use_teleport FROM account WHERE id=%u", accid);
	if (!result)
	{
		return false;
	}
	Field *fields = result->Fetch();
	uint32 can_use_teleport = fields[0].GetUInt32();
	delete result;
	if (can_use_teleport == 1)
	{
		return true;
	}
	return false;
}

void learnAllSpell(Player* player)
{
	
	switch (player->getClass())
	{
		case CLASS_MAGE:
			learnAllSpell(player, CLASS_MAGE_SPELL, sizeof(CLASS_MAGE_SPELL)/sizeof(int));
			break;
		case CLASS_WARRIOR:
			learnAllSpell(player, CLASS_WARRIOR_SPELL, sizeof(CLASS_WARRIOR_SPELL) / sizeof(int));
			break;
		case CLASS_WARLOCK:
			learnAllSpell(player, CLASS_WARLOCK_SPELL, sizeof(CLASS_WARLOCK_SPELL) / sizeof(int));
			break;
		case CLASS_PRIEST:
			learnAllSpell(player, CLASS_PRIEST_SPELL, sizeof(CLASS_PRIEST_SPELL) / sizeof(int));
			break;
		case CLASS_DRUID:
			learnAllSpell(player, CLASS_DRUID_SPELL, sizeof(CLASS_DRUID_SPELL) / sizeof(int));
			break;
		case CLASS_ROGUE:
			learnAllSpell(player, CLASS_ROGUE_SPELL, sizeof(CLASS_ROGUE_SPELL) / sizeof(int));
			break;
		case CLASS_HUNTER:
			learnAllSpell(player, CLASS_HUNTER_SPELL, sizeof(CLASS_HUNTER_SPELL) / sizeof(int));
			break;
		case CLASS_PALADIN:
			learnAllSpell(player, CLASS_PALADIN_SPELL, sizeof(CLASS_PALADIN_SPELL) / sizeof(int));
			break;
		case CLASS_SHAMAN:
			learnAllSpell(player, CLASS_SHAMAN_SPELL, sizeof(CLASS_SHAMAN_SPELL) / sizeof(int));
			break;
	}
}

void learnAllSpell(Player* player, int *spells, int s)
{
	int i;
	for (i = 0; i < s; i++)
	{
		player->LearnSpell(spells[i], false);
	}
}

void addT0Set(Player* player)
{
	switch (player->getClass())
	{
	case CLASS_MAGE:
		addItemSet(player, 181);
		safeAddItem(player, 15278, 1);
		break;
	case CLASS_WARRIOR:
		addItemSet(player, 189);
		safeAddItem(player, 23139, 1);
		safeAddItem(player, 23132, 1);
		break;
	case CLASS_WARLOCK:
		addItemSet(player, 183);
		safeAddItem(player, 15278, 1);
		break;
	case CLASS_PRIEST:
		addItemSet(player, 182);
		safeAddItem(player, 13964, 1);
		safeAddItem(player, 23156, 1);
		break;
	case CLASS_DRUID:
		addItemSet(player, 185);
		safeAddItem(player, 13964, 1);
		safeAddItem(player, 23156, 1);
		break;
	case CLASS_ROGUE:
		addItemSet(player, 184);
		safeAddItem(player, 15246, 2);
		break;
	case CLASS_HUNTER:
		addItemSet(player, 186);
		safeAddItem(player, 18482, 1);
		safeAddItem(player, 6679, 1);
		break;
	case CLASS_PALADIN:
		addItemSet(player, 188);
		safeAddItem(player, 18485, 1);
		safeAddItem(player, 23132, 1);
		break;
	case CLASS_SHAMAN:
		addItemSet(player, 187);
		safeAddItem(player, 18485, 1);
		safeAddItem(player, 13964, 1); 
		safeAddItem(player, 22345, 1);
		break;
	}
}

void addNewBie(Player* player)
{
	switch (player->getClass())
	{
	case CLASS_MAGE:
		addItemList(player, ITEMS_CLOTH, sizeof(ITEMS_CLOTH) / sizeof(int));
		addItemList(player, ITEMS_STAFF, sizeof(ITEMS_STAFF) / sizeof(int));
		break;
	case CLASS_WARRIOR:
		addItemList(player, ITEMS_PLATE, sizeof(ITEMS_PLATE) / sizeof(int));
		addItemList(player, ITEMS_SHIELD, sizeof(ITEMS_SHIELD) / sizeof(int));
		break;
	case CLASS_WARLOCK:
		addItemList(player, ITEMS_CLOTH, sizeof(ITEMS_CLOTH) / sizeof(int));
		addItemList(player, ITEMS_STAFF, sizeof(ITEMS_STAFF) / sizeof(int));
		break;
	case CLASS_PRIEST:
		addItemList(player, ITEMS_CLOTH, sizeof(ITEMS_CLOTH) / sizeof(int));
		addItemList(player, ITEMS_STAFF, sizeof(ITEMS_STAFF) / sizeof(int));
		break;
	case CLASS_DRUID:
		addItemList(player, ITEMS_LEATHER, sizeof(ITEMS_LEATHER) / sizeof(int));
		addItemList(player, ITEMS_STAFF, sizeof(ITEMS_STAFF) / sizeof(int));
		break;
	case CLASS_ROGUE:
		addItemList(player, ITEMS_LEATHER, sizeof(ITEMS_LEATHER) / sizeof(int));
		addItemList(player, ITEMS_DAGGER, sizeof(ITEMS_DAGGER) / sizeof(int));
		break;
	case CLASS_HUNTER:
		addItemList(player, ITEMS_MAIL, sizeof(ITEMS_MAIL) / sizeof(int));
		addItemList(player, ITEMS_DAGGER, sizeof(ITEMS_DAGGER) / sizeof(int));
		break;
	case CLASS_PALADIN:
		addItemList(player, ITEMS_PLATE, sizeof(ITEMS_PLATE) / sizeof(int));
		addItemList(player, ITEMS_SHIELD, sizeof(ITEMS_SHIELD) / sizeof(int));
		break;
	case CLASS_SHAMAN:
		addItemList(player, ITEMS_MAIL, sizeof(ITEMS_MAIL) / sizeof(int));
		addItemList(player, ITEMS_HAMMER, sizeof(ITEMS_HAMMER) / sizeof(int));
		addItemList(player, ITEMS_TOTEM, sizeof(ITEMS_TOTEM) / sizeof(int));
		break;
	}
}

void addItemList(Player* player, int *items, int s)
{
	int i;
	for (i = 0; i < s; i++)
	{
		safeAddItem(player, items[i], 1);
	}
}

void addItemSet(Player* player, uint32 itemsetId)
{

	for (uint32 id = 0; id < sItemStorage.GetMaxEntry(); id++)
	{
		ItemPrototype const *pProto = sItemStorage.LookupEntry<ItemPrototype>(id);
		if (!pProto)
			continue;

		if (pProto->ItemSet == itemsetId)
		{
			ItemPosCountVec dest;
			InventoryResult msg = player->CanStoreNewItem(NULL_BAG, NULL_SLOT, dest, pProto->ItemId, 1);
			if (msg == EQUIP_ERR_OK)
			{
				Item* item = player->StoreNewItem(dest, pProto->ItemId, true);
				item->SetBinding(true);
				player->SendNewItem(item, 1, false, true);
			}
			else
			{
				player->SendEquipError(msg, NULL, NULL, pProto->ItemId);
				sLog.out(LOG_CHAR, "Failed add %u to user %u", pProto->ItemId, player->GetGUID());
			}
		}
	}
}

void safeAddItem(Player* player, uint32 itemId, uint32 count)
{
	ItemPosCountVec dest;
	InventoryResult msg = player->CanStoreNewItem(NULL_BAG, NULL_SLOT, dest, itemId, count);
	if (msg == EQUIP_ERR_OK)
	{
		Item* item = player->StoreNewItem(dest, itemId, true, Item::GenerateItemRandomPropertyId(itemId));
		item->SetBinding(true);
		player->SendNewItem(item, count, false, true);
	}
	else
	{
		player->SendEquipError(msg, NULL, NULL, itemId);
		sLog.out(LOG_CHAR, "Failed add %u to user %u", itemId, player->GetGUID());
	}
}


void AddSC_custom_creatures()
{
    Script *newscript;

    newscript = new Script;
    newscript->Name = "custom_teleport_npc";
    newscript->pGossipHello = &GossipHello_TeleportNPC;
    newscript->pGossipSelect = &GossipSelect_TeleportNPC;
    newscript->RegisterSelf(false);

    newscript = new Script;
    newscript->Name = "custom_enchant_npc";
    newscript->pGossipHello = &GossipHello_EnchantNPC;
    newscript->pGossipSelect = &GossipSelect_EnchantNPC;
    newscript->RegisterSelf(false);

    newscript = new Script;
    newscript->Name = "custom_professions_npc";
    newscript->pGossipHello = &GossipHello_ProfessionNPC;
    newscript->pGossipSelect = &GossipSelect_ProfessionNPC;
    newscript->RegisterSelf(false);

    newscript = new Script;
    newscript->Name = "custom_npc_training_dummy";
    newscript->GetAI = &GetAI_npc_training_dummy;
    newscript->RegisterSelf(false);

    newscript = new Script;
    newscript->Name = "custom_npc_summon_debugAI";
    newscript->GetAI = &GetAI_custom_summon_debug;
    newscript->RegisterSelf(false);

	newscript = new Script;
	newscript->Name = "custom_lhwow_npc";
	newscript->pGossipHello = &GossipHello_LHWOWNPC;
	newscript->pGossipSelect = &GossipSelect_LHWOWNPC;
	newscript->RegisterSelf(false);
}
