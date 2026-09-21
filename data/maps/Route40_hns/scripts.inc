Route40_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route40_MapScript_OnTransition
	.byte 0

Route40_MapScript_OnTransition::
	callnative SetTimeBasedEncounters
	goto_if_ge VAR_OLIVINE_CITY_STATE, 5, Route40_MapScript_ClearWeather
	end

Route40_MapScript_ClearWeather::
	setweather WEATHER_NONE
	end

Route40_EventScript_Simon::
	trainerbattle_single TRAINER_SIMON_HNS, Route40_Text_SwimmermSimonSeen, Route40_Text_SwimmermSimonBeaten
	msgbox Route40_Text_SwimmermSimonAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmermSimonSeen:
	.string "{JPN}みずにいるまえにはウォームアップを\n"
	.string "しなきゃ。\p"
	.string "それはきほんだよ。$"

Route40_Text_SwimmermSimonBeaten:
	.string "{JPN}わかった！おじさん！こうさんだ！$"

Route40_Text_SwimmermSimonAfter:
	.string "{JPN}タンバシティはここからかなりはなれ\n"
	.string "ています。$"

Route40_EventScript_Randall::
	trainerbattle_single TRAINER_RANDALL_HNS, Route40_Text_SwimmermRandallSeen, Route40_Text_SwimmermRandallBeaten
	msgbox Route40_Text_SwimmermRandallAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmermRandallSeen:
	.string "{JPN}ねえきみわかくてけんこうそうね！\p"
	.string "ポケモンにのってはいけないよ！およ\n"
	.string "いで！$"

Route40_Text_SwimmermRandallBeaten:
	.string "{JPN}しまった。まけてしまった……$"

Route40_Text_SwimmermRandallAfter:
	.string "{JPN}すいえいはぜんしんのうんどうになり\n"
	.string "ます。けんこうによいですよ。$"

Route40_EventScript_Elaine::
	trainerbattle_single TRAINER_ELAINE_HNS, Route40_Text_SwimmerfElaineSeen, Route40_Text_SwimmerfElaineBeaten
	msgbox Route40_Text_SwimmerfElaineAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmerfElaineSeen:
	.string "{JPN}タンバにいくの？\p"
	.string "まずはさっとしょうぶでもどう？$"

Route40_Text_SwimmerfElaineBeaten:
	.string "{JPN}あれまけた！$"

Route40_Text_SwimmerfElaineAfter:
	.string "{JPN}わたしのほうがきみよりおよぎがうま\n"
	.string "いとおもうよ。そうだね！$"

Route40_EventScript_Paula::
	trainerbattle_single TRAINER_PAULA_HNS, Route40_Text_SwimmerfPaulaSeen, Route40_Text_SwimmerfPaulaBeaten
	msgbox Route40_Text_SwimmerfPaulaAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmerfPaulaSeen:
	.string "{JPN}うきわなんていらないよ。\p"
	.string "うみのポケモンにしがみついてるんだ\n"
	.string "！$"

Route40_Text_SwimmerfPaulaBeaten:
	.string "{JPN}うわっめまいがする！$"

Route40_Text_SwimmerfPaulaAfter:
	.string "{JPN}こうしてただよっているとなみにみを\n"
	.string "まかせてながされていく。$"

Route40_EventScript_Woman1::
	lock
	faceplayer
	msgbox Route40_Text_Lass1, MSGBOX_DEFAULT
	closemessage
	release
	end

Route40_Text_Lass1:
	.string "Although you can't see it from here,\n"
	.string "CIANWOOD is across the sea.$"

Route40_EventScript_Woman2::
	lock
	faceplayer
	msgbox Route40_Text_Lass2, MSGBOX_DEFAULT
	closemessage
	release
	end

Route40_Text_Lass2:
	.string "I came to OLIVINE by ship to see\n"
	.string "the sights and soak up the\l"
	.string "atmosphere.\p"
	.string "Being a port, it feels so\n"
	.string "different from a big city.$"

Route40_EventScript_Youngster::
	lock
	faceplayer
	msgbox Route40_Text_StandingYoungster, MSGBOX_DEFAULT
	closemessage
	release
	end

Route40_Text_StandingYoungster:
	.string "Have you gone to the TRAINER\n"
	.string "HILL?\p"
	.string "I think a lot of tough trainers\n"
	.string "have gathered there already.\p"
	.string "But since you have so many BADGES\n"
	.string "you shouldn't do badly at all.$"

Route40_Text_Monica:
	.string "MONICA: Glad to meet you.\n"
	.string "I'm MONICA of the WEEKDAY FAMILY.\p"
	.string "I bet you can't guess my favorite\n"
	.string "day of the week!$"

Route40_Text_MonicaGivesGift:
	.string "That's right!\p"
	.string "As a token of our friendship,\n"
	.string "I have a gift for you!$"

Route40_Text_MonicaGaveGift:
	.string "MONICA: It's an item that raises\n"
	.string "the power of FLYING-type moves.\p"
	.string "You should equip a bird\n"
	.string "POKéMON with that item.$"

Route40_Text_MonicaMonday:
	.string "MONICA: My brothers and\n"
	.string "sisters are all over the place.\p"
	.string "See if you could find\n"
	.string "them all!$"

Route40_Text_MonicaNotMonday:
	.string "MONICA: I don't think today\n"
	.string "is Monday. How sad…$"

Route40_Text_MonicaNope:
	.string "Not that one.$"

Rotue40_EventScript_Monica::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SHARP_BEAK, Rotue40_EventScript_MonicaCompleted
	msgbox Route40_Text_Monica, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, Rotue40_EventScript_MonicaNope
	case 1, Rotue40_EventScript_MonicaYes
	case 2, Rotue40_EventScript_MonicaNope
	case 3, Rotue40_EventScript_MonicaNope
	case 4, Rotue40_EventScript_MonicaNope
	case 5, Rotue40_EventScript_MonicaNope
	case 6, Rotue40_EventScript_MonicaNope
	case 7 Rotue40_EventScript_MonicaCancel
	case MULTI_B_PRESSED, Rotue40_EventScript_MonicaCancel
	closemessage
	release
	end
Rotue40_EventScript_MonicaYes::
	msgbox Route40_Text_MonicaGivesGift, MSGBOX_DEFAULT
	giveitem ITEM_SHARP_BEAK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_SHARP_BEAK
	msgbox Route40_Text_MonicaGaveGift, MSGBOX_DEFAULT
	closemessage
	release
	end
Rotue40_EventScript_MonicaNope::
	msgbox Route40_Text_MonicaNope, MSGBOX_DEFAULT
	closemessage
	release
	end
Rotue40_EventScript_MonicaCancel::
	closemessage
	release
	end
Rotue40_EventScript_MonicaCompleted::
	msgbox Route40_Text_MonicaMonday, MSGBOX_DEFAULT
	closemessage
	release
	end
