Route26_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route26_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route26_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route26_EventScript_Jake::
	trainerbattle_single TRAINER_JAKE_HNS, Route26_Text_CooltrainermJakeSeen, Route26_Text_CooltrainermJakeBeaten
	msgbox Route26_Text_CooltrainermJakeAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Gaven::
	trainerbattle_single TRAINER_GAVEN_HNS, Route26_Text_CooltrainermGavenSeen, Route26_Text_CooltrainermGavenBeaten, Route26_EventScript_RegisterGaven
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route26_EventScript_RematchGaven
	msgbox Route26_Text_CooltrainermGavenAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_RegisterGaven::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route26_Text_GavenRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_GAVEN_HNS
	release
	end

Route26_EventScript_RematchGaven::
	trainerbattle_rematch TRAINER_GAVEN_HNS, Route26_Text_GavenRematchIntro, Route26_Text_GavenRematchDefeat
	msgbox Route26_Text_GavenPostRematch, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Joyce::
	trainerbattle_single TRAINER_JOYCE_HNS, Route26_Text_CooltrainerfJoyceSeen, Route26_Text_CooltrainerfJoyceBeaten
	msgbox Route26_Text_CooltrainerfJoyceAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Beth::
	trainerbattle_single TRAINER_BETH_HNS, Route26_Text_CooltrainerfBethSeen, Route26_Text_CooltrainerfBethBeaten, Route26_EventScript_RegisterBeth
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route26_EventScript_RematchBeth
	msgbox Route26_Text_CooltrainerfBethAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_RegisterBeth::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route26_Text_BethRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BETH_HNS
	release
	end

Route26_EventScript_RematchBeth::
	trainerbattle_rematch TRAINER_BETH_HNS, Route26_Text_BethRematchIntro, Route26_Text_BethRematchDefeat
	msgbox Route26_Text_BethPostRematch, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Richard::
	trainerbattle_single TRAINER_RICHARD_HNS, Route26_Text_PsychicRichardSeen, Route26_Text_PsychicRichardBeaten
	msgbox Route26_Text_PsychicRichardAfter, MSGBOX_AUTOCLOSE
	end

Route26_Text_CooltrainermJakeSeen:
    .string "{JPN}ポケモンリーグにむけてさいごのじゅ\n"
    .string "んびをすすめています。$"

Route26_Text_CooltrainermJakeBeaten:
    .string "{JPN}やっちゃった！$"

Route26_Text_CooltrainermJakeAfter:
    .string "{JPN}リーグでかつのはむつかしそうだ。\p"
    .string "もっとトレーニングをつまないと。\p"
    .string "リーグのエリートフォーはジムリーダ\n"
    .string "ーたちよりもてごわいらしい。$"

Route26_Text_CooltrainermGavenSeen:
    .string "{JPN}いかめしいたたかいをけいけんするこ\n"
    .string "とでちからはつよくなる。$"

Route26_Text_CooltrainermGavenBeaten:
    .string "{JPN}うわっ！じんせいはますますきつくな\n"
    .string "った！$"

Route26_Text_CooltrainermGavenAfter:
    .string "{JPN}ポケモンリーグにいくにはビクトリー\n"
    .string "ロードをとっぱしなければならない。\p"
    .string "しかしビクトリーロードはてごわい。\p"
    .string "じっさいそこへいくにんはほとんどい\n"
    .string "ない！$"

Route26_Text_GavenRegister:
    .string "To get to POKéMON LEAGUE, you have\n"
    .string "to get through VICTORY ROAD.\p"
    .string "But VICTORY ROAD is tough.\p"
    .string "Practically nobody goes there!$"

Route26_Text_GavenRematchIntro:
    .string "{JPN}いかめしいしょうぶをけいけんするこ\n"
    .string "とでちからはついていく。$"

Route26_Text_GavenRematchDefeat:
    .string "{JPN}うわっ！ますますきつくなってきた！$"

Route26_Text_GavenPostRematch:
    .string "To get to POKéMON LEAGUE, you have\n"
    .string "to get through VICTORY ROAD.\p"
    .string "But VICTORY ROAD is tough.\p"
    .string "Practically nobody goes there!$"

Route26_Text_CooltrainerfJoyceSeen:
    .string "{JPN}ここまできたんだからきみはきっとつ\n"
    .string "よいにちがいない。\p"
    .string "このしょうぶぜんりょくをつくしてた\n"
    .string "たかうぞ！$"

Route26_Text_CooltrainerfJoyceBeaten:
    .string "{JPN}まさか！しんじられない！$"

Route26_Text_CooltrainerfJoyceAfter:
    .string "{JPN}8にんのジムリーダーをたおしたので\n"
    .string "じしんがついていた。\p"
    .string "つぎはもっとがんばらなきゃ。$"

Route26_Text_CooltrainerfBethSeen:
    .string "{JPN}{RIVAL}というなまえのトレ\n"
    .string "ーナーにまけてしまった。\p"
    .string "かれはほんとうにつよかったけど……\p"
    .string "まるでどんなぎせいをはらってもぜっ\n"
    .string "たいにかたなければならないかのよう\l"
    .string "なかんじだった。\p"
    .string "かのポケモンがきのどくにおもえた。$"

Route26_Text_CooltrainerfBethBeaten:
    .string "{JPN}ポケモンはせんそうのどうぐではない\n"
    .string "。$"

Route26_Text_CooltrainerfBethAfter:
    .string "{JPN}ポケモンはかけがえのないいっしょう\n"
    .string "のパートナーです。$"

Route26_Text_BethRegister:
    .string "POKéMON are invaluable, lifelong\n"
    .string "partners.$"

Route26_Text_BethRematchIntro:
    .string "{JPN}{RIVAL}というなまえのトレ\n"
    .string "ーナーにまけてしまった。\p"
    .string "でもきみにはまけないぞ！$"

Route26_Text_BethRematchDefeat:
    .string "{JPN}ポケモンはせんそうのどうぐではない\n"
    .string "。$"

Route26_Text_BethPostRematch:
    .string "POKéMON are invaluable, lifelong\n"
    .string "partners.$"

Route26_Text_PsychicRichardSeen:
    .string "{JPN}うわぁこんなにたくさんのバッジ！す\n"
    .string "ごいね。\p"
    .string "でもただあつめるだけではまんぞくで\n"
    .string "きないだろう？$"

Route26_Text_PsychicRichardBeaten:
    .string "{JPN}いいたたかいだった！$"

Route26_Text_PsychicRichardAfter:
    .string "{JPN}にんやポケモンはけいけんをつうじて\n"
    .string "せいちょうする。\p"
    .string "なまけたりげんじょうにまんぞくした\n"
    .string "りしてはいけない。$"

Route26_Text_Sign:
    .string "ROUTE 26\p"
    .string "POKéMON LEAGUE\n"
    .string "RECEPTION GATE$"

