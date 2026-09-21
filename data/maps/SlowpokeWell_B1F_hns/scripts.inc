SlowpokeWell_B1F_hns_MapScripts::
	.byte 0

SlowpokeWell_B1F_EventScript_Item_Super_Potion_1::
	finditem ITEM_SUPER_POTION
	end

SlowpokeWell_B1F_EventScript_Item_Super_Potion_2::
	finditem ITEM_SUPER_POTION
	end

SlowpokeWell_B1F_EventScript_Item_Great_Ball::
	finditem ITEM_GREAT_BALL
	end

SlowpokeWell_B1F_EventScript_Item_Full_Heal::
	finditem ITEM_FULL_HEAL
	end

SlowpokeWell_B1F_EventScript_Kurt::
	lock
	msgbox SlowpokeWell_B1F_Text_KurtIntro, MSGBOX_DEFAULT
	closemessage
	end

SlowpokeWell_B1F_EventScript_Grunt21::
	trainerbattle_single TRAINER_GRUNT_21_HNS, SlowpokeWell_B1F_Text_GruntM29Seen, SlowpokeWell_B1F_Text_GruntM29Beaten
	msgbox SlowpokeWell_B1F_Text_GruntM29After, MSGBOX_AUTOCLOSE
	end

SlowpokeWell_B1F_EventScript_Grunt22F::
	trainerbattle_single TRAINER_GRUNT_22_HNS, SlowpokeWell_B1F_Text_GruntF1Seen, SlowpokeWell_B1F_Text_GruntF1Beaten
	msgbox SlowpokeWell_B1F_Text_GruntF1After, MSGBOX_AUTOCLOSE
	end

SlowpokeWell_B1F_EventScript_Eto::
	trainerbattle_single TRAINER_ETO_HNS, SlowpokeWell_B1F_Text_GruntM2Seen, SlowpokeWell_B1F_Text_GruntM2Beaten
	msgbox SlowpokeWell_B1F_Text_GruntM2After, MSGBOX_AUTOCLOSE
	end

SlowpokeWell_B1F_EventScript_Proton::
	lock
	faceplayer
	msgbox SlowpokeWell_B1F_Text_ProtonSeen, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_PROTON_1_HNS, SlowpokeWell_B1F_Text_ProtonBeaten
	msgbox SlowpokeWell_B1F_Text_ProtonAfter, MSGBOX_AUTOCLOSE
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_AZALEA_TOWN_ROCKETS
	clearflag FLAG_HIDE_KURT_1
	addobject LOCALID_WELL_KURT
	removeobject 11
	removeobject 12
	removeobject 13
	delay 120
	fadescreen FADE_FROM_BLACK
	special DrawWholeMapView
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	applymovement LOCALID_WELL_KURT, SlowpokeWell_B1F_Movement_Kurt
	waitmovement 0
	msgbox SlowpokeWell_B1F_Text_KurtAfter, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_SLOWPOKE_WELL_KURT
	setflag FLAG_HIDE_KURT_1
	clearflag FLAG_HIDE_KURT_2
	clearflag FLAG_HIDE_AZALEA_TOWN_SLOWPOKE
	setvar VAR_AZALEA_TOWN_STATE, 3
	warp MAP_AZALEA_TOWN_KURTS_HOUSE_HNS, 15, 4
	waitstate
	end

SlowpokeWell_B1F_Movement_Kurt:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

SlowpokeWell_B1F_Text_KurtIntro:
	.string "KURT: Hey there, {PLAYER}!\p"
	.string "The guard up top took off when\n"
	.string "I shouted at him.\p"
	.string "But then I took a tumble down\n"
	.string "the WELL.\p"
	.string "I slammed down hard on my back,\n"
	.string "so I can't move.\p"
	.string "Rats! If I were fit, my POKéMON\n"
	.string "would've punished them…\p"
	.string "Ah, it can't be helped.\p"
	.string "{PLAYER}, show them how gutsy\n"
	.string "you are in my place!$"

SlowpokeWell_B1F_Text_KurtAfter:
	.string "KURT: Way to go, {PLAYER}!\p"
	.string "TEAM ROCKET has taken off.\p"
	.string "My back's better too.\n"
	.string "Let's get out of here.$"

SlowpokeWell_B1F_Text_GruntM29Seen:
	.string "{JPN}ちっ！ちょうじょうでみはりをしてい\n"
	.string "たらあるおいぼれがおれにどなりつけ\l"
	.string "てきたんだ。\p"
	.string "そのこえにびっくりしてここへおちて\n"
	.string "きちゃったよ。\p"
	.string "そのいかりをおまえになぎたおしてや\n"
	.string "る！$"

SlowpokeWell_B1F_Text_GruntM29Beaten:
	.string "{JPN}うわっ！こんにちはほんとうにさいあ\n"
	.string "くだ！$"

SlowpokeWell_B1F_Text_GruntM29After:
	.string "{JPN}ああそうさ。おれたちはヤドンのしっ\n"
	.string "ぽをきりとってうってるんだ。\p"
	.string "おれたちのやることはすべてきんのた\n"
	.string "めさ。\p"
	.string "そのとおり！おれたちはロケットだん\n"
	.string "だ。きんのためならなんでもやるぜ！$"

SlowpokeWell_B1F_Text_ProtonSeen:
	.string "What do you want?\p"
	.string "If you interrupt our work,\n"
	.string "don't expect any mercy!$"

SlowpokeWell_B1F_Text_ProtonBeaten:
	.string "{JPN}きょうはこれくらいにしてやる。\n"
	.string "つぎはそうはいかないぞ！$"

SlowpokeWell_B1F_Text_ProtonAfter:
	.string "{JPN}ああロケットだんは3ねんまえにかい\n"
	.string "さんしたんだ。\p"
	.string "ボスはせんぷくなかだ。\p"
	.string "だがおれたちはちかでかつどうをつづ\n"
	.string "けてきた！\p"
	.string "おまえのようなちっぽけなしょうがい\n"
	.string "などおれたちのにんむにとってたいし\l"
	.string "たもんだいにはならない。\p"
	.string "これからおこることにしんそこおそれ\n"
	.string "るがいい！$"

SlowpokeWell_B1F_Text_GruntM2Seen:
	.string "{JPN}へっへっへ！ヤドンのしっぽをとるな\n"
	.string "だと？\p"
	.string "おかしなことをいうやつだ！おまえの\n"
	.string "いうことをきいたらロケットだんのな\l"
	.string "にがのこる！$"

SlowpokeWell_B1F_Text_GruntM2Beaten:
	.string "{JPN}ヒュッ……つよすぎる……$"

SlowpokeWell_B1F_Text_GruntM2After:
	.string "{JPN}おかねはひつようだけどヤドンのしっ\n"
	.string "ぽをうるなんて？\p"
	.string "ロケットだんのぞうひょうってほんと\n"
	.string "うにたいへんなんだ！$"

SlowpokeWell_B1F_Text_GruntF1Seen:
	.string "{JPN}しっぽをとるのをやめろだと？\p"
	.string "だったらわたしたちをぜんいんたおし\n"
	.string "てみろ！$"

SlowpokeWell_B1F_Text_GruntF1Beaten:
	.string "{JPN}このクソガキめ！$"

SlowpokeWell_B1F_Text_GruntF1After:
	.string "{JPN}ヤドンのしっぽはすぐにはえる！\p"
	.string "それをうってなにがわるいんだ？$"

SlowpokeWell_B1F_Text_SlowpokeWithMail:
	.string "A SLOWPOKE with its TAIL cut off…\p"
	.string "Huh? It has MAIL.\n"
	.string "Read it?$"

SlowpokeWell_B1F_Text_SlowpokeMail:
	.string "{PLAYER} read the MAIL.\p"
	.string "Be good and look after the\n"
	.string "house with Grandpa and SLOWPOKE.\p"
	.string "Love, Dad$"

SlowpokeWell_B1F_Text_TaillessSlowpoke:
	.string "A SLOWPOKE with its TAIL cut off…$"
