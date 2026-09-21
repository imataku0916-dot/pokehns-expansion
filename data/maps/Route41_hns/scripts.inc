Route41_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route41_MapScript_OnTransition
	.byte 0

Route41_MapScript_OnTransition::
	goto_if_eq VAR_COMPLETED_LUGIA, 4, Route41_MapScript_DoNothing
	goto_if_ge VAR_OLIVINE_CITY_STATE, 5, OlivineCity_MapScript_ClearWeather
	end

Route41_MapScript_DoNothing::
	end

Route41_EventScript_Charlie::
	trainerbattle_single TRAINER_CHARLIE_HNS, Route41_Text_SwimmermCharlieSeen, Route41_Text_SwimmermCharlieBeaten
	msgbox Route41_Text_SwimmermCharlieAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermCharlieSeen:
	.string "{JPN}ここのみずはあたたかいな。からだが\n"
	.string "ほぐれてからだがかるくなった。\p"
	.string "もちろんたたかってやるよ！$"

Route41_Text_SwimmermCharlieBeaten:
	.string "{JPN}うわっ！はだがふやけた！$"

Route41_Text_SwimmermCharlieAfter:
	.string "{JPN}こうやってただただよっているだけっ\n"
	.string "てなんだかリラックスできるよね？$"

Route41_EventScript_George::
	trainerbattle_single TRAINER_GEORGE_HNS, Route41_Text_SwimmermGeorgeSeen, Route41_Text_SwimmermGeorgeBeaten
	msgbox Route41_Text_SwimmermGeorgeAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermGeorgeSeen:
	.string "{JPN}ちょっとつかれたな。もしかったらき\n"
	.string "みのポケモンをかしてくれ。$"

Route41_Text_SwimmermGeorgeBeaten:
	.string "{JPN}ハァハァ……$"

Route41_Text_SwimmermGeorgeAfter:
	.string "{JPN}タンバまではすごくとおい。\p"
	.string "でもアサギにもどるのもかんたんじゃ\n"
	.string "ない。\p"
	.string "どうしよう？$"

Route41_EventScript_Berke::
	trainerbattle_single TRAINER_BERKE_HNS, Route41_Text_SwimmermBerkeSeen, Route41_Text_SwimmermBerkeBeaten
	msgbox Route41_Text_SwimmermBerkeAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermBerkeSeen:
	.string "{JPN}うずにさえぎられているあのしまじま\n"
	.string "がみえる？\p"
	.string "きっとなにかひみつがあるにちがいな\n"
	.string "い！$"

Route41_Text_SwimmermBerkeBeaten:
	.string "{JPN}そのつよさのひけつはなんですか？$"

Route41_Text_SwimmermBerkeAfter:
	.string "{JPN}それはくらくあらしのよるだった……\p"
	.string "しまじまからこのきょだいなポケモン\n"
	.string "がとんでくるのをみた。\p"
	.string "そのぎんいろのつばさからはねがまい\n"
	.string "ちっていた。$"

Route41_EventScript_Kirk::
	trainerbattle_single TRAINER_KIRK_HNS, Route41_Text_SwimmermKirkSeen, Route41_Text_SwimmermKirkBeaten
	msgbox Route41_Text_SwimmermKirkAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermKirkSeen:
	.string "{JPN}ここのなみはあれている。\p"
	.string "およいでいるとたいりょくがどんどん\n"
	.string "けずられていく。$"

Route41_Text_SwimmermKirkBeaten:
	.string "{JPN}もうヘトヘトだ！$"

Route41_Text_SwimmermKirkAfter:
	.string "{JPN}ちょうりゅうのせいであのしまにたど\n"
	.string "りつけない。$"

Route41_EventScript_Mathew::
	trainerbattle_single TRAINER_MATHEW_HNS, Route41_Text_SwimmermMathewSeen, Route41_Text_SwimmermMathewBeaten
	msgbox Route41_Text_SwimmermMathewAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermMathewSeen:
	.string "{JPN}うずまきじまのひみつをさがしている\n"
	.string "のですか？$"

Route41_Text_SwimmermMathewBeaten:
	.string "{JPN}おぉきみのスタミナはすごいね！$"

Route41_Text_SwimmermMathewAfter:
	.string "{JPN}うずまきじまのひみつ……\p"
	.string "なかはまっくらだ！$"

Route41_EventScript_Kaylee::
	trainerbattle_single TRAINER_KAYLEE_HNS, Route41_Text_SwimmerfKayleeSeen, Route41_Text_SwimmerfKayleeBeaten
	msgbox Route41_Text_SwimmerfKayleeAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfKayleeSeen:
	.string "{JPN}いまうずまきじまへむかっているとこ\n"
	.string "ろだ。\p"
	.string "ともだちといっしょにたんけんにいく\n"
	.string "んだ。$"

Route41_Text_SwimmerfKayleeBeaten:
	.string "{JPN}そういうやりほうなの？$"

Route41_Text_SwimmerfKayleeAfter:
	.string "{JPN}うずまきじまのしんえんにはきょだい\n"
	.string "なポケモンがいるらしい。\p"
	.string "いったいなになのだろう？$"

Route41_EventScript_Susie::
	trainerbattle_single TRAINER_SUSIE_HNS, Route41_Text_SwimmerfSusieSeen, Route41_Text_SwimmerfSusieBeaten
	msgbox Route41_Text_SwimmerfSusieAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfSusieSeen:
	.string "{JPN}ポケモンのせにのっているすがたとて\n"
	.string "もゆうがですね。$"

Route41_Text_SwimmerfSusieBeaten:
	.string "{JPN}もうまいっちゃった……$"

Route41_Text_SwimmerfSusieAfter:
	.string "{JPN}ラプラスにじょうったしょうねんをだ\n"
	.string "いざいにしたヒットきょくがあったよ\l"
	.string "うな……？$"

Route41_EventScript_Denise::
	trainerbattle_single TRAINER_DENISE_HNS, Route41_Text_SwimmerfDeniseSeen, Route41_Text_SwimmerfDeniseBeaten
	msgbox Route41_Text_SwimmerfDeniseAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfDeniseSeen:
	.string "{JPN}てんきがすごくよくてうっとりしちゃ\n"
	.string "う！$"

Route41_Text_SwimmerfDeniseBeaten:
	.string "{JPN}おぉっ！$"

Route41_Text_SwimmerfDeniseAfter:
	.string "{JPN}ひやけははだにさいあくだ。\p"
	.string "でもひやけとめはつかわない。\p"
	.string "みずをよごすようなことはしない。$"

Route41_EventScript_Kara::
	trainerbattle_single TRAINER_KARA_HNS, Route41_Text_SwimmerfKaraSeen, Route41_Text_SwimmerfKaraBeaten
	msgbox Route41_Text_SwimmerfKaraAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfKaraSeen:
	.string "{JPN}やすみたいときはそのばでみずをかい\n"
	.string "ていればいい。\p"
	.string "そうすればいきがととのいまたげんき\n"
	.string "にすすみつづけられるよ。$"

Route41_Text_SwimmerfKaraBeaten:
	.string "{JPN}おっ！きみのほうがわたしよりげんき\n"
	.string "だね。$"

Route41_Text_SwimmerfKaraAfter:
	.string "{JPN}しまのおくふかくからほうこうがきこ\n"
	.string "えてきた。$"

Route41_EventScript_Wendy::
	trainerbattle_single TRAINER_WENDY_HNS, Route41_Text_SwimmerfWendySeen, Route41_Text_SwimmerfWendyBeaten
	msgbox Route41_Text_SwimmerfWendyAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfWendySeen:
	.string "{JPN}よるになるとスターユはすいめんのち\n"
	.string "かくにあつまります。$"

Route41_Text_SwimmerfWendyBeaten:
	.string "{JPN}あらまあ……$"

Route41_Text_SwimmerfWendyAfter:
	.string "{JPN}スターユのむれがいっせいにひかりか\n"
	.string "がやく。\p"
	.string "あまりのうつくしさにむしろこわいく\n"
	.string "らいだ。$"

Route41_EventScript_Tentacruel1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_NORMAL
	goto_if_ge VAR_TEMP_0, 2, Route41_EventScript_TentacruelAttack1
	msgbox Route41_Text_Tentacruel, MSGBOX_DEFAULT
	waitmoncry
	addvar VAR_TEMP_0, 1
	release
	end
Route41_EventScript_TentacruelAttack1::
	msgbox Route41_Text_TentacruelAttack, MSGBOX_DEFAULT
	waitmessage
	setflag FLAG_NO_WILD_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_TENTACRUEL, 100, ITEM_NONE
	dowildbattle
	closemessage
	clearflag FLAG_NO_WILD_CATCHING
	clearflag FLAG_NO_SHINY
	playse SE_USE_ITEM
	msgbox Route41_Text_TentacruelHeal, MSGBOX_DEFAULT
	setvar VAR_TEMP_0, 0
	closemessage
	release
	end

Route41_EventScript_Tentacruel2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_NORMAL
	goto_if_ge VAR_TEMP_1, 2, Route41_EventScript_TentacruelAttack2
	msgbox Route41_Text_Tentacruel, MSGBOX_DEFAULT
	waitmoncry
	addvar VAR_TEMP_1, 1
	release
	end
Route41_EventScript_TentacruelAttack2::
	msgbox Route41_Text_TentacruelAttack, MSGBOX_DEFAULT
	waitmessage
	setwildbattle SPECIES_TENTACRUEL, 100, ITEM_NONE
	dowildbattle
	closemessage
	playse SE_USE_ITEM
	msgbox Route41_Text_TentacruelHeal, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, 0
	closemessage
	release
	end

Route41_EventScript_Tentacruel3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_NORMAL
	goto_if_ge VAR_TEMP_2, 2, Route41_EventScript_TentacruelAttack3
	msgbox Route41_Text_Tentacruel, MSGBOX_DEFAULT
	waitmoncry
	addvar VAR_TEMP_2, 1
	release
	end
Route41_EventScript_TentacruelAttack3::
	msgbox Route41_Text_TentacruelAttack, MSGBOX_DEFAULT
	waitmessage
	setwildbattle SPECIES_TENTACRUEL, 100, ITEM_NONE
	dowildbattle
	closemessage
	playse SE_USE_ITEM
	msgbox Route41_Text_TentacruelHeal, MSGBOX_DEFAULT
	setvar VAR_TEMP_2, 0
	closemessage
	release
	end

Route41_EventScript_Tentacruel4::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_NORMAL
	goto_if_ge VAR_TEMP_3, 2, Route41_EventScript_TentacruelAttack4
	msgbox Route41_Text_Tentacruel, MSGBOX_DEFAULT
	waitmoncry
	addvar VAR_TEMP_3, 1
	release
	end
Route41_EventScript_TentacruelAttack4::
	msgbox Route41_Text_TentacruelAttack, MSGBOX_DEFAULT
	waitmessage
	setwildbattle SPECIES_TENTACRUEL, 100, ITEM_NONE
	dowildbattle
	closemessage
	playse SE_USE_ITEM
	msgbox Route41_Text_TentacruelHeal, MSGBOX_DEFAULT
	setvar VAR_TEMP_3, 0
	closemessage
	release
	end

Route41_Text_Tentacruel:
	.string "TENTACRUEL: Cruooo...$"

Route41_Text_TentacruelAttack:
	.string "TENTACRUEL: CRUOOOOOO!$"

Route41_Text_TentacruelHeal:
	.string "The TENTACRUEL used RECOVER!\n"
	.string "It is fully healed!$"
