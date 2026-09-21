SaffronCity_Gym_hns_MapScripts::
	.byte 0

SaffronCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_SAFFRON_GYM, SaffronCity_Gym_EventScript_GymGuy2
	msgbox SaffronCity_Gym_Text_GymGuideIntro, MSGBOX_NPC
	end

SaffronCity_Gym_EventScript_GymGuy2::
	msgbox SaffronCity_Gym_Text_GymGuideWin, MSGBOX_NPC
	end

SaffronCity_Gym_EventScript_Rebecca::
	trainerbattle_single TRAINER_REBECCA_HNS, SaffronCity_Gym_Text_MediumRebeccaSeen, SaffronCity_Gym_Text_MediumRebeccaBeaten
	msgbox SaffronCity_Gym_Text_MediumRebeccaAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Franklin::
	trainerbattle_single TRAINER_FRANKLIN_HNS, SaffronCity_Gym_Text_PsychicFranklinSeen, SaffronCity_Gym_Text_PsychicFranklinBeaten
	msgbox SaffronCity_Gym_Text_PsychicFranklinAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Doris::
	trainerbattle_single TRAINER_DORIS_HNS, SaffronCity_Gym_Text_MediumDorisSeen, SaffronCity_Gym_Text_MediumDorisBeaten
	msgbox SaffronCity_Gym_Text_MediumDorisAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Jared::
	trainerbattle_single TRAINER_JARED_HNS, SaffronCity_Gym_Text_PsychicJaredSeen, SaffronCity_Gym_Text_PsychicJaredBeaten
	msgbox SaffronCity_Gym_Text_PsychicJaredAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Sabrina::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SAFFRON_GYM, SaffronCity_Gym_EventScript_Sabrina_Defeated
	msgbox SaffronCity_Gym_Text_SabrinaIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SABRINA_HNS, SaffronCity_Gym_Text_SabrinaWinLoss
	message SaffronCity_Gym_Text_ReceivedMarshBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SaffronCity_Gym_Text_MarshBadgeInfo, MSGBOX_DEFAULT
	msgbox SaffronCity_Gym_Text_Sabrina_GiveTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_SKILL_SWAP
	msgbox SaffronCity_Gym_Text_Sabrina_ExplainTM, MSGBOX_DEFAULT
	setflag FLAG_BADGE13_GET
	setflag FLAG_DEFEATED_SAFFRON_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 13
	call Common_EventScript_SetGymTrainers_hns
	closemessage
	clearflag FLAG_HIDE_OLIVINE_SABRINA
	release
	end

SaffronCity_Gym_EventScript_Sabrina_Defeated::
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_Gym_Text_SabrinaIntro:
	.string "SABRINA: I knew you were coming…\p"
	.string "Three years ago I had a vision\n"
	.string "of your arrival.\p"
	.string "You're after my BADGE.\p"
	.string "I don't enjoy battling, but it's\n"
	.string "my duty as a LEADER to confer\l"
	.string "BADGES on anyone who has proven\l"
	.string "him- or herself worthy.\p"
	.string "Since you wish it, I will show\n"
	.string "you my psychic powers!$"

SaffronCity_Gym_Text_SabrinaWinLoss:
	.string "{JPN}ナツメ:あなたのちから……\p"
	.string "わたしのよそうをはるかにこえた……\p"
	.string "みらいのすべてをよそくすることは\n"
	.string "できないのかもしれない……\p"
	.string "あなたのかち。ゴールドバッジを\n"
	.string "うけとって。$"

SaffronCity_Gym_Text_ReceivedMarshBadge:
	.string "{PLAYER} received MARSHBADGE.$"

SaffronCity_Gym_Text_MarshBadgeInfo:
	.string "SABRINA: MARSHBADGE draws out\n"
	.string "your subliminal powers…\p"
	.string "Although I failed to accurately\n"
	.string "predict your power, this much I\l"
	.string "know to be true.\p"
	.string "You will become a celebrated and\n"
	.string "beloved CHAMPION!$"

SaffronCity_Gym_Text_Sabrina_GiveTM:
	.string "Here, take this as well.$"

SaffronCity_Gym_Text_Sabrina_ExplainTM:
	.string "It holds SKILL SWAP.\p"
	.string "It can take your opponents' abilities\n"
	.string "away from them and give them your own.\p"
	.string "Use it wisely...$"

SaffronCity_Gym_Text_SabrinaPostBattle:
	.string "SABRINA: Your love for your\n"
	.string "POKéMON overwhelmed my psychic\l"
	.string "power…\p"
	.string "The power of love, I think, is\n"
	.string "also a kind of psychic power…$"

SaffronCity_Gym_Text_SabrinaRematch:
	.string "SABRINA: Ah, the KANTO CHAMPION.\p"
	.string "I sensed your return.\p"
	.string "Your power has grown immensely.\p"
	.string "Even now, I feel your aura.\p"
	.string "Want to have a rematch with me?$"

SaffronCity_Gym_Text_SabrinaRematchDefeat:
	.string "SABRINA: Your love for your\n"
	.string "POKéMON again overwhelmed my\l"
	.string "psychic power…$"

SaffronCity_Gym_Text_MediumRebeccaSeen:
	.string "{JPN}たおしたすべてのポケモンのちからが\n"
	.string "わたしにあつまる！$"

SaffronCity_Gym_Text_MediumRebeccaBeaten:
	.string "{JPN}つよい……つよすぎる……$"

SaffronCity_Gym_Text_MediumRebeccaAfter:
	.string "{JPN}そのちからのげんはなんですか？$"

SaffronCity_Gym_Text_PsychicFranklinSeen:
	.string "{JPN}サイキックパワーとはあなたのたまし\n"
	.string "いのちからです。$"

SaffronCity_Gym_Text_PsychicFranklinBeaten:
	.string "{JPN}きみのたましいはぼくのたましいより\n"
	.string "もつよいんだ！$"

SaffronCity_Gym_Text_PsychicFranklinAfter:
	.string "{JPN}きみはのうりょくだけでなくたましい\n"
	.string "もつよくなったんだ。$"

SaffronCity_Gym_Text_MediumDorisSeen:
	.string "{JPN}フフフフ……はっきりとみえるぞ。\p"
	.string "おまえのたましいまでけんすかしてい\n"
	.string "る！$"

SaffronCity_Gym_Text_MediumDorisBeaten:
	.string "{JPN}きみのかんがえはわかったけどやっぱ\n"
	.string "りまけてしまった……$"

SaffronCity_Gym_Text_MediumDorisAfter:
	.string "{JPN}ちっ！きみにまけるとよそうしていた\n"
	.string "ことをわすれてたよ。$"

SaffronCity_Gym_Text_PsychicJaredSeen:
	.string "{JPN}となりのかくとうどうじょうはかつて\n"
	.string "このまちのジムだった。$"

SaffronCity_Gym_Text_PsychicJaredBeaten:
	.string "{JPN}あいてにはかなわなかった……$"

SaffronCity_Gym_Text_PsychicJaredAfter:
	.string "{JPN}かくとうどうじょうのたつじんである\n"
	.string "からてのおうがナツメにうちまかされ\l"
	.string "てしまった。$"

SaffronCity_Gym_Text_GymGuideIntro:
	.string "Yo, CHAMP in making!\p"
	.string "A trainer as skilled as you\n"
	.string "doesn't need to be told how to\l"
	.string "deal with PSYCHIC-type POKéMON,\l"
	.string "right?\p"
	.string "I expect great things from you!\p"
	.string "Good luck!$"

SaffronCity_Gym_Text_GymGuideWin:
	.string "That was another fantastic battle!$"

SaffronCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE13_GET, SaffronCity_Gym_EventScript_GymStatuePostVictory
	msgbox SaffronCity_Gym_Text_GymStatue
	releaseall
	end

SaffronCity_Gym_EventScript_GymStatuePostVictory::
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end


SaffronCity_Gym_Text_GymStatue::
    .string "SAFFRON POKéMON GYM\n"
    .string "LEADER: SABRINA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"

SaffronCity_Gym_Text_GymStatuePlayerWon::
    .string "SAFFRON POKéMON GYM\n"
    .string "LEADER: SABRINA\p"
    .string "WINNING TRAINERS:\n"
	.string "BLUE, RED, {PLAYER}$"
