Route3_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route3_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route3_EventScript_Otis::
	trainerbattle_single TRAINER_OTIS_HNS, Route3_Text_FirebreatherOtis_Seen, Route3_Text_FirebreatherOtis_Beaten
	msgbox Route3_Text_FirebreatherOtis_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Warren::
	trainerbattle_single TRAINER_WARREN_HNS, Route3_Text_YoungsterWarren_Seen, Route3_Text_YoungsterWarren_Beaten
	msgbox Route3_Text_YoungsterWarren_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Jimmy::
	trainerbattle_single TRAINER_JIMMY_HNS, Route3_Text_YoungsterJimmy_Seen, Route3_Text_YoungsterJimmy_Beaten
	msgbox Route3_Text_YoungsterJimmy_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Burt::
	trainerbattle_single TRAINER_BURT_HNS, Route3_Text_FirebreatherBurt_Seen, Route3_Text_FirebreatherBurt_Beaten
	msgbox Route3_Text_FirebreatherBurt_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Sign::
	msgbox Route3_Text_MtMoonSquareSign, MSGBOX_SIGN
	end

Route3_Text_FirebreatherOtis_Seen:
	.string "{JPN}ああ！あいかわらずいいてんきだね。$"

Route3_Text_FirebreatherOtis_Beaten:
	.string "{JPN}はれているのにびしょぬれだ……$"

Route3_Text_FirebreatherOtis_AfterBattle:
	.string "When it rains, it's hard to get\n"
	.string "ignition…$"

Route3_Text_YoungsterWarren_Seen:
	.string "{JPN}うーん……どうしようかな……$"

Route3_Text_YoungsterWarren_Beaten:
	.string "{JPN}まけるってわかってた……$"

Route3_Text_YoungsterWarren_AfterBattle:
	.string "You looked strong.\p"
	.string "I was afraid to take you on…$"

Route3_Text_YoungsterJimmy_Seen:
	.string "{JPN}かぜのようにはしれるよ！$"

Route3_Text_YoungsterJimmy_Beaten:
	.string "{JPN}びっくりした！$"

Route3_Text_YoungsterJimmy_AfterBattle:
	.string "I wear shorts the whole year round.\p"
	.string "That's my fashion policy.$"

Route3_Text_FirebreatherBurt_Seen:
	.string "{JPN}さあぜひごらんになってみてください\n"
	.string "！$"

Route3_Text_FirebreatherBurt_Beaten:
	.string "{JPN}うわっ！あつい！$"

Route3_Text_FirebreatherBurt_AfterBattle:
	.string "The greatest fire-breather in KANTO,\n"
	.string "that's me.\p"
	.string "But not the best trainer…$"

Route3_Text_MtMoonSquareSign:
	.string "MT.MOON SQUARE\p"
	.string "Just go up the stairs.$"

