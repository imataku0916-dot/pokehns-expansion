Route45_hns_MapScripts::
	.byte 0

Route45_EventScript_Erik::
	trainerbattle_single TRAINER_ERIK_HNS, Route45_Text_HikerErikSeen, Route45_Text_HikerErikBeaten
	msgbox Route45_Text_HikerErikAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Michael::
	trainerbattle_single TRAINER_MICHAEL_HNS, Route45_Text_HikerMichaelSeen, Route45_Text_HikerMichaelBeaten
	msgbox Route45_Text_HikerMichaelAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Parry::
	trainerbattle_single TRAINER_PARRY_HNS, Route45_Text_HikerParrySeen, Route45_Text_HikerParryBeaten, Route45_EventScript_RegisterParry
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route45_EventScript_RematchParry
	msgbox Route45_Text_HikerParryAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_RegisterParry::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route45_Text_ParryRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_PARRY_HNS
	release
	end

Route45_EventScript_RematchParry::
	trainerbattle_rematch TRAINER_PARRY_HNS, Route45_Text_ParryRematchIntro, Route45_Text_ParryRematchDefeat
	msgbox Route45_Text_ParryPostRematch, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Timothy::
	trainerbattle_single TRAINER_TIMOTHY_HNS, Route45_Text_HikerTimothySeen, Route45_Text_HikerTimothyBeaten
	msgbox Route45_Text_HikerTimothyAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Kenji::
	trainerbattle_single TRAINER_KENJI_HNS, Route45_Text_BlackbeltKenjiSeen, Route45_Text_BlackbeltKenjiBeaten, Route45_EventScript_RegisterKenji
	goto_if_set FLAG_KENJI_HAS_ITEM_HNS, Route45_EventScript_KenjiGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route45_EventScript_RematchKenji
	msgbox Route45_Text_BlackbeltKenjiAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_RegisterKenji::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route45_Text_KenjiRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_KENJI_HNS
	release
	end

Route45_EventScript_RematchKenji::
	trainerbattle_rematch TRAINER_KENJI_HNS, Route45_Text_KenjiRematchIntro, Route45_Text_KenjiRematchDefeat
	msgbox Route45_Text_KenjiPostRematch, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_KenjiGiveItem::
	msgbox Route45_Text_KenjiHasItem, MSGBOX_DEFAULT
	giveitem VAR_KENJI_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route45_EventScript_KenjiNoRoom
	clearflag FLAG_KENJI_HAS_ITEM_HNS
	msgbox Route45_Text_KenjiGaveItem, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_KenjiNoRoom::
	msgbox Route45_Text_KenjiNoRoom, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Ryan::
	trainerbattle_single TRAINER_RYAN_HNS, Route45_Text_CooltrainermRyanSeen, Route45_Text_CooltrainermRyanBeaten
	msgbox Route45_Text_CooltrainermRyanAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Kelly::
	trainerbattle_single TRAINER_KELLY_HNS, Route45_Text_CooltrainerfKellySeen, Route45_Text_CooltrainerfKellyBeaten
	msgbox Route45_Text_CooltrainerfKellyAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Quentin::
	trainerbattle_single TRAINER_QUENTIN_HNS, Route45_Text_CamperQuentinSeen, Route45_Text_CamperQuentinBeaten
	msgbox Route45_Text_CamperQuentinAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Sign::
	msgbox Route45_Text_Sign, MSGBOX_SIGN
	end

Route45_EventScript_Item_Elixir::
	finditem ITEM_ELIXIR
	end

Route45_EventScript_Item_Max_Potion::
	finditem ITEM_MAX_POTION
	end

Route45_EventScript_Item_Full_Heal::
	finditem ITEM_FULL_HEAL
	end

Route45_EventScript_Item_Nugget::
	finditem ITEM_NUGGET
	end

Route45_Text_HikerErikSeen:
    .string "{JPN}どんなことにもそなえよう！\p"
    .string "きみのポケモンがきちんとそだてられ\n"
    .string "ているかちょっとみてみよう！$"

Route45_Text_HikerErikBeaten:
    .string "{JPN}あそれなくしちゃった！$"

Route45_Text_HikerErikAfter:
    .string "{JPN}フスベのこおりのみちにもどってもう\n"
    .string "すこしトレーニングをしよう。$"

Route45_Text_HikerMichaelSeen:
    .string "{JPN}よお！きみなかなかのきがいがあるな\n"
    .string "！でもな\p"
    .string "きがいだけならおれがナンバーワンだ\n"
    .string "！$"

Route45_Text_HikerMichaelBeaten:
    .string "{JPN}ぼくのポケモンはもっとげんきをださ\n"
    .string "なきゃいけなかった！$"

Route45_Text_HikerMichaelAfter:
    .string "{JPN}うわぁマックスアップだいすき！うー\n"
    .string "んうまい！\p"
    .string "ポケモンをどんどんのんでるよ！\p"
    .string "どうしようもないんだ！$"

Route45_Text_HikerParrySeen:
    .string "{JPN}ぼくのポケモンはパワーまんたんだ！$"

Route45_Text_HikerParryBeaten:
    .string "{JPN}ワハハハ！おれってだいのまけいぬだ\n"
    .string "！$"

Route45_Text_HikerParryAfter:
    .string "{JPN}ぼくかんがえるのってあんまりとくい\n"
    .string "じゃないんだわかる？\p"
    .string "だからただちからまかせにつっぱしる\n"
    .string "だけさ！$"

Route45_Text_ParryRegister:
    .string "I'm not much good at thinking,\n"
    .string "see?\p"
    .string "So, I just plow ahead with power!$"

Route45_Text_ParryRematchIntro:
    .string "{JPN}ぼくのポケモンはパワーまんてんだ！$"

Route45_Text_ParryRematchDefeat:
    .string "{JPN}ワハハハ！おれはだいのまけいぬだ！$"

Route45_Text_ParryPostRematch:
    .string "I'm not much good at thinking,\n"
    .string "see?\p"
    .string "So, I just plow ahead with power!$"

Route45_Text_HikerTimothySeen:
    .string "{JPN}なぜぼくはやまにのぼるのか？\p"
    .string "だってそこにあるから。\p"
    .string "なぜぼくはポケモンをそだてるのか？\p"
    .string "だってそこにあるから！$"

Route45_Text_HikerTimothyBeaten:
    .string "{JPN}そんしつ……それもあるんだ！$"

Route45_Text_HikerTimothyAfter:
    .string "{JPN}ぼくのじんせいでさいこうのできごと\n"
    .string "はポケモンをはっけんしたことだった\l"
    .string "。$"

Route45_Text_HikerParryGivesIron:
    .string "I just can't find a way to win!\p"
    .string "Keep it up!\p"
    .string "Oh, and take this -- it's the\n"
    .string "gift you couldn't take when we\n"
    .string "last met.$"

Route45_Text_BlackbeltKenjiSeen:
    .string "{JPN}ここでひとりでトレーニングしていた\n"
    .string "んだ。\p"
    .string "これがおれのどりょくのせいかだ！$"

Route45_Text_BlackbeltKenjiBeaten:
    .string "{JPN}わああっ！$"

Route45_Text_BlackbeltKenjiAfter:
    .string "{JPN}これはきょくたんなしゅだんをこうじ\n"
    .string "るひつようがある。\p"
    .string "やまへにげこみこどくのなかでしゅぎ\n"
    .string "ょうにはげまなければならない。$"

Route45_Text_KenjiRegister:
    .string "This calls for extreme measures.\p"
    .string "I must take to the hills and train\n"
    .string "in solitude.$"

Route45_Text_KenjiRematchIntro:
    .string "{JPN}ここでひとりでトレーニングしていた\n"
    .string "んだ。\p"
    .string "これがぼくのどりょくのせいかだ！$"

Route45_Text_KenjiRematchDefeat:
    .string "{JPN}わあああっ！$"

Route45_Text_KenjiPostRematch:
    .string "This calls for extreme measures.\p"
    .string "I must take to the hills and train\n"
    .string "in solitude.$"

Route45_Text_KenjiHasItem:
    .string "Hey! I'm taking a break from\n"
    .string "training.\p"
    .string "I found something good while I\n"
    .string "was out. Here, take it!$"

Route45_Text_KenjiGaveItem:
    .string "Use it well!\p"
    .string "I need to get back to my\n"
    .string "training. Oooooaaarrrgh!$"

Route45_Text_KenjiNoRoom:
    .string "Hmm, your BAG is full.\p"
    .string "Come back when you have room.$"

Route45_Text_BlackbeltKenjiMorning:
    .string "I'm going to train a bit more\n"
    .string "before I break for lunch.$"

Route45_Text_BlackbeltKenjiNight:
    .string "We had plenty of rest at lunch, so\p"
    .string "now we're all ready to go again!\p"
    .string "We're going to train again!$"

Route45_Text_CooltrainermRyanSeen:
    .string "{JPN}ポケモンをそだてることについてどう\n"
    .string "おもいますか？$"

Route45_Text_CooltrainermRyanBeaten:
    .string "{JPN}きみにはかんしんしたよ。$"

Route45_Text_CooltrainermRyanAfter:
    .string "{JPN}ポケモンをたいせつにそだてているよ\n"
    .string "うですね。\p"
    .string "きづいたきずながピンチのときにあな\n"
    .string "たをすくってくれるでしょう。$"

Route45_Text_CooltrainerfKellySeen:
    .string "{JPN}しょうぶのせんりゃくは？\p"
    .string "きょうりょくなわざをむやみにつかう\n"
    .string "のはおろかなことだ。$"

Route45_Text_CooltrainerfKellyBeaten:
    .string "{JPN}わかった。まけたよ。$"

Route45_Text_CooltrainerfKellyAfter:
    .string "{JPN}あまりにきょうりょくなわざにはさん\n"
    .string "せいできません。\p"
    .string "かちたいですがポケモンにきずをおわ\n"
    .string "せたくもありません。$"

Route45_Text_CamperQuentinSeen:
    .string "{JPN}ぼくはほんとうにほんとうにタフなん\n"
    .string "だ！$"

Route45_Text_CamperQuentinBeaten:
    .string "{JPN}トレーナーヒルではかなりてずよかっ\n"
    .string "た……$"

Route45_Text_CamperQuentinAfter:
    .string "{JPN}トレーナーヒルにはいったことある？\p"
    .string "あそこではぜったいにまけたことがな\n"
    .string "いんだけど……$"

Route45_Text_Sign:
    .string "ROUTE 45\n"
    .string "MOUNTAIN RD. AHEAD$"
