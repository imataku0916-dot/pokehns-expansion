UnionCave_B1F_hns_MapScripts::
	.byte 0

UnionCave_B1F_EventScript_HikerPhillip::
	trainerbattle_single TRAINER_PHILLIP_HNS, UnionCave_B1F_Text_HikerPhillipSeen, UnionCave_B1F_Text_HikerPhillipBeaten
	msgbox UnionCave_B1F_Text_HikerPhillipAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_HikerLeonard::
	trainerbattle_single TRAINER_LEONARD_HNS, UnionCave_B1F_Text_HikerLeonardSeen, UnionCave_B1F_Text_HikerLeonardBeaten
	msgbox UnionCave_B1F_Text_HikerLeonardAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_PokemaniacAndrew::
	trainerbattle_single TRAINER_ANDREW_HNS, UnionCave_B1F_Text_PokemaniacAndrewSeen, UnionCave_B1F_Text_PokemaniacAndrewBeaten
	msgbox UnionCave_B1F_Text_PokemaniacAndrewAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_PokemaniacCalvin::
	trainerbattle_single TRAINER_CALVIN_HNS, UnionCave_B1F_Text_PokemaniacCalvinSeen, UnionCave_B1F_Text_PokemaniacCalvinBeaten
	msgbox UnionCave_B1F_Text_PokemaniacCalvinAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_Item_RockTomb::
	finditem ITEM_TM_ROCK_TOMB
	end

UnionCave_B1F_EventScript_Item_Xdefend::
	finditem ITEM_X_DEFEND
	end

UnionCave_B1F_Text_HikerPhillipSeen:
	.string "{JPN}ほかのにんとあうのはひさしぶりだ。\p"
	.string "えんりょしないで。しょうぶしよう！$"

UnionCave_B1F_Text_HikerPhillipBeaten:
	.string "{JPN}ううっ……$"

UnionCave_B1F_Text_HikerPhillipAfter:
	.string "{JPN}ずいぶんながいかんみちにまよってい\n"
	.string "た……\p"
	.string "ここにいるのはべつにかまわないけど\n"
	.string "すっごくおなかがあいた！$"

UnionCave_B1F_Text_HikerLeonardSeen:
	.string "{JPN}まあなんてことだ！らいきゃくだ！$"

UnionCave_B1F_Text_HikerLeonardBeaten:
	.string "{JPN}ワハハハ！おまえはなかなかきのつよ\n"
	.string "いやつだな！$"

UnionCave_B1F_Text_HikerLeonardAfter:
	.string "{JPN}ぼくはここにすんでるんだ。\p"
	.string "きみももしよければここにすんでもい\n"
	.string "いよ。\p"
	.string "だってここにはたっぷりスペースがあ\n"
	.string "るからね。$"

UnionCave_B1F_Text_PokemaniacAndrewSeen:
	.string "{JPN}だれだ？\p"
	.string "わたしとわたしのポケモンをほうっっ\n"
	.string "ておいてくれ！$"

UnionCave_B1F_Text_PokemaniacAndrewBeaten:
	.string "{JPN}いけ…きえろ！$"

UnionCave_B1F_Text_PokemaniacAndrewAfter:
	.string "{JPN}ぼくとぼくのポケモンだけ。うれしさ\n"
	.string "のあまりうきうきしている。$"

UnionCave_B1F_Text_PokemaniacCalvinSeen:
	.string "{JPN}ポケモンのけんきゅうをするためにわ\n"
	.string "ざわざここまできたんだ。\p"
	.string "じっさいのしょうぶでけんきゅうのせ\n"
	.string "いかをおみせしよう！$"

UnionCave_B1F_Text_PokemaniacCalvinBeaten:
	.string "{JPN}ぼくをあいてにじつえんしたんだね！$"

UnionCave_B1F_Text_PokemaniacCalvinAfter:
	.string "{JPN}けんきゅうけっかをまとめてはっぴょ\n"
	.string "うすべきだ。\p"
	.string "もしかしたらウツギきょうじゅみたい\n"
	.string "にゆうめいになれるかもしれない。$"
