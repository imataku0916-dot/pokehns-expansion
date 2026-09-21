Route32_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route32_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route32_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route32_EventScript_FisherJustin::
	trainerbattle_single TRAINER_JUSTIN_HNS, Route32_Text_FisherJustin_Seen, Route32_Text_FisherJustin_Beaten
	msgbox Route32_Text_FisherJustin_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_FisherRalph::
	trainerbattle_single TRAINER_RALPH_HNS, Route32_Text_FisherRalph1_Seen, Route32_Text_FisherRalph1_Beaten, Route32_EventScript_RegisterRalph
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route32_EventScript_RematchRalph
	msgbox Route32_Text_FisherRalph1_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_RegisterRalph::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route32_Text_RalphRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_RALPH_HNS
	release
	end

Route32_EventScript_RematchRalph::
	trainerbattle_rematch TRAINER_RALPH_HNS, Route32_Text_RalphRematchIntro, Route32_Text_RalphRematchDefeat
	msgbox Route32_Text_RalphPostRematch, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_FisherHenry::
	trainerbattle_single TRAINER_HENRY_HNS, Route32_Text_FisherHenry_Seen, Route32_Text_FisherHenry_Beaten
	msgbox Route32_Text_FisherHenry_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_YoungsterAlbert::
	trainerbattle_single TRAINER_ALBERT_HNS, Route32_Text_YoungsterAlbert_Seen, Route32_Text_YoungsterAlbert_Beaten
	msgbox Route32_Text_YoungsterAlbert_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_YoungsterGordon::
	trainerbattle_single TRAINER_GORDON_HNS, Route32_Text_YoungsterGordon_Seen, Route32_Text_YoungsterGordon_Beaten
	msgbox Route32_Text_YoungsterGordon_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_CamperRoland::
	trainerbattle_single TRAINER_ROLAND_HNS, Route32_Text_CamperRoland_Seen, Route32_Text_CamperRoland_Beaten
	msgbox Route32_Text_CamperRoland_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_PicnickerLiz::
	trainerbattle_single TRAINER_LIZ_HNS, Route32_Text_PicnickerLiz1_Seen, Route32_Text_PicnickerLiz1_Beaten, Route32_EventScript_RegisterLiz
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route32_EventScript_RematchLiz
	msgbox Route32_Text_PicnickerLiz1_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_RegisterLiz::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route32_Text_LizRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_LIZ_HNS
	release
	end

Route32_EventScript_RematchLiz::
	trainerbattle_rematch TRAINER_LIZ_HNS, Route32_Text_LizRematchIntro, Route32_Text_LizRematchDefeat
	msgbox Route32_Text_LizPostRematch, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_BirdkeeperPeter::
	trainerbattle_single TRAINER_PETER_HNS, Route32_Text_BirdKeeperPeter_Seen, Route32_Text_BirdKeeperPeter_Beaten
	msgbox Route32_Text_BirdKeeperPeter_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_Roar::
	lock
	faceplayer
	checkitem ITEM_TM_ROAR
	goto_if_eq VAR_RESULT, TRUE, Route32_EventScript_Roar2
	msgbox Route32_Text_RoarIntro, MSGBOX_DEFAULT
	giveitem ITEM_TM_ROAR
	msgbox Route32_Text_RoarOutro, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_EventScript_Roar2::
	msgbox Route32_Text_RoarOutro, MSGBOX_DEFAULT
	closemessage
	release
	end

Route32_EventScript_SlowpokeTail_TriggerLeft::
	lock
	turnobject LOCALID_SLOWPOKETAIL_MAN, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	playse SE_PIN
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_SLOWPOKETAIL_MAN
	applymovement LOCALID_SLOWPOKETAIL_MAN, Route32_Movement_SlowpokeLeft
	waitmovement 0
	goto Route32_EventScript_SlowpokeTail_Trigger

Route32_EventScript_SlowpokeTail_TriggerMid::
	lock
	turnobject LOCALID_SLOWPOKETAIL_MAN, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	playse SE_PIN
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_SLOWPOKETAIL_MAN
	applymovement LOCALID_SLOWPOKETAIL_MAN, Route32_Movement_SlowpokeMid
	waitmovement 0
	goto Route32_EventScript_SlowpokeTail_Trigger

Route32_EventScript_SlowpokeTail_TriggerRight::
	lock
	turnobject LOCALID_SLOWPOKETAIL_MAN, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	playse SE_PIN
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_SLOWPOKETAIL_MAN
	applymovement LOCALID_SLOWPOKETAIL_MAN, Route32_Movement_SlowpokeRight
	waitmovement 0
	goto Route32_EventScript_SlowpokeTail_Trigger

Route32_EventScript_SlowpokeTail_Trigger::
	msgbox Route32_Text_SlowpokeTailOffer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route32_EventScript_SlowpokeTail_Trigger2
	msgbox Route32_Text_RefusedSlowpokeTail, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SLOWPOKE_TAIL, 1
	release
	end	
Route32_EventScript_SlowpokeTail_Trigger2::
	msgbox Route32_Text_ThoughtKidsLoaded, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 16, Route32_EventScript_Movement_Left
	call_if_eq VAR_TEMP_0, 17, 	Route32_EventScript_Movement_Right
	setvar VAR_SLOWPOKE_TAIL, 1
	release
	end

Route32_EventScript_Movement_Left::
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_WalkLeft1
	waitmovement 0
	turnobject LOCALID_SLOWPOKETAIL_MAN, DIR_EAST
	return 

Route32_EventScript_Movement_Right::
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_WalkLeft1
	waitmovement 0
	turnobject LOCALID_SLOWPOKETAIL_MAN, DIR_EAST
	return 	

Route32_EventScript_SlowpokeTail::
	lock
	faceplayer
	msgbox Route32_Text_SlowpokeTailOffer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route32_EventScript_SlowpokeTail2
	msgbox Route32_Text_RefusedSlowpokeTail, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_EventScript_SlowpokeTail2::
	msgbox Route32_Text_ThoughtKidsLoaded, MSGBOX_DEFAULT
	closemessage
	release
	end


Route32_EventScript_Frieda::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POISON_BARB, Route32_EventScript_FriedaCompleted
	msgbox Route32_Text_MeetFrieda, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, Route32_EventScript_FriedaNope
	case 1, Route32_EventScript_FriedaNope
	case 2, Route32_EventScript_FriedaNope
	case 3, Route32_EventScript_FriedaNope
	case 4, Route32_EventScript_FriedaNope
	case 5, Route32_EventScript_FriedaYes
	case 6, Route32_EventScript_FriedaNope
	case 7, Route32_EventScript_FriedaCancel
	case MULTI_B_PRESSED, Route32_EventScript_FriedaCancel
	closemessage
	release
	end
Route32_EventScript_FriedaYes::
	msgbox Route32_Text_FriedaGivesGift, MSGBOX_DEFAULT
	giveitem ITEM_POISON_BARB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_POISON_BARB
	msgbox Route32_Text_FriedaGaveGift, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_EventScript_FriedaNope::
	msgbox Route32_Text_FriedaNope, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_EventScript_FriedaCancel::
	closemessage
	release
	end
Route32_EventScript_FriedaCompleted::
	msgbox Route32_Text_FriedaFriday, MSGBOX_DEFAULT
	closemessage
	release
	end

Route32_EventScript_BaldingMan::
	lock
	faceplayer
	msgbox Route32_Text_CooltrainerM_Experiences, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_ROUTE32_BALDINGMAN, DIR_EAST
	release
	end

Route32_EventScript_BaldingManTriggerLeft::
	lock
	playse SE_PIN
	applymovement LOCALID_ROUTE32_BALDINGMAN, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_ROUTE32_BALDINGMAN
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	goto Route32_EventScript_BaldingManCheck
	end
Route32_EventScript_BaldingManTriggerMid::
	lock
	playse SE_PIN
	applymovement LOCALID_ROUTE32_BALDINGMAN, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_ROUTE32_BALDINGMAN
	applymovement OBJ_EVENT_ID_PLAYER, Route32_Movement_StartMid
	waitmovement 0
	goto Route32_EventScript_BaldingManCheck
	end
Route32_EventScript_BaldingManTriggerRight::
	lock
	playse SE_PIN
	applymovement LOCALID_ROUTE32_BALDINGMAN, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_ROUTE32_BALDINGMAN
	applymovement OBJ_EVENT_ID_PLAYER, Route32_Movment_StartRight
	waitmovement 0
	goto Route32_EventScript_BaldingManCheck
	end
Route32_EventScript_BaldingManCheck::
	goto_if_unset FLAG_HIDE_SPROUT_TOWER_SILVER, Route32_EventScript_BaldingManTower
	goto_if_unset FLAG_DEFEATED_VIOLET_GYM, Route32_EventScript_BaldingManGym
	goto_if_unset FLAG_RECEIVED_TOGEPI_EGG, Route32_EventScript_BaldingManEgg
	msgbox Route32_Text_CooltrainerM_HaveThisSeed, MSGBOX_DEFAULT
	giveitem ITEM_MIRACLE_SEED
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setvar VAR_VIOLET_CITY_STATE, 5
	release
	end
Route32_EventScript_BaldingManTower::
	msgbox Route32_Text_CooltrainerM_WhatsTheHurry, MSGBOX_DEFAULT
	msgbox Route32_Text_CooltrainerM_SproutTower, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route32_Movement_Turnback
	waitmovement 0
	release
	end
Route32_EventScript_BaldingManGym::
	msgbox Route32_Text_CooltrainerM_WhatsTheHurry, MSGBOX_DEFAULT
	msgbox Route32_Text_CooltrainerM_VioletGym, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route32_Movement_Turnback
	waitmovement 0
	release
	end
Route32_EventScript_BaldingManEgg::
	msgbox Route32_Text_CooltrainerM_WhatsTheHurry, MSGBOX_DEFAULT
	msgbox Route32_Text_CooltrainerM_AideIsWaiting, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route32_Movement_Turnback
	waitmovement 0
	release
	end

Route32_EventScript_Item_Bullet_Seed::
    finditem ITEM_TM_BULLET_SEED
    end
	
Route32_EventScript_GreatBall::
	finditem ITEM_GREAT_BALL
	end
Route32_EventScript_GreatBallII::
	finditem ITEM_GREAT_BALL
	end
Route32_EventScript_SuperPotion::
	finditem ITEM_SUPER_POTION
	end

Route32_EventScript_Sign1::
	lock
	msgbox Route32_Text_Sign1, MSGBOX_SIGN
	closemessage
	release
	end

Route32_EventScript_Sign2::
	lock
	msgbox Route32_Text_Sign2, MSGBOX_SIGN
	closemessage
	release
	end

Route32_EventScript_Sign3::
	lock
	msgbox Route32_Text_Sign3, MSGBOX_SIGN
	closemessage
	release
	end

Route32_Movement_Turnback:
	walk_up
	step_end

Route32_Movement_StartMid:
	walk_left
	step_end

Route32_Movment_StartRight:
	walk_left
	walk_left
	step_end

Route32_Movement_SlowpokeLeft::
	step_end

Route32_Movement_SlowpokeMid::
	walk_right
	step_end

Route32_Movement_SlowpokeRight::
	walk_right
	walk_right
	step_end

Route32_Text_CooltrainerM_WhatsTheHurry:
	.string "Wait up!\n"
	.string "What's the hurry?$"

Route32_Text_CooltrainerM_AideIsWaiting:
	.string "{PLAYER}, right?\n"
	.string "Some guy wearing glasses\p"
	.string "was looking for you.\p"
	.string "See for yourself. He's waiting for\n"
	.string "you at the POKéMON CENTER.$"

Route32_Text_CooltrainerM_SproutTower:
	.string "Have you gone to SPROUT TOWER?\n"
	.string "If you ever visit VIOLET CITY,\p"
	.string "they'll expect you to train there.\n"
	.string "That's basic for trainers.\p"
	.string "Go to SPROUT TOWER!$"

Route32_Text_CooltrainerM_VioletGym:
	.string "Have you gone to the POKéMON GYM?\n"
	.string "You can test your POKéMON and\p"
	.string "yourself there.\n"
	.string "It's a rite of passage for all\p"
	.string "trainers!$"

Route32_Text_CooltrainerM_HaveThisSeed:
	.string "You have some good POKéMON there.\n"
	.string "It must be from the training you\p"
	.string "gave them around VIOLET CITY.\n"
	.string "The training at the GYM must have\p"
	.string "been especially helpful. As a\n"
	.string "souvenir of VIOLET CITY, take this.\p"
	.string "It increases the power of GRASS-\n"
	.string "type moves.$"

Route32_Text_CooltrainerM_Experiences:
	.string "Your experiences in VIOLET CITY\n"
	.string "should be useful for your journey.$"

Route32_Text_SlowpokeTailOffer:
	.string "How would you like to have this\n"
	.string "tasty, nutritious SLOWPOKETAIL?\p"
	.string "For you right now, just\n"
	.string "¥1,000,000!\p"
	.string "You'll want this!$"

Route32_Text_ThoughtKidsLoaded:
	.string "Tch! I thought kids\n"
	.string "these days were loaded…$"

Route32_Text_RefusedSlowpokeTail:
	.string "You don't want it?\n"
	.string "Then scram. Shoo!$"

Route32_Text_FisherJustin_Seen:
	.string "{JPN}うわっ！\p"
	.string "おまえのせいでさかなをのがしちゃっ\n"
	.string "たじゃないか！$"

Route32_Text_FisherJustin_Beaten:
	.string "{JPN}ドボーン！$"

Route32_Text_FisherJustin_After:
	.string "{JPN}おだやかでおちついて……つりもポケ\n"
	.string "モンもそのほんしつはおなじだ。$"

Route32_Text_FisherRalph1_Seen:
	.string "{JPN}つりもポケモンもどっちもちょうとく\n"
	.string "いなんだ。\p"
	.string "ガキなんかにまけるわけないだろ！$"

Route32_Text_FisherRalph1_Beaten:
	.string "{JPN}ちっ！あせりすぎたか……$"

Route32_Text_FisherRalph1_After:
	.string "{JPN}つりはいっしょうのたのしみだ。\p"
	.string "ポケモンはいっしょうのともだちだ！$"

Route32_Text_RalphRegister:
	.string "Fishing is a lifelong\n"
	.string "passion.\p"
	.string "POKéMON are lifelong friends!$"

Route32_Text_RalphRematchIntro:
	.string "{JPN}つりもポケモンもどっちもちょうとく\n"
	.string "いなんだ。\p"
	.string "ガキごときにはまけるわけないだろ！$"

Route32_Text_RalphRematchDefeat:
	.string "{JPN}ちっ！あせりすぎたか……$"

Route32_Text_RalphPostRematch:
	.string "Fishing is a lifelong\n"
	.string "passion.\p"
	.string "POKéMON are lifelong friends!$"

Route32_Text_FisherHenry_Seen:
	.string "{JPN}ぼくのポケモン？ついさっきつかまえ\n"
	.string "たばかりだよ！$"

Route32_Text_FisherHenry_Beaten:
	.string "{JPN}はねる！？$"

Route32_Text_FisherHenry_After:
	.string "{JPN}つかまえたばかりのポケモンはきちん\n"
	.string "とそだてられたポケモンにはかなわな\l"
	.string "い。$"

Route32_Text_YoungsterAlbert_Seen:
	.string "{JPN}ここらへんできみをみかけたことない\n"
	.string "な。だからじぶんはけっこうタフだと\l"
	.string "おもってるのか？$"

Route32_Text_YoungsterAlbert_Beaten:
	.string "{JPN}きみつよいな！$"

Route32_Text_YoungsterAlbert_After:
	.string "{JPN}おきにいりのポケモンたちといっしょ\n"
	.string "にさいきょうをめざしてみるよ。\p"
	.string "みんなとおなじようなつよそうなポケ\n"
	.string "モンはつかわないんだ。$"

Route32_Text_YoungsterGordon_Seen:
	.string "{JPN}くさむらですてきなポケモンをみつけ\n"
	.string "たよ！\p"
	.string "きっとわたしのためにやってくれると\n"
	.string "おもう！$"

Route32_Text_YoungsterGordon_Beaten:
	.string "{JPN}くそっ。かてるとおもったのに。$"

Route32_Text_YoungsterGordon_After:
	.string "{JPN}くさむらにはべたつくものがたくさん\n"
	.string "ある。$"

Route32_Text_CamperRoland_Seen:
	.string "{JPN}あのしせん……なんだかきになってし\n"
	.string "まう。$"

Route32_Text_CamperRoland_Beaten:
	.string "{JPN}うーん。ざんねんだ。$"

Route32_Text_CamperRoland_After:
	.string "{JPN}たたかいたくないならただめをあわせ\n"
	.string "ないようにすればいい。$"

Route32_Text_PicnickerLiz1_Seen:
	.string "{JPN}うん。そうでね……\p"
	.string "え？しょうぶ？いまでんわちゅうなん\n"
	.string "だけど。ああわかった。でもてみじか\l"
	.string "にしてね。$"

Route32_Text_PicnickerLiz1_Beaten:
	.string "{JPN}もう！このくやしさを\n"
	.string "どこかではらさなきゃ！$"

Route32_Text_PicnickerLiz1_After:
	.string "{JPN}わたしもたのしくおしゃべりしてたん\n"
	.string "だけどね。$"

Route32_Text_LizRegister:
	.string "I was having a nice chat too.$"

Route32_Text_LizRematchIntro:
	.string "{JPN}うん。そうでね……\p"
	.string "え？しょうぶ？いまでんわちゅうなん\n"
	.string "だ。ああわかった。でもてみじかにし\l"
	.string "てね。$"

Route32_Text_LizRematchDefeat:
	.string "{JPN}もう！このくやしさを\n"
	.string "どこかではらさなきゃ！$"

Route32_Text_LizPostRematch:
	.string "I was having a nice chat too.$"

Route32_Text_BirdKeeperPeter_Seen:
	.string "{JPN}あのバッジ！キキョウシティのやつだ\n"
	.string "！ハヤトにかったのか？$"

Route32_Text_BirdKeeperPeter_Beaten:
	.string "{JPN}じぶんのよわさがわかったよ。$"

Route32_Text_BirdKeeperPeter_After:
	.string "{JPN}キキョウシティのジムでまたトレーニ\n"
	.string "ングをすべきだ。$"

Route32_Text_RoarIntro:
	.string "WROOOOAR! PEOPLE RUN WHEN I\n"
	.string "ROAR! BUT YOU CAME LOOKING!\p"
	.string "THAT PLEASES ME! NOW TAKE THIS!$"

Route32_Text_RoarOutro:
	.string "WROOOOAR! IT'S ROAR!\p"
	.string "EVEN POKéMON RUN FROM A GOOD\n"
	.string "ROAR!$"

Route32_Text_MeetFrieda:
	.string "FRIEDA: Yahoo!\p"
	.string "I'm FRIEDA of the WEEKDAY FAMILY!\n"
	.string "Nice to meet you!\p"
	.string "If you can guess my favorite day,\n"
	.string "I'll give you a reward.$"

Route32_Text_FriedaGivesGift:
	.string "Here's a POISON BARB for you!$"

Route32_Text_FriedaGaveGift:
	.string "FRIEDA: Give it to a POKéMON\n"
	.string "that has POISON-type moves.\p"
	.string "Oh!\p"
	.string "It's wicked!\p"
	.string "You'll be shocked how good it\n"
	.string "makes poison moves!$"

Route32_Text_FriedaFriday:
	.string "FRIEDA: Hiya! What day do\n"
	.string "you like?\p"
	.string "I love Friday. No doubt about\n"
	.string "it!\p"
	.string "Don't you think it's great too?$"

Route32_Text_FriedaNope:
	.string "FRIEDA: Not that one!$"

Route32_Text_Sign1:
	.string "ROUTE 32\p"
	.string "VIOLET CITY - AZALEA TOWN$"

Route32_Text_Sign2:
	.string "RUINS OF ALPH\n"
	.string "EAST ENTRANCE$"

Route32_Text_Sign3:
	.string "UNION CAVE\n"
	.string "AHEAD$"
