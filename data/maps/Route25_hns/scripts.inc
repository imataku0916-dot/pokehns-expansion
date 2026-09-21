Route25_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_MapScript_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route25_MapScript_OnTransition::
	callnative SetTimeBasedEncounters
	goto_if_eq VAR_SUICUNE_ENCOUNTERS, 7, Route25_EventScript_SetSuicuneSceneMid
	end

Route25_EventScript_SetSuicuneSceneMid::
	setobjectxyperm LOCALID_ROUTE25_EUSINE, 98, 14
	end

Route25_EventScript_MistyRematch::
    lock
    faceplayer
    msgbox Route25_Text_Misty, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_CAPE_MISTY
    removeobject LOCALID_CAPE_MISTY
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_MISTY
    release
    end

Route25_Text_Misty:
    .string "MISTY: I love the sunset here!\n"
	.string "It gives me the courage to go on,\l"
	.string "you know?\p"
	.string "Right!\p"
	.string "If you're ready for a real splash,\n"
	.string "meet me at the FIGHTING DOJO!$"

Route25_EventScript_Dudley::
	trainerbattle_single TRAINER_DUDLEY_HNS, Route25_Text_SchoolboyDudleySeen, Route25_Text_SchoolboyDudleyBeaten
	msgbox Route25_Text_SchoolboyDudleyAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Ellen::
	trainerbattle_single TRAINER_ELLEN_HNS, Route25_Text_LassEllenSeen, Route25_Text_LassEllenBeaten
	msgbox Route25_Text_LassEllenAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Joe::
	trainerbattle_single TRAINER_JOE_HNS, Route25_Text_SchoolboyJoeSeen, Route25_Text_SchoolboyJoeBeaten
	msgbox Route25_Text_SchoolboyJoeAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA_HNS, Route25_Text_LassLauraSeen, Route25_Text_LassLauraBeaten
	msgbox Route25_Text_LassLauraAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Lloyd::
	trainerbattle_single TRAINER_LLOYD_HNS, Route25_Text_CamperLloydSeen, Route25_Text_CamperLloydBeaten
	msgbox Route25_Text_CamperLloydAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Shannon::
	trainerbattle_single TRAINER_SHANNON_HNS, Route25_Text_LassShannonSeen, Route25_Text_LassShannonBeaten
	msgbox Route25_Text_LassShannonAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Pat::
	trainerbattle_single TRAINER_PAT_HNS, Route25_Text_SupernerdPatSeen, Route25_Text_SupernerdPatBeaten
	msgbox Route25_Text_SupernerdPatAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Kevin::
	lock
	faceplayer
	goto_if_set FLAG_ROUTE25_GOT_NUGGET, Route25_EventScript_KevinAfter
	msgbox Route25_Text_CooltrainerKevinNugget, MSGBOX_DEFAULT
	giveitem ITEM_BIG_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_ROUTE25_GOT_NUGGET
	msgbox Route25_Text_CooltrainerKevinSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_KEVIN_HNS, Route25_Text_CooltrainerKevinBeaten
	msgbox Route25_Text_CooltrainerKevinAfter, MSGBOX_DEFAULT
	closemessage
	release
	end
Route25_EventScript_KevinAfter::
	msgbox Route25_Text_CooltrainerKevinAfter, MSGBOX_NPC
	end

Route25_EventScript_BillsHouseSign::
	msgbox Route25_Text_BillsHouseSign, MSGBOX_SIGN
	end

Route25_Trigger_MistyRight::
	lock
	turnobject LOCALID_ROUTE25_MISTY, DIR_SOUTH
	delay 40
	turnobject LOCALID_ROUTE25_MAN, DIR_SOUTH
	playse SE_PIN
	applymovement2 LOCALID_ROUTE25_MAN, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_ROUTE25_MAN
	applymovement2 LOCALID_ROUTE25_MAN, Route25_Movement_ManLeaveRight
	waitmovement 0
	applymovement2 LOCALID_ROUTE25_MISTY, Route25_Movement_MistyWalkToPlayerRight
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	goto Route25_EventScript_Misty
Route25_Trigger_MistyLeft::
	lock
	turnobject LOCALID_ROUTE25_MISTY, DIR_SOUTH
	delay 40
	turnobject LOCALID_ROUTE25_MAN, DIR_SOUTH
	playse SE_PIN
	applymovement2 LOCALID_ROUTE25_MAN, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_ROUTE25_MAN
	applymovement2 LOCALID_ROUTE25_MAN, Route25_Movement_ManLeaveLeft
	waitmovement 0
	applymovement2 LOCALID_ROUTE25_MISTY, Route25_Movement_MistyWalkToPlayerLeft
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto Route25_EventScript_Misty
Route25_EventScript_Misty::
	msgbox Route25_Text_MistyDate, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_ROUTE25_MISTY, Route25_Movement_MistyLeave
	waitmovement 0
	removeobject LOCALID_ROUTE25_MISTY
	removeobject LOCALID_ROUTE25_MAN
	setflag FLAG_HIDE_ROUTE25_MISTY
	clearflag FLAG_HIDE_CERULEAN_GYM_TRAINERS
	setflag FLAG_HIDE_CERULEAN_GYM_POKEMON
	setvar VAR_CERULEAN_CITY_STATE, 3
	release
	end

Route25_Trigger_SuicuneLeft::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE25_SUICUNE, Route25_Movement_Suicune1
	playse SE_LEDGE
	waitse
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route25_Movement_WalkToSuicune
	waitmovement 0
	goto Route25_EventScript_SuicuneMerge
Route25_Trigger_SuicuneRight::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE25_SUICUNE, Route25_Movement_Suicune1
	playse SE_LEDGE
	waitse
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route25_Movement_WalkToSuicune
	waitmovement 0
	goto Route25_EventScript_SuicuneMerge
Route25_EventScript_SuicuneMerge::
	clearflag FLAG_HIDE_ROUTE25_EUSINE
	addobject LOCALID_ROUTE25_EUSINE
	applymovement LOCALID_ROUTE25_EUSINE, Route25_Movement_EusineEnter
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	msgbox Route25_Text_Eusine1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE25_EUSINE, Route25_Movement_EusineSide
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox Route25_Text_Eusine2, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SUICUNE_ENCOUNTERS, 7
	release
	end
	
Route25_Trigger_SuicuneRightRight::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	goto Route25_Trigger_SuicuneRight
Route25_Trigger_SuicuneLeftLeft::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	goto Route25_Trigger_SuicuneLeft

Route25_Text_Eusine1:
	.string "EUSINE: Puff, puff...\n"
	.string "I am... no match for you.\p"
	.string "...As I predicted.\n"
	.string "..........................\l"
	.string "... Go ahead.\p"
	.string "Since I met you in the BURNED TOWER\n"
	.string "at ECRUTEAK CITY, I've sort of\l"
	.string "known that SUICUNE would choose\l"
	.string "you.$"

Route25_Text_Eusine2:
	.string "Take a look at it!\p"
	.string "SUICUNE is waiting for you!\n"
	.string "It has been waiting for a battle\l"
	.string "with a worthy trainer to whom it\l"
	.string "can entrust itself.$"

Route25_Text_Eusine3:
	.string "{PLAYER}...\n"
	.string "You two are truly amazing...\p"
	.string "I have never seen a battle this\n"
	.string "intense!\l"
	.string "I have no regrets...\p"
	.string "Farewell, SUICUNE!\n"
	.string "Farewell... {PLAYER}!$"

Route25_EventScript_Eusine::
	msgbox Route25_Text_Eusine2, MSGBOX_NPC
	end

Route25_EventScript_Suicune::
	lock
	faceplayer
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE25_SUICUNE, Route25_Movement_Suicune1
	playse SE_LEDGE
	waitse
	waitmovement 0
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	seteventmon SPECIES_SUICUNE, 50
	special BattleSetup_StartLegendaryBattle
	waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route25_EventScript_SuicuneRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ROUTE25_SUICUNE
	setflag FLAG_HIDE_ROUTE25_SUICUNE
	fadescreenswapbuffers FADE_FROM_BLACK
	goto_if_ge VAR_SUICUNE_ENCOUNTERS, 8, Route25_EventScript_SuicunePostGame
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 99, Route25_AdjustPlayer
	call_if_eq VAR_TEMP_0, 100, Route25_AdjustPlayerTwice
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	turnobject LOCALID_ROUTE25_EUSINE, DIR_NORTH
	msgbox Route25_Text_Eusine3, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_ROUTE25_EUSINE, Route25_Movement_EusineLeave
	waitmovement 0
	removeobject LOCALID_ROUTE25_EUSINE
	setflag FLAG_HIDE_ROUTE25_EUSINE
	clearflag FLAG_HIDE_CELADON_EUSINE
	setvar VAR_SUICUNE_ENCOUNTERS, 8
	release
	end

Route25_EventScript_SuicuneRan::
	release
	end

Route25_AdjustPlayer::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	return

Route25_AdjustPlayerTwice::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	return

Route25_EventScript_SuicunePostGame::
	release
	end

Route25_Movement_EusineLeave:
	walk_down
	walk_down
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Route25_Movement_EusineSide:
	walk_slow_left
	walk_slow_up
	step_end

Route25_Movement_EusineEnter:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_slow_up
	step_end

Route25_Movement_Suicune1:
	jump_in_place_down
	step_end

Route25_Movement_WalkToSuicune:
	walk_up
	walk_up
	step_end

Route25_Movement_MistyLeave:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route25_Movement_ManLeaveRight:
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end
Route25_Movement_ManLeaveLeft:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route25_Movement_MistyWalkToPlayerRight:
	walk_fast_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	face_right
	step_end
Route25_Movement_MistyWalkToPlayerLeft:
	walk_fast_left
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end

Route25_Text_MistyDate:
	.string "MISTY: Aww! Why did you have to\n"
	.string "show up and bug us now?\p"
	.string "Do you know what they call\n"
	.string "people like you?\p"
	.string "Pests! You heard me right,\n"
	.string "pest!\p"
	.string "…\p"
	.string "…Oh? Those BADGES you have…\n"
	.string "Are they JOHTO GYM BADGES?\p"
	.string "If you have eight, you must be\n"
	.string "good.\p"
	.string "OK, then. Come to CERULEAN GYM.\p"
	.string "I'll be happy to take you on.\p"
	.string "I'm MISTY, the GYM LEADER in\n"
	.string "CERULEAN.$"

Route25_Text_SchoolboyDudleySeen:
	.string "{JPN}わたしたちトレーナー6にんをたおし\n"
	.string "てごうかなしょうひんをかちとろう！\p"
	.string "かてるじしんはある？$"

Route25_Text_SchoolboyDudleyBeaten:
	.string "{JPN}わあ！いいね。$"

Route25_Text_SchoolboyDudleyAfter:
	.string "{JPN}せいいっぱいやった。こうかいはない\n"
	.string "。$"

Route25_Text_LassEllenSeen:
	.string "{JPN}わたしが2ばんめだ。さあほんきだぞ\n"
	.string "！$"

Route25_Text_LassEllenBeaten:
	.string "{JPN}どうしてまけたんだ？$"

Route25_Text_LassEllenAfter:
	.string "{JPN}せいいっぱいやった。こうかいはない\n"
	.string "。$"

Route25_Text_SchoolboyJoeSeen:
	.string "{JPN}さあ3ばんだ！そうかんたんにはかた\n"
	.string "せないぞ。$"

Route25_Text_SchoolboyJoeBeaten:
	.string "{JPN}うわっ！ふみつぶされた！$"

Route25_Text_SchoolboyJoeAfter:
	.string "{JPN}せいいっぱいやった。こうかいはない\n"
	.string "。$"

Route25_Text_LassLauraSeen:
	.string "{JPN}わたしは4ばんだ！つかれてきた？$"

Route25_Text_LassLauraBeaten:
	.string "{JPN}わたしもまけたよ……$"

Route25_Text_LassLauraAfter:
	.string "{JPN}せいいっぱいやった。こうかいはない\n"
	.string "。$"

Route25_Text_CamperLloydSeen:
	.string "{JPN}りょうかい！おれは5ばんだ。ぶっつ\n"
	.string "ぶしてやる！$"

Route25_Text_CamperLloydBeaten:
	.string "{JPN}うわっ！おおすぎだ。$"

Route25_Text_CamperLloydAfter:
	.string "{JPN}せいいっぱいやった。こうかいはない\n"
	.string "。$"

Route25_Text_LassShannonSeen:
	.string "{JPN}わたしはつらのさいこうびだけどいっ\n"
	.string "ておくよわたしはタフなんだ！$"

Route25_Text_LassShannonBeaten:
	.string "{JPN}じょうだんでしょ。$"

Route25_Text_LassShannonAfter:
	.string "{JPN}せいいっぱいやった。こうかいはない\n"
	.string "。$"

Route25_Text_SupernerdPatSeen:
	.string "{JPN}ムフフフ…\p"
	.string "シックスパックのトレーナーたちとは\n"
	.string "わたしにはなんのかんけいもない。\p"
	.string "きみがかずかずのしょうぶでつかれは\n"
	.string "てるのをまってここでたおそうとおも\l"
	.string "っていたんだ。$"

Route25_Text_SupernerdPatBeaten:
	.string "{JPN}ぜんぜんつかれてないの？$"

Route25_Text_SupernerdPatAfter:
	.string "{JPN}ごめん……もうカンニングはしないよ\n"
	.string "……$"

Route25_Text_CooltrainerKevinNugget:
	.string "You took on one more battle than\n"
	.string "you expected, but you won\l"
	.string "anyway.\p"
	.string "As promised, you win a prize.$"

Route25_Text_CooltrainerKevinSeen:
	.string "But after seeing how you battle,\n"
	.string "I want to see how I'll fare.\p"
	.string "How about it? Let me take you\n"
	.string "on.$"

Route25_Text_CooltrainerKevinBeaten:
	.string "{JPN}こんなにたのしいしょうぶははじめて\n"
	.string "だ！$"

Route25_Text_CooltrainerKevinAfter:
	.string "{JPN}すばらしいしょうぶでした！\p"
	.string "あなたとあなたのポケモンはほんとう\n"
	.string "にすばらしいですね！$"

Route25_Text_BillsHouseSign:
	.string "SEA COTTAGE\n"
	.string "BILL'S HOUSE$"

