Route8_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route8_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route8_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route8_EventScript_Dwayne::
	trainerbattle_single TRAINER_DWAYNE_HNS, Route8_Text_BikerDwayneSeen, Route8_Text_BikerDwayneBeaten
	msgbox Route8_Text_BikerDwayneAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Harris::
	trainerbattle_single TRAINER_HARRIS_HNS, Route8_Text_BikerHarrisSeen, Route8_Text_BikerHarrisBeaten
	msgbox Route8_Text_BikerHarrisAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Zeke::
	trainerbattle_single TRAINER_ZEKE_HNS, Route8_Text_BikerZekeSeen, Route8_Text_BikerZekeBeaten
	msgbox Route8_Text_BikerZekeAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Sam::
	trainerbattle_single TRAINER_SAM_HNS, Route8_Text_SupernerdSamSeen, Route8_Text_SupernerdSamBeaten
	msgbox Route8_Text_SupernerdSamAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Tom::
	trainerbattle_single TRAINER_TOM_HNS, Route8_Text_SupernerdTomSeen, Route8_Text_SupernerdTomBeaten
	msgbox Route8_Text_SupernerdTomAfter, MSGBOX_AUTOCLOSE
	end

Route8_Text_BikerDwayneSeen:
	.string "{JPN}ぼくたちはカントーポケモンれんめい\n"
	.string "のトレーナーグループだ。\p"
	.string "おまえをひきつぶしてやる！$"

Route8_Text_BikerDwayneBeaten:
	.string "{JPN}ああごめんなさい！$"

Route8_Text_BikerDwayneAfter:
	.string "{JPN}カントーポケモンれんめいはけっして\n"
	.string "ほろびない！$"

Route8_Text_BikerHarrisSeen:
	.string "{JPN}けいかんがおれたちのちかつうろをふ\n"
	.string "うさした！\p"
	.string "マジではらがたつ！$"

Route8_Text_BikerHarrisBeaten:
	.string "{JPN}すすみません！$"

Route8_Text_BikerHarrisAfter:
	.string "{JPN}ジョウトちほうのどこかのガキにぜん\n"
	.string "めつさせられた……$"

Route8_Text_BikerZekeSeen:
	.string "{JPN}おれたちはカントーポケモンれんめい\n"
	.string "だ！そうだぜ！$"

Route8_Text_BikerZekeBeaten:
	.string "{JPN}うわっ！ごめんなさい！$"

Route8_Text_BikerZekeAfter:
	.string "{JPN}これからはだれにもめいわくをかけな\n"
	.string "いようにします……$"

Route8_Text_SupernerdSamSeen:
	.string "{JPN}リニアはどのようにうごくのですか？$"

Route8_Text_SupernerdSamBeaten:
	.string "{JPN}ただリニアをみたいだけなんだけど…\n"
	.string "…$"

Route8_Text_SupernerdSamAfter:
	.string "{JPN}じしゃくのちからはすごい！$"

Route8_Text_SupernerdTomSeen:
	.string "{JPN}ふむ…ジムバッジをたくさんもってい\n"
	.string "るね。$"

Route8_Text_SupernerdTomBeaten:
	.string "{JPN}やっぱりな……てごわいな！$"

Route8_Text_SupernerdTomAfter:
	.string "{JPN}ジムバッジはしょうぶでゆうりにたた\n"
	.string "かえるようになります。$"

Route8_Text_LockedDoor:
	.string "It's locked…$"

Route8_Text_UndergroundPathSign:
	.string "The flyer's torn.\p"
	.string "It's impossible to read…$"
