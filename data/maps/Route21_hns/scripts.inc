Route21_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route21_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route21_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route21_EventScript_Seth::
	trainerbattle_single TRAINER_SETH_HNS, Route21_Text_SwimmermSethSeen, Route21_Text_SwimmermSethBeaten
	msgbox Route21_Text_SwimmermSethAfterBattle, MSGBOX_AUTOCLOSE
	end

Route21_EventScript_Nikki::
	trainerbattle_single TRAINER_NIKKI_HNS, Route21_Text_SwimmerfNikkiSeen, Route21_Text_SwimmerfNikkiBeaten
	msgbox Route21_Text_SwimmerfNikkiAfterBattle, MSGBOX_AUTOCLOSE
	end

Route21_EventScript_Arnold::
	trainerbattle_single TRAINER_ARNOLD_HNS, Route21_Text_FisherArnoldSeen, Route21_Text_FisherArnoldBeaten
	msgbox Route21_Text_FisherArnoldAfterBattle, MSGBOX_AUTOCLOSE
	end

Route21_Text_SwimmermSethSeen:
	.string "{JPN}りくがみえた！まだすすまなきゃ！$"

Route21_Text_SwimmermSethBeaten:
	.string "{JPN}グルッ……$"

Route21_Text_SwimmermSethAfterBattle:
	.string "This arrogant guy was at CINNABAR's\n"
	.string "volcano.$"

Route21_Text_SwimmerfNikkiSeen:
	.string "{JPN}もしわたしがかったらひやけとめをぬ\n"
	.string "るのをてつだってね！$"

Route21_Text_SwimmerfNikkiBeaten:
	.string "{JPN}ひやけがしんぱいだ……$"

Route21_Text_SwimmerfNikkiAfterBattle:
	.string "I have to watch out for blemishes\n"
	.string "caused by the sun.$"

Route21_Text_FisherArnoldSeen:
	.string "{JPN}つりにはもうあきたよ。しょうぶしよ\n"
	.string "う！$"

Route21_Text_FisherArnoldBeaten:
	.string "{JPN}かんぜんなしっぱいだ……$"

Route21_Text_FisherArnoldAfterBattle:
	.string "I'll just go back to fishing…$"

