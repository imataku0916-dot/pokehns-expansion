Route27_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route27_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route27_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route27_EventScript_BaobaCall::
	setspeaker Route27_Text_BaobaName
	pokenavcall BlackthornCity_Text_BaobaCall
	waitmessage
	delay 30
	setflag FLAG_SAFARI_ZONE_WEST_EXPANSION
    setvar VAR_ROUTE27_BAOBA_CALL, 1
	end

Route27_Text_BaobaName:
	.string "BAOBA$"

Route27_EventScript_FirstSteps::
    lock
    playse SE_PIN
    setflag FLAG_VISITED_KANTO
    applymovement2 LOCALID_ROUTE27_FATMAN, Common_Movement_ExclamationMark
    turnobject LOCALID_ROUTE27_FATMAN, DIR_WEST
    delay 30
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_1, 24, Route27_EventScript_FirstStepsWalkTop
    call_if_eq VAR_TEMP_1, 25, Route27_EventScript_FirstStepsWalkBot

    msgbox Route27_Text_FisherHey, MSGBOX_DEFAULT
    msgbox Route27_Text_FisherMessage, MSGBOX_DEFAULT
    closemessage
    turnobject LOCALID_ROUTE27_FATMAN, DIR_SOUTH

    @integrated flagheap
    setflag FLAG_HIDE_VICTORY_ROAD_SILVER
    setflag FLAG_HIDE_INDIGO_PLATEAU_SILVER
    setflag FLAG_HIDE_INDIGO_PLATEAU_MARY_OAK
    
    clearflag FLAG_GOT_TM_SANDSTORM
    clearflag FLAG_INDIGOJUNCTION_HIDE_SILVER_GUARD
    clearflag FLAG_INDIGOJUNCTION_HIDE_KANTO_GUARD

    setvar VAR_ROUTE27_STATE, 1
    release
    end

Route27_EventScript_FirstStepsWalkTop::
    applymovement2 LOCALID_ROUTE27_FATMAN, Route27_Movement_WalkTop
    waitmovement 0
    return
Route27_EventScript_FirstStepsWalkBot::
    applymovement2 LOCALID_ROUTE27_FATMAN, Route27_Movement_WalkBot
    waitmovement 0
    return

Route27_Movement_WalkTop:
    face_left
    walk_left
    step_end

Route27_Movement_WalkBot:
    walk_down
    walk_left
    step_end

Route27_EventScript_Item_Moonstone::
    finditem ITEM_MOON_STONE
    end

Route27_EventScript_Item_RareCandy::
    finditem ITEM_RARE_CANDY
    end

Route27_EventScript_Item_DragonClaw::
    finditem ITEM_TM_DRAGON_CLAW
    end

Route27_EventScript_Item_Destiny_Knot::
    finditem ITEM_DESTINY_KNOT
    end

Route27_EventScript_Fatman::
    msgbox Route27_Text_FisherMessage, MSGBOX_NPC
    end

Route27_EventScript_Blake::
	trainerbattle_single TRAINER_BLAKE_HNS, Route27_Text_CooltrainermBlakeSeen, Route27_Text_CooltrainermBlakeBeaten
	msgbox Route27_Text_CooltrainermBlakeAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Brian::
	trainerbattle_single TRAINER_BRIAN_HNS, Route27_Text_CooltrainermBrianSeen, Route27_Text_CooltrainermBrianBeaten
	msgbox Route27_Text_CooltrainermBrianAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Reena::
	trainerbattle_single TRAINER_REENA_HNS, Route27_Text_CooltrainerfReenaSeen, Route27_Text_CooltrainerfReenaBeaten, Route27_EventScript_RegisterReena
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route27_EventScript_RematchReena
	msgbox Route27_Text_CooltrainerfReenaAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_RegisterReena::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route27_Text_ReenaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_REENA_HNS
	release
	end

Route27_EventScript_RematchReena::
	trainerbattle_rematch TRAINER_REENA_HNS, Route27_Text_ReenaRematchIntro, Route27_Text_ReenaRematchDefeat
	msgbox Route27_Text_ReenaPostRematch, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Megan::
	trainerbattle_single TRAINER_MEGAN_HNS, Route27_Text_CooltrainerfMeganSeen, Route27_Text_CooltrainerfMeganBeaten
	msgbox Route27_Text_CooltrainerfMeganAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Gilbert::
	trainerbattle_single TRAINER_GILBERT_HNS, Route27_Text_PsychicGilbertSeen, Route27_Text_PsychicGilbertBeaten
	msgbox Route27_Text_PsychicGilbertAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Jose::
	trainerbattle_single TRAINER_JOSE_HNS, Route27_Text_BirdKeeperJoseSeen, Route27_Text_BirdKeeperJoseBeaten, Route27_EventScript_RegisterJose
	goto_if_set FLAG_JOSE_HAS_ITEM_HNS, Route27_EventScript_JoseGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route27_EventScript_RematchJose
	msgbox Route27_Text_BirdKeeperJoseAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_RegisterJose::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route27_Text_JoseRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JOSE_HNS
	release
	end

Route27_EventScript_RematchJose::
	trainerbattle_rematch TRAINER_JOSE_HNS, Route27_Text_JoseRematchIntro, Route27_Text_JoseRematchDefeat
	msgbox Route27_Text_JosePostRematch, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_JoseGiveItem::
	msgbox Route27_Text_JoseHasItem, MSGBOX_DEFAULT
	giveitem VAR_JOSE_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route27_EventScript_JoseNoRoom
	clearflag FLAG_JOSE_HAS_ITEM_HNS
	msgbox Route27_Text_JoseGaveItem, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_JoseNoRoom::
	msgbox Route27_Text_JoseNoRoom, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Scott::
	trainerbattle_single TRAINER_SCOTT_HNS, Route27_Text_FisherScottSeen, Route27_Text_FisherScottBeaten
	msgbox Route27_Text_FisherScottAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_TohjoFallsSign::
    msgbox TohjoFalls_Text_Sign, MSGBOX_SIGN
    end

Route27_Text_FisherHey:
    .string "Hey!$"

Route27_Text_FisherMessage:
    .string "Do you know what you just did?\p"
    .string "You've taken your first step into\n"
    .string "KANTO.\p"
    .string "Check your POKéGEAR MAP and see.$"

Route27_Text_CooltrainermBlakeSeen:
    .string "{JPN}かなりつよそうだな。しょうぶさせて\n"
    .string "くれ！$"

Route27_Text_CooltrainermBlakeBeaten:
    .string "{JPN}やっほー！$"

Route27_Text_CooltrainermBlakeAfter:
    .string "{JPN}このかこくなたびをのりきればしんじ\n"
    .string "つがあきらかになる！\p"
    .string "へへごめんただカッコいいことをいっ\n"
    .string "てみたかっただけなんだ。$"

Route27_Text_CooltrainermBrianSeen:
    .string "{JPN}ん？きみうまいね？$"

Route27_Text_CooltrainermBrianBeaten:
    .string "{JPN}やっぱりね！$"

Route27_Text_CooltrainermBrianAfter:
    .string "{JPN}まされたトレーナーはほかのまされた\n"
    .string "トレーナーをみわけることができる。$"

Route27_Text_CooltrainerfReenaSeen:
    .string "{JPN}このあたりのやせいのポケモンをあま\n"
    .string "くみてはいけない。$"

Route27_Text_CooltrainerfReenaBeaten:
    .string "{JPN}おっと！きみつよすぎるよ！$"

Route27_Text_CooltrainerfReenaAfter:
    .string "{JPN}きみはまだこどもだけどだからといっ\n"
    .string "てあなどることはできないよ。$"

Route27_Text_ReenaRegister:
    .string "You're just a kid, but you're not\n"
    .string "to be underestimated either.$"

Route27_Text_ReenaRematchIntro:
    .string "{JPN}このあたりのやせいのポケモンをあま\n"
    .string "くみてはいけない。$"

Route27_Text_ReenaRematchDefeat:
    .string "{JPN}おっと！きみつよすぎるよ！$"

Route27_Text_ReenaPostRematch:
    .string "You're just a kid, but you're not\n"
    .string "to be underestimated either.$"

Route27_Text_CooltrainerfMeganSeen:
    .string "{JPN}ここにくるにんはめったにいないね。\p"
    .string "ひとりでトレーニングしてるの？$"

Route27_Text_CooltrainerfMeganBeaten:
    .string "{JPN}おっ！きみすごくつよいね！$"

Route27_Text_CooltrainerfMeganAfter:
    .string "{JPN}しんかまえとしんかのちのポケモンを\n"
    .string "チェックしているんだ。\p"
    .string "しんかするとポケモンはほんとうにつ\n"
    .string "よくなるね。\p"
    .string "でもしんかかたちもあとでわざをおぼ\n"
    .string "えるんだ。$"

Route27_Text_PsychicGilbertSeen:
    .string "{JPN}なにもいうな！\p"
    .string "きみがなにをかんがえているかあてて\n"
    .string "みよう。\p"
    .string "うーん……\p"
    .string "わかった！きみはポケモンリーグのち\n"
    .string "ょうせんちゅうなんだね！$"

Route27_Text_PsychicGilbertBeaten:
    .string "{JPN}もうあなたってほんとうに！$"

Route27_Text_PsychicGilbertAfter:
    .string "{JPN}そのうでまえならリーグでもきっとか\n"
    .string "つやくできるよ。\p"
    .string "わたしのよかんがそういっている。$"

Route27_Text_BirdKeeperJoseSeen:
    .string "{JPN}チュン！チュン！テチュン！$"

Route27_Text_BirdKeeperJoseBeaten:
    .string "{JPN}ツイート！$"

Route27_Text_BirdKeeperJoseAfter:
    .string "{JPN}わたしのようなバードキーパーはポケ\n"
    .string "モンのしじをだすためにとりのなきご\l"
    .string "えをまねします。$"

Route27_Text_JoseRegister:
    .string "BIRD KEEPERS like me mimic bird\n"
    .string "whistles to command POKéMON.$"

Route27_Text_JoseRematchIntro:
    .string "{JPN}チュン！チュン！チュンチュン！$"

Route27_Text_JoseRematchDefeat:
    .string "{JPN}ツイート！$"

Route27_Text_JosePostRematch:
    .string "BIRD KEEPERS like me mimic bird\n"
    .string "whistles to command POKéMON.$"

Route27_Text_JoseHasItem:
    .string "Hey! I found something\n"
    .string "shiny while bird-watching!\p"
    .string "Here, you can have it!$"

Route27_Text_JoseGaveItem:
    .string "I find all sorts of things\n"
    .string "out here on ROUTE 27.\p"
    .string "I'll let you know if I find\n"
    .string "anything else!$"

Route27_Text_JoseNoRoom:
    .string "Hmm, your BAG is full.\p"
    .string "Come back when you have room.$"

TohjoFalls_Text_Sign:
    .string "TOHJO FALLS\p"
    .string "THE LINK BETWEEN KANTO AND JOHTO$"

Route27_Text_FisherScottSeen:
    .string "{JPN}こんにちはちょうしがいいな！\p"
    .string "リーグチャンピオンだってぶっとばせ\n"
    .string "そうなきぶんだ！$"

Route27_Text_FisherScottBeaten:
    .string "{JPN}いやだ！このしょうぶではぜったいに\n"
    .string "まけない！$"

Route27_Text_FisherScottAfter:
    .string "{JPN}つりとおなじであきらめてしまえばポ\n"
    .string "ケモンもそこでおわりだ。$"
