Route44_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route44_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route44_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route44_EventScript_Wilton::
	trainerbattle_single TRAINER_WILTON_HNS, Route44_Text_FisherWilton1Seen, Route44_Text_FisherWilton1Beaten, Route44_EventScript_RegisterWilton
	goto_if_set FLAG_WILTON_HAS_ITEM_HNS, Route44_EventScript_WiltonGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route44_EventScript_RematchWilton
	msgbox Route44_Text_FisherWiltonHugePoliwag, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_RegisterWilton::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route44_Text_WiltonRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_WILTON_HNS
	release
	end

Route44_EventScript_RematchWilton::
	trainerbattle_rematch TRAINER_WILTON_HNS, Route44_Text_WiltonRematchIntro, Route44_Text_WiltonRematchDefeat
	msgbox Route44_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_WiltonGiveItem::
	msgbox Route44_Text_WiltonHasItem, MSGBOX_DEFAULT
	giveitem VAR_WILTON_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route44_EventScript_WiltonNoRoom
	clearflag FLAG_WILTON_HAS_ITEM_HNS
	msgbox Route44_Text_WiltonGaveItem, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_WiltonNoRoom::
	msgbox Route44_Text_WiltonNoRoom, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Edgar::
	trainerbattle_single TRAINER_EDGAR_HNS, Route44_Text_FisherEdgarSeen, Route44_Text_FisherEdgarBeaten
	msgbox Route44_Text_FisherEdgarAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Vance::
	trainerbattle_single TRAINER_VANCE_HNS, Route44_Text_BirdKeeperVance1Seen, Route44_Text_BirdKeeperVance1Beaten, Route44_EventScript_RegisterVance
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route44_EventScript_RematchVance
	msgbox Route44_Text_BirdKeeperVanceBirds, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_RegisterVance::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route44_Text_VanceRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_VANCE_HNS
	release
	end

Route44_EventScript_RematchVance::
	trainerbattle_rematch TRAINER_VANCE_HNS, Route44_Text_VanceRematchIntro, Route44_Text_VanceRematchDefeat
	msgbox Route44_Text_VancePostRematch, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Phil::
	trainerbattle_single TRAINER_PHIL_HNS, Route44_Text_PsychicPhilSeen, Route44_Text_PsychicPhilBeaten
	msgbox Route44_Text_PsychicPhilAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Zach::
	trainerbattle_single TRAINER_ZACH_HNS, Route44_Text_PokemaniacZachSeen, Route44_Text_PokemaniacZachBeaten
	msgbox Route44_Text_PokemaniacZachAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN_HNS, Route44_Text_CooltrainermAllenSeen, Route44_Text_CooltrainermAllenBeaten
	msgbox Route44_Text_CooltrainermAllenAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Cybil::
	trainerbattle_single TRAINER_CYBIL_HNS, Route44_Text_CooltrainerfCybilSeen, Route44_Text_CooltrainerfCybilBeaten
	msgbox Route44_Text_CooltrainerfCybilAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Sign1::
	msgbox Route44_Text_Sign1, MSGBOX_SIGN
	end

Route44_EventScript_Sign2::
	msgbox Route44_Text_Sign2, MSGBOX_SIGN
	end

Route44_EventScript_Item_MaxRepel::
	finditem ITEM_MAX_REPEL
	end

Route44_EventScript_Item_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

Route44_EventScript_Item_Elixir::
	finditem ITEM_ELIXIR
	end

Route44_Text_FisherWilton1Seen:
    .string "{JPN}うわっ！おまえのせいでニョロモをに\n"
    .string "がしちゃったじゃないか！\p"
    .string "どうしてくれるんだ？$"

Route44_Text_FisherWilton1Beaten:
    .string "{JPN}もうわすれてください。$"

Route44_Text_FisherWiltonHugePoliwag:
    .string "That POLIWAG that got away…\n"
    .string "it was huge.\p"
    .string "I swear it must've been\n"
    .string "16 feet long!$"

Route44_Text_WiltonRegister:
    .string "That POLIWAG that got away…\n"
    .string "it was huge.\p"
    .string "I swear it must've been\n"
    .string "16 feet long!$"

Route44_Text_WiltonRematchIntro:
    .string "{JPN}うわっ！おまえのせいでニョロモをに\n"
    .string "がしちゃったじゃないか！\p"
    .string "どうしてくれるんだ？$"

Route44_Text_WiltonRematchDefeat:
    .string "{JPN}もうわすれてください。$"

Route44_Text_WiltonPostRematch:
    .string "That POLIWAG that got away…\n"
    .string "it was huge.\p"
    .string "I swear it must've been\n"
    .string "16 feet long!$"

Route44_Text_WiltonHasItem:
    .string "Hey! I reeled in something\n"
    .string "other than a POKéMON!\p"
    .string "Here, you can have it!$"

Route44_Text_WiltonGaveItem:
    .string "I'll let you know if I\n"
    .string "fish up anything else!$"

Route44_Text_WiltonNoRoom:
    .string "Hmm, your BAG is full.\p"
    .string "Come back when you have room.$"

Route44_Text_FisherEdgarSeen:
    .string "{JPN}もうこれいじょうできないっておもう\n"
    .string "までつりをするんだ。\p"
    .string "しょうぶもたおれるまでやりつづける\n"
    .string "。\p"
    .string "それがぼくとポケモンとのかんけいな\n"
    .string "んだ。$"

Route44_Text_FisherEdgarBeaten:
    .string "{JPN}うーん……これなにかおかしいな。$"

Route44_Text_FisherEdgarAfter:
    .string "{JPN}100かち101はいだ。\p"
    .string "しばらくはしょうぶはしないよ。$"

Route44_Text_BirdKeeperVance1Seen:
    .string "{JPN}でんせつのとりポケモンについてしっ\n"
    .string "ていますか？$"

Route44_Text_BirdKeeperVance1Beaten:
    .string "{JPN}ふぅ！きみはすごいね。$"

Route44_Text_BirdKeeperVanceBirds:
    .string "ARTICUNO, ZAPDOS and MOLTRES are\n"
    .string "the three legendary bird POKéMON.\p"
    .string "I heard there are other legendary\n"
    .string "birds, though.$"

Route44_Text_VanceRegister:
    .string "ARTICUNO, ZAPDOS and MOLTRES are\n"
    .string "the three legendary bird POKéMON.\p"
    .string "I heard there are other legendary\n"
    .string "birds, though.$"

Route44_Text_VanceRematchIntro:
    .string "{JPN}でんせつのとりポケモンについてしっ\n"
    .string "ていますか？$"

Route44_Text_VanceRematchDefeat:
    .string "{JPN}ふぅ！きみはすごいね。$"

Route44_Text_VancePostRematch:
    .string "ARTICUNO, ZAPDOS and MOLTRES are\n"
    .string "the three legendary bird POKéMON.\p"
    .string "I heard there are other legendary\n"
    .string "birds, though.$"

Route44_Text_PsychicPhilSeen:
    .string "{JPN}ぜったいにかつぞ！$"

Route44_Text_PsychicPhilBeaten:
    .string "{JPN}うわっ…なんてしょうげきてきなはい\n"
    .string "ぼくだ…$"

Route44_Text_PsychicPhilAfter:
    .string "{JPN}しんねんをもつことがたいせつです。$"

Route44_Text_PokemaniacZachSeen:
    .string "{JPN}レアなポケモンをてにいれるためなら\n"
    .string "なんでもするぞ！$"

Route44_Text_PokemaniacZachBeaten:
    .string "{JPN}おぉあなたのポケモンすごくみりょく\n"
    .string "てきですね。$"

Route44_Text_PokemaniacZachAfter:
    .string "{JPN}ポケモンがいつもとちがういろをして\n"
    .string "いるとかちがたかくなるんだ。\p"
    .string "え？それちがうってこと？$"

Route44_Text_CooltrainermAllenSeen:
    .string "{JPN}きみのみためからしてゆうしゅうなト\n"
    .string "レーナーだとわかるよ。\p"
    .string "ぼくはポケモンがとくいだけどきみも\n"
    .string "そうみたいだね。$"

Route44_Text_CooltrainermAllenBeaten:
    .string "{JPN}ちっ！かんぜんにわたしのまけだ。$"

Route44_Text_CooltrainermAllenAfter:
    .string "{JPN}うわっ。バッジをいっぱいもってるね\n"
    .string "。\p"
    .string "そりゃあつよいのもうなずけるよ。\p"
    .string "エンジュジムのマツバはまだしゅぎょ\n"
    .string "うちゅうなのかな？\p"
    .string "あいつにはほんとうにやられたよ。$"

Route44_Text_CooltrainerfCybilSeen:
    .string "{JPN}つよそうだな。\p"
    .string "まされたトレーナーはほんのうてきに\n"
    .string "てごわいあいてをもとめるものだ。$"

Route44_Text_CooltrainerfCybilBeaten:
    .string "{JPN}いやっ！これじゃぜんぜんダメだ。$"

Route44_Text_CooltrainerfCybilAfter:
    .string "{JPN}たくさんのしょうぶをけいけんするこ\n"
    .string "とでだれもがじょうたつするものだ。\p"
    .string "いまのじぶん……エリート……になる\n"
    .string "ためにわたしはかぞえきれないほどの\l"
    .string "しょうぶをこなしてきた。$"

Route44_Text_Sign1:
    .string "ROUTE 44\n"
    .string "ICE PATH AHEAD$"

Route44_Text_Sign2:
    .string "ROUTE 44\p"
    .string "MAHOGANY TOWN - BLACKTHORN CITY$"

