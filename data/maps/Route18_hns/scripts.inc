Route18_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route18_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route18_EventScript_Trigger_HideKecleon0::
	setvar VAR_TEMP_0, 1
	setflag FLAG_TEMP_1
	removeobject LOCALID_ROUTE18_KECLEON0
	end

Route18_EventScript_Trigger_HideKecleon1::
	setvar VAR_TEMP_1, 1
	setflag FLAG_TEMP_2
	removeobject LOCALID_ROUTE18_KECLEON1
	end

Route18_EventScript_Boris::
	trainerbattle_single TRAINER_BORIS_HNS, Route18_Text_BirdKeeperBorisSeen, Route18_Text_BirdKeeperBorisBeaten
	msgbox Route18_Text_BirdKeeperBorisAfterBattle, MSGBOX_AUTOCLOSE
	end

Route18_EventScript_Bob::
	trainerbattle_single TRAINER_BOB_HNS, Route18_Text_BirdKeeperBobSeen, Route18_Text_BirdKeeperBobBeaten
	msgbox Route18_Text_BirdKeeperBobAfterBattle, MSGBOX_AUTOCLOSE
	end

Route18_EventScript_Sign::
	msgbox Route18_Text_Sign, MSGBOX_SIGN
	end

Route18_Text_BirdKeeperBorisSeen:
	.string "{JPN}ポケモンをさがしているならくさむら\n"
	.string "をさがさなきゃ。$"

Route18_Text_BirdKeeperBorisBeaten:
	.string "{JPN}うわっ！$"

Route18_Text_BirdKeeperBorisAfterBattle:
	.string "Since you're so strong, it must be\n"
	.string "fun to battle.$"

Route18_Text_BirdKeeperBobSeen:
	.string "{JPN}サイクリングロードはタマムシへつづ\n"
	.string "くちかみちです。$"

Route18_Text_BirdKeeperBobBeaten:
	.string "{JPN}…ふぅ！$"

Route18_Text_BirdKeeperBobAfterBattle:
	.string "If you don't have a BICYCLE,\n"
	.string "you're not allowed to use the\l"
	.string "shortcut.$"

Route18_Text_Sign:
	.string "ROUTE 18\p"
	.string "CELADON CITY - FUCHSIA CITY$"
