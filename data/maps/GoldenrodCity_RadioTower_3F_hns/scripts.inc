GoldenrodCity_RadioTower_3F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, GoldenrodCity_RadioTower_3F_OnLoad
	.byte 0

GoldenrodCity_RadioTower_3F_OnLoad::
	call_if_set FLAG_HIDE_RADIOTOWER_GATE, GoldenrodCity_RadioTower_3F_HideGate
	end
	
GoldenrodCity_RadioTower_3F_HideGate::
	setmetatile 25, 8, 0x335, FALSE
	setmetatile 25, 9, 0x335, FALSE

	setmetatile 26, 8, 0X334, FALSE
	setmetatile 26, 9, 0X334, FALSE

	setmetatile 27, 8, 0X334, FALSE
	setmetatile 27, 9, 0X334, FALSE

	setmetatile 28, 8, 0X334, FALSE
	setmetatile 28, 9, 0X334, FALSE

	setmetatile 29, 8, 0X334, FALSE
	setmetatile 29, 9, 0X334, FALSE

	setmetatile 30, 8, 0X334, FALSE
	setmetatile 30, 9, 0X334, FALSE

	setmetatile 31, 8, 0X334, FALSE
	setmetatile 31, 9, 0X334, FALSE
	return


GoldenrodRaidoTower3_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_6_HNS, GoldenrodCity_RadioTower_3F_Text_GruntM7Seen, GoldenrodCity_RadioTower_3F_Text_GruntM7Beaten
	msgbox GoldenrodCity_RadioTower_3F_Text_GruntM7After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Grunt7::
	trainerbattle_single TRAINER_GRUNT_7_HNS, GoldenrodCity_RadioTower_3F_Text_GruntM8Seen, GoldenrodCity_RadioTower_3F_Text_GruntM8Beaten
	msgbox GoldenrodCity_RadioTower_3F_Text_GruntM8After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_8_HNS, GoldenrodCity_RadioTower_3F_Text_GruntM9Seen, GoldenrodCity_RadioTower_3F_Text_GruntM9Beaten
	msgbox GoldenrodCity_RadioTower_3F_Text_GruntM9After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Scientist::
	trainerbattle_single TRAINER_MARC_HNS, GoldenrodCity_RadioTower_3F_Text_ScientistMarcSeen, GoldenrodCity_RadioTower_3F_Text_ScientistMarcBeaten
	msgbox GoldenrodCity_RadioTower_3F_Text_ScientistMarcAfter, MSGBOX_AUTOCLOSE
	end


GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SUNNY_DAY, GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer3
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 10, GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer2

	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFPleaseSave, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer2::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFHeroGift, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TM_SUNNY_DAY
	setflag FLAG_GOT_SUNNY_DAY
	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFSunnyDay, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer3::
	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFMarvelous, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Nerd::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Gate::
	lock
	msgbox GoldenrodCity_RadioTower_3F_Text_CardKeySlot, MSGBOX_SIGN
	goto_if_set FLAG_HIDE_RADIOTOWER_GATE, GoldenrodCity_RadioTower_3F_EventScript_GateOpened
	checkitem ITEM_CARD_KEY
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_RadioTower_3F_EventScript_OpenGate
	closemessage
	release
	end


GoldenrodCity_RadioTower_3F_EventScript_GateOpened::
	msgbox GoldenrodCity_RadioTower_3F_Text_Open, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_OpenGate::
	msgbox GoldenrodCity_RadioTower_3F_Text_InsertedCardKey, MSGBOX_SIGN
	call GoldenrodCity_RadioTower_3F_HideGate
	playse SE_CLICK
	special DrawWholeMapView
	msgbox GoldenrodCity_RadioTower_3F_Text_Open, MSGBOX_SIGN
	setflag FLAG_HIDE_RADIOTOWER_GATE
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Sign1::
	lock
	msgbox GoldenrodCity_RadioTower_3F_Text_PersonnelSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Sign2::
	lock
	msgbox GoldenrodCity_RadioTower_3F_Text_PokemonMusicSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_Text_CardKeySlot:
	.string "It's the CARD KEY slot.$"

GoldenrodCity_RadioTower_3F_Text_InsertedCardKey:
	.string "{PLAYER} inserted the CARD KEY.$"
 
GoldenrodCity_RadioTower_3F_Text_Open:
	.string "The gate is open.$"

GoldenrodCity_RadioTower_3F_Text_PersonnelSign:
	.string "3F PERSONNEL$"

GoldenrodCity_RadioTower_3F_Text_PokemonMusicSign:
	.string "POKéMON MUSIC with Host DJ BEN$"

GoldenrodCity_RadioTower_3F_Text_SuperNerd:
	.string "We have recordings of the cries\n"
	.string "of all POKéMON that have been\l"
	.string "found.\p"
	.string "We must have about 400 kinds.$"

GoldenrodCity_RadioTower_3F_Text_GymGuideRockets:
	.string "To trainers, POKéMON are their\n"
	.string "beloved partners.\p"
	.string "It's terrible how TEAM ROCKET is\n"
	.string "trying to control POKéMON.$"

GoldenrodCity_RadioTower_3F_Text_GymGuide:
	.string "We run 24 hours a day to broadcast\n"
	.string "entertaining programs.\p"
	.string "I'll do my best to run around the\n"
	.string "clock too!$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFPleaseSave:
	.string "The TEAM ROCKET boss has locked\n"
	.string "himself in.\p"
	.string "But the DIRECTOR can open it.\p"
	.string "He's up on the fifth floor.\p"
	.string "Please save him!$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFDirectorSafe:
	.string "Is the DIRECTOR safe?$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFHeroGift:
	.string "Thank you! You're my hero!\p"
	.string "This is a token of my appreciation.$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFSunnyDay:
	.string "It's SUNNY DAY.\p"
	.string "It powers up fire-type moves\n"
	.string "for a while.$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFMarvelous:
	.string "You were simply marvelous!$"

GoldenrodCity_RadioTower_3F_Text_GruntM7Seen:
	.string "{JPN}げんめいをうけたんだ。\p"
	.string "ロケットだんにいどむものはだれであ\n"
	.string "れたたきのめすんだ！$"

GoldenrodCity_RadioTower_3F_Text_GruntM7Beaten:
	.string "{JPN}えっ？！$"

GoldenrodCity_RadioTower_3F_Text_GruntM7After:
	.string "{JPN}にんむにしっぱいしてしまった……\p"
	.string "アポロはきっといかるだろう……$"

GoldenrodCity_RadioTower_3F_Text_GruntM8Seen:
	.string "{JPN}ポケモンにはんざいをおかさせるよう\n"
	.string "めいれいするのはさいこうにきぶんが\l"
	.string "いい。$"

GoldenrodCity_RadioTower_3F_Text_GruntM8Beaten:
	.string "{JPN}じょうだんでしょ！$"

GoldenrodCity_RadioTower_3F_Text_GruntM8After:
	.string "{JPN}まけてきぶんさいあくだ！\p"
	.string "ちくしょう！やくたたずのポケモンな\n"
	.string "んてだいきらい！$"

GoldenrodCity_RadioTower_3F_Text_GruntM9Seen:
	.string "{JPN}なぜシャッターがひらいたの？これき\n"
	.string "みがなにかしたの？$"

GoldenrodCity_RadioTower_3F_Text_GruntM9Beaten:
	.string "{JPN}もうおしまいだ！$"

GoldenrodCity_RadioTower_3F_Text_GruntM9After:
	.string "{JPN}えっ？！ちかでまちふせしていたうち\n"
	.string "のれんちゅうをとっぱしたのか？\p"
	.string "よくもそんなことができたな！$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcSeen:
	.string "{JPN}ここにまよいこんだみしらぬこども？\p"
	.string "きみはだれ？$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcBeaten:
	.string "{JPN}ちっ！おまえをあまくみてたな！$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcAfter:
	.string "{JPN}ブワハハハ……\p"
	.string "ここからならひつようなだけきょうり\n"
	.string "ょくなしんごうをそうしんできる。$"

