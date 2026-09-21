Route38_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route38_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route38_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route38_EventScript_Toby::
	trainerbattle_single TRAINER_TOBY_HNS, Route38_Text_BirdKeeperTobySeen, Route38_Text_BirdKeeperTobyBeaten
	msgbox Route38_Text_BirdKeeperTobyAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Chad::
	trainerbattle_single TRAINER_CHAD_HNS, Route38_Text_SchoolboyChad1Seen, Route38_Text_SchoolboyChad1Beaten, Route38_EventScript_RegisterChad
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route38_EventScript_RematchChad
	msgbox Route38_Text_SchoolboyChadAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_RegisterChad::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route38_Text_ChadRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CHAD_HNS
	release
	end

Route38_EventScript_RematchChad::
	trainerbattle_rematch TRAINER_CHAD_HNS, Route38_Text_ChadRematchIntro, Route38_Text_ChadRematchDefeat
	msgbox Route38_Text_ChadPostRematch, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Dana::
	trainerbattle_single TRAINER_DANA_HNS, Route38_Text_LassDana1Seen, Route38_Text_LassDana1Beaten, Route38_EventScript_RegisterDana
	goto_if_set FLAG_DANA_HAS_ITEM_HNS, Route38_EventScript_DanaGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route38_EventScript_RematchDana
	msgbox Route38_Text_LassDanaAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_RegisterDana::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route38_Text_DanaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DANA_HNS
	release
	end

Route38_EventScript_RematchDana::
	trainerbattle_rematch TRAINER_DANA_HNS, Route38_Text_DanaRematchIntro, Route38_Text_DanaRematchDefeat
	msgbox Route38_Text_DanaPostRematch, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_DanaGiveItem::
	msgbox Route38_Text_DanaHasItem, MSGBOX_DEFAULT
	giveitem VAR_DANA_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route38_EventScript_DanaNoRoom
	clearflag FLAG_DANA_HAS_ITEM_HNS
	msgbox Route38_Text_DanaGaveItem, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_DanaNoRoom::
	msgbox Route38_Text_DanaNoRoom, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Valerie::
	trainerbattle_single TRAINER_VALERIE_HNS, Route38_Text_BeautyValerieSeen, Route38_Text_BeautyValerieBeaten
	msgbox Route38_Text_BeautyValerieAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Harry::
	trainerbattle_single TRAINER_HARRY_HNS, Route38_Text_SailorHarrySeen, Route38_Text_SailorHarryBeaten
	msgbox Route38_Text_SailorHarryAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Olivia::
	trainerbattle_single TRAINER_OLIVIA_HNS, Route38_Text_BeautyOliviaSeen, Route38_Text_BeautyOliviaBeaten
	msgbox Route38_Text_BeautyOliviaAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Sign1::
	lock
	msgbox Route38_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route38_EventScript_Sign2::
	lock
	msgbox Route38_Text_WaterSign, MSGBOX_SIGN
	closemessage
	release
	end

Route38_EventScript_Item_LaxIncense::
	finditem ITEM_LAX_INCENSE
	end

Route38_Text_BirdKeeperTobySeen:
	.string "{JPN}いとしいとりのポケモンよおおぞらへ\n"
	.string "たかくとびたっていけ！$"

Route38_Text_BirdKeeperTobyBeaten:
	.string "{JPN}いまただとびさってしまいたいきぶん\n"
	.string "だ。$"

Route38_Text_BirdKeeperTobyAfter:
	.string "{JPN}タンバシティでトレーニングをしてじ\n"
	.string "ぶんのポケモンにそらをとぶをおしえ\l"
	.string "ようとおもっています。$"

Route38_Text_SchoolboyChad1Seen:
	.string "{JPN}きょうまなんだことをためしてみよう\n"
	.string "。$"

Route38_Text_SchoolboyChad1Beaten:
	.string "{JPN}やっぱりべんきょうがたりなかったん\n"
	.string "だな。$"

Route38_Text_SchoolboyChadAfter:
	.string "I have to take so many\n"
	.string "tests, I don't have much\l"
	.string "time for POKéMON.\p"
	.string "So when I do get to play,\n"
	.string "I really concentrate.$"

Route38_Text_ChadRegister:
	.string "I have to take so many\n"
	.string "tests, I don't have much\l"
	.string "time for POKéMON.\p"
	.string "So when I do get to play,\n"
	.string "I really concentrate.$"

Route38_Text_ChadRematchIntro:
	.string "{JPN}きょうならったことをためしてみよう\n"
	.string "。$"

Route38_Text_ChadRematchDefeat:
	.string "{JPN}やっぱりべんきょうがたりなかったん\n"
	.string "だな。$"

Route38_Text_ChadPostRematch:
	.string "I have to take so many\n"
	.string "tests, I don't have much\l"
	.string "time for POKéMON.\p"
	.string "So when I do get to play,\n"
	.string "I really concentrate.$"

Route38_Text_LassDana1Seen:
	.string "{JPN}きみポケモンがとくいみたいだね。\p"
	.string "もしそうならちょっとアドバイスをく\n"
	.string "れないかな？$"

Route38_Text_LassDana1Beaten:
	.string "{JPN}なるほど。そういうたたかいほうもあ\n"
	.string "るんですね。$"

Route38_Text_LassDanaAfter:
	.string "I know something good!\p"
	.string "MOOMOO FARM's milk is\n"
	.string "famous for its flavor.$"

Route38_Text_BeautyValerieSeen:
	.string "{JPN}やあ！なんてかわいいトレーナーなん\n"
	.string "だ！\p"
	.string "ポケモンをちょっとみせてくれない？$"

Route38_Text_BeautyValerieBeaten:
	.string "{JPN}きみのポケモンをみられてよかったよ\n"
	.string "！$"

Route38_Text_BeautyValerieAfter:
	.string "{JPN}ポケモンをみるとなんだかこころがお\n"
	.string "ちつくきがする。$"

Route38_Text_SailorHarrySeen:
	.string "{JPN}かいがいにいたことがあるからいろん\n"
	.string "なポケモンをしってるんだ！$"

Route38_Text_SailorHarryBeaten:
	.string "{JPN}きみのうでまえはせかいレベルだ！$"

Route38_Text_SailorHarryAfter:
	.string "{JPN}せかいじゅうのあらゆるひとびとがポ\n"
	.string "ケモンとともにしあわせにくらしてい\l"
	.string "ます。$"

Route38_Text_BeautyOliviaSeen:
	.string "{JPN}わたしとわたしのポケモンすてきだと\n"
	.string "おもわない？$"

Route38_Text_BeautyOliviaBeaten:
	.string "{JPN}わたしたちはまいにちムームーミルク\n"
	.string "をのんでいます。$"

Route38_Text_BeautyOliviaAfter:
	.string "{JPN}ムームーミルクはびようとけんこうに\n"
	.string "よいのですが\p"
	.string "ざんねんながらいちどに1ほんしかう\n"
	.string "っていません。$"

Route38_Text_Sign:
	.string "ROUTE 38\p"
	.string "OLIVINE CITY - ECRUTEAK CITY$"

Route38_Text_TrainerTips:
	.string "TRAINER TIPS\p"
	.string "If a POKéMON is trying to\n"
	.string "evolve, you can stop it.\p"
	.string "Press the B Button during\n"
	.string "evolution to cancel it.\p"
	.string "That startles the POKéMON\n"
	.string "and stops its evolution.$"


Route38_Text_WaterSign:
	.string "NO SWIMMING OR FISHING.\n"
	.string "WATER FOR FARMING ONLY.\p"
	.string "-ECRUTEAK COUNCIL$"

Route38_Text_DanaRegister:
	.string "I know something good!\p"
	.string "MOOMOO FARM's milk is\n"
	.string "famous for its flavor.$"

Route38_Text_DanaRematchIntro:
	.string "{JPN}きみポケモンがとくいみたいだね。\p"
	.string "もしそうならちょっとアドバイスをく\n"
	.string "れないかな？$"

Route38_Text_DanaRematchDefeat:
	.string "{JPN}なるほど。そういうたたかいほうもあ\n"
	.string "るんだね。$"

Route38_Text_DanaPostRematch:
	.string "I know something good!\p"
	.string "MOOMOO FARM's milk is\n"
	.string "famous for its flavor.$"

Route38_Text_DanaHasItem:
	.string "Hey! I found something\n"
	.string "interesting!\p"
	.string "Here, you can have it!$"

Route38_Text_DanaGaveItem:
	.string "I'll let you know if I find\n"
	.string "anything else!$"

Route38_Text_DanaNoRoom:
	.string "Hmm, your BAG is full.\p"
	.string "Come back when you have room.$"
