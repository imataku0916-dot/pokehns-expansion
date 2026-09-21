CeladonCity_Gym_hns_MapScripts::
	.byte 0


CeladonCity_Gym_EventScript_Erika::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CELADON_GYM, CeladonCity_Gym_EventScript_Erika_Defeated
	msgbox CeladonCity_Gym_Text_ErikaBeforeBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ERIKA_HNS, CeladonCity_Gym_Text_ErikaBeaten
	message CeladonCity_Gym_Text_PlayerReceivedRainbowBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CeladonCity_Gym_Text_Erika_GiveTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_GIGA_DRAIN
	msgbox CeladonCity_Gym_Text_Erika_ExplainTM, MSGBOX_DEFAULT
	setflag FLAG_BADGE12_GET
	setflag FLAG_DEFEATED_CELADON_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 12
	call Common_EventScript_SetGymTrainers_hns
	clearflag FLAG_HIDE_FOUNTAIN_ERIKA
	closemessage
	release
	end

CeladonCity_Gym_EventScript_Erika_Defeated::
	msgbox CeladonCity_Gym_Text_ErikaAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

CeladonCity_Gym_Text_ErikaBeforeBattle:
	.string "ERIKA: Hello… Lovely weather,\n"
	.string "isn't it? It's so pleasant…\p"
	.string "…I'm afraid I may doze off…\p"
	.string "My name is ERIKA. I am the LEADER\n"
	.string "of CELADON GYM.\p"
	.string "…Oh? All the way from JOHTO, you\n"
	.string "say? How nice…\p"
	.string "Oh. I'm sorry, I didn't realize\n"
	.string "that you wished to challenge me.\p"
	.string "Very well, but I shall not lose.$"

CeladonCity_Gym_Text_ErikaBeaten:
	.string "{JPN}エリカ:あら……わたくしのまけです。\p"
	.string "あなたはとてもおつよいのですね……\p"
	.string "レインボーバッジをさしあげます……$"

CeladonCity_Gym_Text_PlayerReceivedRainbowBadge:
	.string "{PLAYER} received RAINBOWBADGE.$"

CeladonCity_Gym_Text_Erika_GiveTM:
	.string "ERIKA: That was a delightful\n"
	.string "match.\p"
	.string "I felt inspired. Please, I wish\n"
	.string "you to have this TM.$"

CeladonCity_Gym_Text_Erika_ExplainTM:
	.string "It is GIGA DRAIN.\p"
	.string "It is a wonderful move that\n"
	.string "drains half the damage it inflicts\l"
	.string "to heal your POKéMON.\p"
	.string "Please use it if it pleases you…$"

CeladonCity_Gym_Text_ErikaAfterBattle:
	.string "ERIKA: Losing leaves a bitter\n"
	.string "aftertaste…\p"
	.string "But knowing that there are strong\n"
	.string "trainers spurs me to do better…$"

CeladonCity_Gym_Text_ErikaRematch:
	.string "ERIKA: Oh, hello.\p"
	.string "What a surprise, KANTO CHAMPION!\p"
	.string "It's so lovely to see you again.\p"
	.string "Your journey must have been so\n"
	.string "exciting.\p"
	.string "Even champions enjoy a challenge.\p"
	.string "Want to have a rematch with me?$"

CeladonCity_Gym_Text_ErikaRematchDefeat:
	.string "{JPN}エリカ:まけたのちのあとあじはやっ\n"
	.string "ぱりにがい……\p"
	.string "でもつよいトレーナーがいるってしる\n"
	.string "ともっとがんばろうってきもちになる\l"
	.string "の……$"

CeladonCity_Gym_EventScript_Michelle::
	trainerbattle_single TRAINER_MICHELLE_HNS, CeladonCity_Gym_Text_LassMichelleSeen, CeladonCity_Gym_Text_LassMichelleBeaten
	msgbox CeladonCity_Gym_Text_LassMichelleAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_LassMichelleSeen:
	.string "{JPN}じょしげんていのジムってめずらしい\n"
	.string "とおもう？$"

CeladonCity_Gym_Text_LassMichelleBeaten:
	.string "{JPN}うわっキモっ！$"

CeladonCity_Gym_Text_LassMichelleAfter:
	.string "{JPN}ちょっとうっかりしただけだよそれだ\n"
	.string "けさ！$"


CeladonCity_Gym_EventScript_Tanya::
	trainerbattle_single TRAINER_TANYA_HNS, CeladonCity_Gym_Text_PicnickerTanyaSeen, CeladonCity_Gym_Text_PicnickerTanyaBeaten
	msgbox CeladonCity_Gym_Text_PicnickerTanyaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_PicnickerTanyaSeen:
	.string "{JPN}えっしょうぶ？ちょっとこわいけどい\n"
	.string "いよ！$"

CeladonCity_Gym_Text_PicnickerTanyaBeaten:
	.string "{JPN}えそれだけ？$"

CeladonCity_Gym_Text_PicnickerTanyaAfter:
	.string "{JPN}おぉきみのバッジこんなにたくさんあ\n"
	.string "るんだね。そりゃあわたしにはかてな\l"
	.string "かったわけだ！$"

CeladonCity_Gym_EventScript_Julia::
	trainerbattle_single TRAINER_JULIA_HNS, CeladonCity_Gym_Text_BeautyJuliaSeen, CeladonCity_Gym_Text_BeautyJuliaBeaten
	msgbox CeladonCity_Gym_Text_BeautyJuliaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_BeautyJuliaSeen:
	.string "{JPN}このはなをみてた？それともわたしを\n"
	.string "みてたの？$"

CeladonCity_Gym_Text_BeautyJuliaBeaten:
	.string "{JPN}なんてうっとうしいんだ！$"

CeladonCity_Gym_Text_BeautyJuliaAfter:
	.string "{JPN}エリカのようにじょうひんなじょせい\n"
	.string "になるにはどうすればいいですか？$"

CeladonCity_Gym_EventScript_Jo::
	trainerbattle_double TRAINER_JO_AND_ZOE_HNS, CeladonCity_Gym_Text_TwinsJoAndZoe1Seen, CeladonCity_Gym_Text_TwinsJoAndZoe1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox CeladonCity_Gym_Text_TwinsJoAndZoe1After, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Zoe::
	trainerbattle_double TRAINER_JO_AND_ZOE_HNS, CeladonCity_Gym_Text_TwinsJoAndZoe2Seen, CeladonCity_Gym_Text_TwinsJoAndZoe2Beaten, Route104_Text_GinaNotEnoughMons
	msgbox CeladonCity_Gym_Text_TwinsJoAndZoe2After, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_TwinsJoAndZoe1Seen:
	.string "{JPN}エリカにおそわったポケモンのわざを\n"
	.string "おみせします！$"

CeladonCity_Gym_Text_TwinsJoAndZoe1Beaten:
	.string "{JPN}あぁ……まけた……$"

CeladonCity_Gym_Text_TwinsJoAndZoe1After:
	.string "{JPN}エリカがわたしたちのかたきをとって\n"
	.string "くれるわ！$"

CeladonCity_Gym_Text_TwinsJoAndZoe2Seen:
	.string "{JPN}エリカをまもるぞ！$"

CeladonCity_Gym_Text_TwinsJoAndZoe2Beaten:
	.string "{JPN}かてなかった……$"

CeladonCity_Gym_Text_TwinsJoAndZoe2After:
	.string "{JPN}エリカはとっくにとっくにつよくなっ\n"
	.string "てる！$"

CeladonCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE12_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
	msgbox CeladonCity_Gym_Text_GymStatue
	releaseall
	end

CeladonCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

CeladonCity_Gym_Text_GymStatue::
    .string "CELADON POKéMON GYM\n"
    .string "LEADER: ERIKA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"

CeladonCity_Gym_Text_GymStatuePlayerWon::
    .string "CELADON POKéMON GYM\n"
    .string "LEADER: ERIKA\p"
    .string "WINNING TRAINERS:\n"
	.string "BLUE, RED, {PLAYER}$"
