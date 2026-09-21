Route9_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route9_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route9_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route9_EventScript_Dean::
	trainerbattle_single TRAINER_DEAN_HNS, Route9_Text_CamperDeanSeen, Route9_Text_CamperDeanBeaten
	msgbox Route9_Text_CamperDeanAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Heidi::
	trainerbattle_single TRAINER_HEIDI_HNS, Route9_Text_PicnickerHeidiSeen, Route9_Text_PicnickerHeidiBeaten
	msgbox Route9_Text_PicnickerHeidiAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Edna::
	trainerbattle_single TRAINER_EDNA_HNS, Route9_Text_PicnickerEdnaSeen, Route9_Text_PicnickerEdnaBeaten
	msgbox Route9_Text_PicnickerEdnaAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Sid::
	trainerbattle_single TRAINER_SID_HNS, Route9_Text_CamperSidSeen, Route9_Text_CamperSidBeaten
	msgbox Route9_Text_CamperSidAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Tim::
	trainerbattle_single TRAINER_TIM_HNS, Route9_Text_HikerTimSeen, Route9_Text_HikerTimBeaten
	msgbox Route9_Text_HikerTimAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Sidney::
	trainerbattle_single TRAINER_SIDNEY_HNS, Route9_Text_HikerSidneySeen, Route9_Text_HikerSidneyBeaten
	msgbox Route9_Text_HikerSidneyAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Sign::
	msgbox Route9_Text_Sign, MSGBOX_SIGN
	end

Route9_EventScript_Item_Flash_Cannon::
    finditem ITEM_TM_FLASH_CANNON
    end

Route9_Text_CamperDeanSeen:
	.string "{JPN}イワヤマトンネルをたんけんしにきま\n"
	.string "した。$"

Route9_Text_CamperDeanBeaten:
	.string "{JPN}うわっ！あぶないぞおい。$"

Route9_Text_CamperDeanAfter:
	.string "{JPN}イワヤマトンネルにはいるまえからポ\n"
	.string "ケモンがきずついてしまった。\p"
	.string "すぐポケモンセンターへつれていった\n"
	.string "ほうがいいな。$"

Route9_Text_PicnickerHeidiSeen:
	.string "{JPN}ピクニックにいったことある？\p"
	.string "すごくたのしいよ！$"

Route9_Text_PicnickerHeidiBeaten:
	.string "{JPN}おぉぉっ！$"

Route9_Text_PicnickerHeidiAfter:
	.string "{JPN}わたしたちはたくさんのおかしをやい\n"
	.string "てみんなにくばっています。\p"
	.string "とってもおいしいですよ！$"

Route9_Text_CamperSidSeen:
	.string "{JPN}おいそこのきみ！ゴミをすてないで！$"

Route9_Text_CamperSidBeaten:
	.string "{JPN}ただしてきしただけなんだけど……$"

Route9_Text_CamperSidAfter:
	.string "{JPN}すみません。あなたがゴミをすててい\n"
	.string "たわけじゃありません。わたしのまち\l"
	.string "がいでした。$"

Route9_Text_PicnickerEdnaSeen:
	.string "{JPN}にんはゴミをほうちしてはいけません\n"
	.string "。$"

Route9_Text_PicnickerEdnaBeaten:
	.string "{JPN}うわっ…まけた…$"

Route9_Text_PicnickerEdnaAfter:
	.string "{JPN}しょうえねはじゅうようですがかんき\n"
	.string "ょうほごはそれいじょうにじゅうよう\l"
	.string "です。$"

Route9_Text_HikerTimSeen:
	.string "{JPN}かのじょがくるときはシロガネやまの\n"
	.string "あたりにくるはず…\p"
	.string "シロガネやまってジョウトちほうにあ\n"
	.string "るよね？$"

Route9_Text_HikerTimBeaten:
	.string "{JPN}うたっているのにいそがしくて……$"

Route9_Text_HikerTimAfter:
	.string "{JPN}しょうぶにはしゅうちゅうりょくがひ\n"
	.string "つようだ。$"

Route9_Text_HikerSidneySeen:
	.string "{JPN}ひみつをおしえてあげるよ。\p"
	.string "でもそのまえにしょうぶだ！$"

Route9_Text_HikerSidneyBeaten:
	.string "{JPN}おっとしまった！あれをなくしちゃっ\n"
	.string "た……$"

Route9_Text_HikerSidneyAfter:
	.string "{JPN}はつでんしょはちいさなかわをはさん\n"
	.string "だむこうがわにある。$"

Route9_Text_Sign:
	.string "ROUTE 9\p"
	.string "CERULEAN CITY - ROCK TUNNEL$"
