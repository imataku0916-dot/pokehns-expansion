UnionCave_B2F_hns_MapScripts::
	.byte 0

UnionCave_B2F_EventScript_CooltrainerNick::
	trainerbattle_single TRAINER_NICK_HNS, UnionCave_B2F_Text_CooltrainermNickSeen, UnionCave_B2F_Text_CooltrainermNickBeaten
	msgbox UnionCave_B2F_Text_CooltrainermNickAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B2F_EventScript_CooltrainerfGwen::
	trainerbattle_single TRAINER_GWEN_HNS, UnionCave_B2F_Text_CooltrainerfGwenSeen, UnionCave_B2F_Text_CooltrainerfGwenBeaten
	msgbox UnionCave_B2F_Text_CooltrainerfGwenAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B2F_EventScript_CooltrainerfEmma::
	trainerbattle_single TRAINER_EMMA_HNS, UnionCave_B2F_Text_CooltrainerfEmmaSeen, UnionCave_B2F_Text_CooltrainerfEmmaBeaten
	msgbox UnionCave_B2F_Text_CooltrainerfEmmaAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B2F_EventScript_Lapras::
	lock
	faceplayer
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_LAPRAS, 20
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, UnionCave_B2F_EventScript_LaprasRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_UNION_CAVE_LAPRAS
	setflag FLAG_HIDE_UNION_CAVE_LAPRAS
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

UnionCave_B2F_EventScript_LaprasRan::
	release
	end


UnionCave_B2F_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

UnionCave_B2F_EventScript_Item_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

UnionCave_B2F_EventScript_Item_MaxRevive::
	finditem ITEM_MAX_REVIVE
	end

UnionCave_B2F_Text_CooltrainermNickSeen:
	.string "{JPN}にんには2しゅるいいる。\p"
	.string "スタイルのあるにんとないにんだ。\p"
	.string "あなたはどちらタイプ？$"

UnionCave_B2F_Text_CooltrainermNickBeaten:
	.string "{JPN}きみのスタイルさいこうだね！$"

UnionCave_B2F_Text_CooltrainermNickAfter:
	.string "{JPN}きみのポケモンスタイルはたしかにみ\n"
	.string "ごとでカラフルだね。\p"
	.string "これからもどんどんじょうたつしてい\n"
	.string "くだろうね！$"

UnionCave_B2F_Text_CooltrainerfGwenSeen:
	.string "{JPN}いまトレーニングなかなんだけど。い\n"
	.string "っせんどう？$"

UnionCave_B2F_Text_CooltrainerfGwenBeaten:
	.string "{JPN}えーっやだ！きみはわたしにはてごわ\n"
	.string "いよ。$"

UnionCave_B2F_Text_CooltrainerfGwenAfter:
	.string "{JPN}じょうたつするまでひとりでれんしゅ\n"
	.string "うするつもりだ。$"

UnionCave_B2F_Text_CooltrainerfEmmaSeen:
	.string "{JPN}すきなポケモンがそこにいるならどこ\n"
	.string "へでもいくよ。\p"
	.string "それこそがほんもののトレーナーのや\n"
	.string "りほうだ。$"

UnionCave_B2F_Text_CooltrainerfEmmaBeaten:
	.string "{JPN}これよりじぶんのあかちゃんたちをな\n"
	.string "でていたいよ！$"

UnionCave_B2F_Text_CooltrainerfEmmaAfter:
	.string "{JPN}しゅうにいちどだけあるポケモンがす\n"
	.string "いへんにやってくる。\p"
	.string "あのポケモンをみてみたかったのに…\n"
	.string "…$"
